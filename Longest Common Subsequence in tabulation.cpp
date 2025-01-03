#include<bits/stdc++.h>
using namespace std;

#define dgm_naxmul59 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    dgm_naxmul59

    string s1,s2;getline(cin,s1);getline(cin,s2 );

    int n = s1.size();
    int m = s2.size();

    int LCS[n+1][m+1];

    memset(LCS,0,sizeof(LCS));

    for( int i=1;i<=n;++i ){///row
            for( int j=1;j<=m;++j ){///column
                    if(s1[i-1]==s2[j-1])LCS[i][j] = 1+LCS[i-1][j-1];
                    else{
                        LCS[i][j] = max(LCS[i-1][j],LCS[i][j-1]);
                    }
            }
    }

    for( int i=0;i<=n;++i ){
            for( int j=0;j<=m;++j ){
                    cout<<LCS[i][j]<<' ';
            }
            cout<<endl;
    }


    int i = n;
    int j = m;
    string ans = "";
    while(i and j){
            if(s1[i-1]==s2[j-1]){
                    ans+=s1[i-1];
                    --i,--j;
            }
            else {
                    --j;
            }
    }
    cout<<ans<<endl;
}


/**

bd
abcd

*/






