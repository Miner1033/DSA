#include<bits/stdc++.h>
using namespace std;

int binary_s(int *ar,int n,int val)
{
    int start=0;
    int low=n-1;

    while(start<=low)
    {
        int mid=(start+low)/2;
        if (ar[mid]==val)
        {
            return mid;
        }
        else if (val<ar[mid])
        {
            low=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return -1;
}


int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<"Search value: ";
    int val;
    cin>>val;
    int p=binary_s(ar,n,val);
    if(p==-1)
    {
        cout<<"Not Found"<<endl;
    }
    else
    {
        cout<<"Found. Index number: "<<p<<endl;
    }


    return 0;
}
