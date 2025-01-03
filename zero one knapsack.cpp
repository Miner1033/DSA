#include<bits/stdc++.h>
using namespace std;

#define dgm_naxmul59 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    dgm_naxmul59

    int n,m;cin>>n>>m;
    int profit[n];
    int weight[n];
    for( int i=0;i<n;++i )cin>>profit[i];
    for( int i=0;i<n;++i )cin>>weight[i];

    int v[n+1][m+1];

    memset(v,0,sizeof(v));

    for( int i=1;i<=n;++i ){///row
            for( int j=1;j<=m;++j ){///column
                    if(j<weight[i-1]){
                            v[i][j] = v[i-1][j];
                    }
                    else{
                            v[i][j] = max(v[i-1][j], profit[i-1] + v[i-1][j-weight[i-1]]);
                    }
            }
    }

    for( int i=0;i<=n;++i ){
            for( int j=0;j<=m;++j ){
                    cout<<v[i][j]<<' ';
            }
            cout<<endl;
    }


    int x[n];

    memset(x,0,sizeof(x));

    int i=n;
    int j=m;

    while(i and j){
            if(v[i][j]==v[i-1][j]){
                    --i;
            }
            else{
                    x[i-1] = 1;
                    --i;
                    j = j-weight[i];
            }
    }

    for( int i=0;i<n;++i )cout<<x[i]<<' ';cout<<endl;
}


/**

4 8
1 2 5 6
2 3 4 5

*/





