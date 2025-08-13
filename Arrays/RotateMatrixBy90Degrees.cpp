#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

void rotateMat(vector<vector<int>>& mat) 
{
    int n = mat.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) 
        {
            swap(mat[i][j], mat[j][i]);
        }
    }
    
    
    for (int i = 0; i < n; i++)
    {
        reverse(mat[i].begin(), mat[i].end());
    }
}

int main() 
{
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));
    
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < n; j++) 
        {
            cin >> mat[i][j];
        }
    }

    rotateMat(mat);

    cout << "Rotated matrix (90 degrees clockwise):\n";
    for (const auto& row : mat) 
    {
        for (int num : row) 
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}