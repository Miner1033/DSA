#include<bits/stdc++.h>
using namespace std;

#define dgm_naxmul59 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
struct Rule
{
    int obj;
    double pbw;
};
bool comp(Rule e1, Rule e2)
{
        return e1.pbw>e2.pbw;
}
int main()
{
        dgm_naxmul59
        int n,m;cin>>n>>m;

        int p[n];
        int w[n];

        for( int i=0;i<n;++i)cin>>p[i];
        for( int i=0;i<n;++i)cin>>w[i];

        Rule ar[n];

        for(int i=0;i<n;++i ){
                ar[i].pbw =  p[i]/w[i];
                ar[i].obj = i;
        }

        sort(ar,ar+n, comp);
        for(int i=0;i<n;++i ){
                cout<<ar[i].pbw<< ' '<<ar[i].obj<<endl;
        }

        double X[n];
        memset(X,0,sizeof(X));

        double RW = m;

        for( int i=0;i<n;++i ){
                if(RW>=w[ar[i].obj]){
                        X[ar[i].obj]=1;
                        RW = RW - w[ar[i].obj];
                }
                else{
                        X[ar[i].obj] = RW/w[ar[i].obj];
                        RW=0;
                }
        }

        double mxp = 0;

        for( int i=0;i<n;++i ){mxp += (X[i]*p[i]);}

        cout<<mxp<<endl;
}


/**
7 15
10 5 15 7 6 18 3
2  3  5 7 1  4 1

55.3333

*/






