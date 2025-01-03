#include<bits/stdc++.h>
using namespace std;

#define dgm_naxmul59 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int inf  = INT_MAX;
int main()
{
    dgm_naxmul59
    string s1,s2;cin>>s1>>s2;

    int n = s2.size();///row
    int m = s1.size();///column

    int LIS[n+1][m+1];

    for( int i=0;i<=n;++i )LIS[i][0]=i;
    for( int i=0;i<=m;++i )LIS[0][i]=i;

    for( int i=1;i<=n;++i ){
            for( int j=1;j<=m;++j ){
                    if(s2[j-1]==s1[i-1]){
                            LIS[i][j] = LIS[i-1][j-1];
                    }
                    else{
                            LIS[i][j] = min({LIS[i-1][j-1], LIS[i-1][j], LIS[i][j-1]}) + 1;
                    }
            }
    }

    for( int i=0;i<=n;++i ){
            for( int j=0;j<=m;++j ){
                    cout<<LIS[i][j]<< ' ';
            }
            cout<<endl;
    }


    int i=n;
    int j = m;

    while(i and j){
            if(LIS[i][j]==LIS[i-1][j-1] and s1[j-1]==s2[i-1]){
                    --i;--j;
            }
            else {
                    if(LIS[i][j]== 1+ LIS[i-1][j-1]){
                            cout<<s1[j-1]<< " Replaces "<<s2[i-1]<<endl;
                            --i,--j;
                    }
                    else if(LIS[i][j]==1+LIS[i-1][j]){
                            cout<<s2[i-1]<<" Inserted\n";
                            --i;
                    }
                    else{
                            cout<< s1[j-1]<<" Deleted\n";
                            --j;
                    }
            }
    }

}


/**
input
7
3 4 -1 0 6 2 3

output table
1 2 1 2 3 3 4
output length
4

*/









