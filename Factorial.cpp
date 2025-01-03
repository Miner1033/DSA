#include<bits/stdc++.h>
using namespace std;
int t;
#define ll long long
#define llloop for(ll i=0;i<n;++i)
#define rllloop for(ll i=n-1;i>=0;--i)
#define loop for(int i=0;i<n;++i)
#define rloop for(int i=n-1;i>=0;--i)
#define sloop for(int i=0;i<s.size();++i)
#define vsort sort(v.begin(),v.end())
#define  endl '\n'
#define test cin>>t;
#define cases while(t--){solve(); }
#define asort sort(arr,arr+n)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define print cout<<pry<<'\n'
#define imx INT_MAX
#define imn INT_MIN
#define dgm_naxmul59 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int fact(int n)
{
    if(n==1)return 1;
    int f = n*fact(n-1);
    return f;
}
int main()
{
    cout<<fact(5);
}


