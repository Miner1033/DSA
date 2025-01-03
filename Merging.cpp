///Fractional Knapsack Greedy Method
#include<bits/stdc++.h>
using namespace std;


void merging(int ar[],int br[],int pry[], int n, int m,int nn)
{
        int i = 0,j=0,k=0;

        while(i<n and j<m){
                if(ar[i]<br[j]){
                        pry[k]=ar[i];
                        ++i;
                        ++k;

                }
                else{
                        pry[k]=br[j];
                        ++k;
                        ++j;

                }
        }

        for( ; i<n; ++i ){pry[k]=ar[i];++k;}
        for( ; j<m; ++j ){pry[k]=br[j];++k;}


        for( int x=0;x<nn;++x )cout<<pry[x]<<' ';
        cout<<endl;
}
int main()
{
        int n,m;cin>>n>>m;

        int ar[n],br[m];

        for( int i=0;i<n;++i )cin>>ar[i];
        for( int i=0;i<m;++i )cin>>br[i];
        int nn = m+n;
        int pry[nn];
        merging(ar,br,pry,n,m,nn);
}

/*
5 6
1 2 3 4 5
1 3 4 5 7 8
*/

