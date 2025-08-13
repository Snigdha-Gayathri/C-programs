#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

const int BUCKET_SIZE = 10007;

struct Node {
    int key, value;
    Node* next;
    Node(int k, int v) : key(k), value(v), next(nullptr) {}
};

class MyHashMap {
    Node* buckets[BUCKET_SIZE];

public:
    MyHashMap() {
        for (int i = 0; i < BUCKET_SIZE; ++i)
            buckets[i] = nullptr;
    }

    int hash(int key) {
        return key % BUCKET_SIZE;
    }

    void insert(int key, int value) {
        int idx = hash(key);
        Node* head = buckets[idx];
        Node* curr = head;
        while (curr) {
            if (curr->key == key) {
                curr->value = value;
                return;
            }
            curr = curr->next;
        }
        Node* newNode = new Node(key, value);
        newNode->next = head;
        buckets[idx] = newNode;
    }

    int get(int key) {
        int idx = hash(key);
        Node* curr = buckets[idx];
        while (curr) {
            if (curr->key == key) return curr->value;
            curr = curr->next;
        }
        return -1;
    }

    void remove(int key) {
        int idx = hash(key);
        Node* curr = buckets[idx];
        Node* prev = nullptr;
        while (curr) {
            if (curr->key == key) {
                if (prev) prev->next = curr->next;
                else buckets[idx] = curr->next;
                delete curr;
                return;
            }
            prev = curr;
            curr = curr->next;
        }
    }
};

vector<int> processQueries(vector<tuple<int, int, int>> queries) {
    vector<int> results;
    MyHashMap hashmap;

    for (auto [type, key, value] : queries) {
        if (type == 1) hashmap.insert(key, value);
        else if (type == 2) results.push_back(hashmap.get(key));
        else if (type == 3) hashmap.remove(key);
    }

    return results;
}

int main() {
    int n;
    cin >> n;
    vector<tuple<int, int, int>> queries;

    for (int i = 0; i < n; ++i) {
        int type;
        cin >> type;
        if (type == 1) {
            int key, value;
            cin >> key >> value;
            queries.emplace_back(1, key, value);
        } else {
            int key;
            cin >> key;
            queries.emplace_back(type, key, 0);
        }
    }

    vector<int> results = processQueries(queries);
    for (int val : results) {
        cout << val << endl;
    }

    return 0;
}
