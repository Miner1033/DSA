#include<bits/stdc++.h>
using namespace std;

#define dgm_naxmul59 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    dgm_naxmul59
    int n;cin>>n;

    int List[n];
    for( int i=0;i<n;++i ){
            cin>>List[i];
    }

    int LIS[n];

    for(int i=0;i<n;++i)LIS[i]=1;
    for( int i=1;i<n;++i ){
            for( int j=0;j<i; ++j){
                    if(List[i]>List[j]){
                            LIS[i]=max(1+LIS[j],LIS[i]);
                    }
            }
    }

    for(int i=0;i<n;++i )cout<<LIS[i]<<' ';cout<<endl;
    cout<<*max_element(LIS,LIS+n)<<endl;
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










