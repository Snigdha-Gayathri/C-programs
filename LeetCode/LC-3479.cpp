#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Segment tree implementation for finding the leftmost element >= value
struct SegmentTree {
    vector<int> tree;
    int n;

    SegmentTree(const vector<int>& baskets) {
        n = baskets.size();
        tree.resize(4 * n);
        build(baskets, 1, 0, n - 1);
    }

    void build(const vector<int>& baskets, int node, int start, int end) {
        if (start == end) {
            tree[node] = baskets[start];
        } else {
            int mid = (start + end) / 2;
            build(baskets, 2 * node, start, mid);
            build(baskets, 2 * node + 1, mid + 1, end);
            tree[node] = max(tree[2 * node], tree[2 * node + 1]);
        }
    }

    // Finds the first index >= start_pos with value >= val
    int query_leftmost(int val, int node, int start, int end) {
        if (start > end || tree[node] < val) {
            return -1;
        }
        if (start == end) {
            return start;
        }
        int mid = (start + end) / 2;
        int result = -1;
        // Check left child first for "leftmost"
        if (tree[2 * node] >= val) {
            result = query_leftmost(val, 2 * node, start, mid);
        }
        if (result != -1) {
            return result;
        }
        // If not found in left, check right child
        return query_leftmost(val, 2 * node + 1, mid + 1, end);
    }

    void update(int idx, int node, int start, int end) {
        if (start == end) {
            tree[node] = 0; // Mark as used
            return;
        }
        int mid = (start + end) / 2;
        if (start <= idx && idx <= mid) {
            update(idx, 2 * node, start, mid);
        } else {
            update(idx, 2 * node + 1, mid + 1, end);
        }
        tree[node] = max(tree[2 * node], tree[2 * node + 1]);
    }
};

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        SegmentTree st(baskets);
        int unplaced_count = 0;

        for (int fruit_quantity : fruits) {
            int basket_index = st.query_leftmost(fruit_quantity, 1, 0, n - 1);
            if (basket_index != -1) {
                st.update(basket_index, 1, 0, n - 1);
            } else {
                unplaced_count++;
            }
        }
        return unplaced_count;
    }
};

int main() {
    int n;
    cout << "Enter number of fruits/baskets: ";
    cin >> n;

    vector<int> fruits(n), baskets(n);
    cout << "Enter fruits array:\n";
    for (int i = 0; i < n; i++) cin >> fruits[i];
    cout << "Enter baskets array:\n";
    for (int i = 0; i < n; i++) cin >> baskets[i];

    Solution sol;
    int result = sol.numOfUnplacedFruits(fruits, baskets);
    cout << "Number of unplaced fruits: " << result << "\n";

    return 0;
}
