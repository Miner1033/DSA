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
int n;
#define dgm_naxmul59 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int A[100];
int Partitioning(int L,int H)
{
    int pivot=A[L];
    int i=L,j=H;int k=1;
    while(i<j)
    {
        ///cout<< "step: "<<i<< '/'<<j<<endl;

        while(A[i]<=pivot){cout<< "Step: "<<k<<endl;cout<<" i increses: "<<i<<endl;++i;++k;}
        while(A[j]>pivot){
                cout<< "Step: "<<k<<endl; ++k;--j;
        }
        if(i<j){swap(A[i],A[j]);///check inner loop i and j
        cout<<"swap: "<<A[i]<< " and " <<A[j]<<endl;}
    }
    swap(A[L],A[j]);cout<<"Pivot swap: "<<A[L]<< " and " <<A[j]<<endl;
    for(int i=0;i<n;++i)
    {
        cout<<A[i]<<' ';
    }
    cout<<endl;
    return j;
}
void quick_sort(int L,int H)
{
    if(L<H)
    {
        int j=Partitioning(L,H);///partition a list to 2 list
        quick_sort(L,j-1);///left call
        quick_sort(j+1,H);///right call after complete lest call
    }
}

int main()
{
    cin>>n;
    /**
    14
    D
    A
    T
    A
    S
    T
    R
    U
    C
    B
    U
    R
    C
    S
6
8 5 1 3 6 2
    */
    for(int i=0;i<n;++i)
    {
        cin>>A[i];
    }

    A[n]=INT_MAX;///integer maximum
    quick_sort(0,n);
    for(int i=0;i<n;++i)
    {
        cout<<A[i]<<' ';
    }

}


