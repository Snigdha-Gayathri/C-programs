
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> SetMatrixToZeroBro(vector<vector<int>> & matrix, int n, int m)
    {
     int col0=1;
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                matrix[i][0]=0;
                if(j!=0)
                {
                    matrix[0][j]=0;
                }
                else
                {
                    col0=0;
                }
            }
        }
     }
    
     for(int i=1;i<n;i++)
     {
        for(int j=1;j<m;j++)
        {
            if(matrix[i][j]!=0)
            {
                if(matrix[0][j]==0 || matrix[i][0]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
     }
      if(matrix[0][0]==0)
      {
        for(int j=0;j<m;j++) matrix[0][j]=0;
      }
      if(col0==0)
      {
        for(int i=0;i<n;i++) matrix[i][0]=0;
      }
      return matrix;
    
    }

    cout<<"Enter the size of the matrix: "<<endl;
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>> matrix[n][m];
    cout<<"Enter the elements of the matrix "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i];
        }
    }
    vector<vector<int>> ans = setMatrixToZeroBro(matrix,n,m);
    for(const auto& inner_vect: ans)
    {
        for(int num:inner_vect)
        {
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}