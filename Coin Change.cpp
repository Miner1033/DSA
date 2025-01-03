#include<bits/stdc++.h>
using namespace std;

#define dgm_naxmul59 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int inf  = INT_MAX;
int main()
{
    dgm_naxmul59

    int n,m;cin>>n>>m;
    int coin[n+1];
    coin[0]=0;
    for( int i=1;i<=n;++i )cin>>coin[i];

    int coins[n+1][m+1];

    for( int i=0;i<=n;++i ){
            coins[i][0] = 0;
    }
    for( int j=1;j<=m;++j ){
            coins[0][j] = inf;
    }

    for( int i=1;i<=n;++i ){
            for( int j=1;j<=m;++j ){
                    if(j<coin[i]){
                            coins[i][j] = coins[i-1][j];
                    }
                    else{
                            coins[i][j] = min( coins[i-1][j], 1+coins[i][j-coin[i]]);
                    }
            }
    }

    for( int i=1;i<=n;++i ){
            for( int j=1;j<=m;++j ){
                    cout<<coins[i][j]<< ' ';
            }
            cout<<endl;
    }

    int i = n;
    int j = m;
    vector<int>select;
    while(i and j ){
            if(coins[i][j]==coins[i-1][j]){
                    --i;
            }
            else{
                    select.push_back(coin[i]);
                    j = j - coin[i];
            }
    }

    for( int i=0;i<select.size(); ++i )cout<<select[i]<< ' ';cout<<endl;
}


/**

3 6
1 2 5
1 2 3 4 5 6
1 1 2 2 3 3
1 1 2 2 1 2
5 1

*/







