#include<iostream>

using namespace std;

int main()
{

    int m, n, p;

    cin>>m>>n>>p;

    int A[m][p];
    int B[p][n];

    for(int i =0; i < m; i++)
    {
        for(int j = 0; j < p; j++)
        {
            cin>>A[i][j];
        }
    }

    for(int i = 0; i < p; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>B[i][j];
        }
    }

    int C[m][n];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            C[i][j] = 0;
            for(int k = 0; k < p; k++)
            {
                C[i][j] = C[i][j]+(A[i][k] * B[k][j]);
            }
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<(void*) C[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}