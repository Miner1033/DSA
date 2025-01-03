#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n];
    int ara2[1000];
    memset(ara2, 0, sizeof(ara2));
    for(int i = 0; i < n; i++)
    {
        cin>>ara[i];
        ara2[ara[i]]++;
    }
    for(int i = 0; i < 1000; i++)
    {
//        if(ara2[i] >= 2)
//        {
//            cout<<i<<" is duplicate element"<<endl;
//        }
        if(ara2[i]>=1)
        {
            cout<<"Frequency of "<<i<<" is"<<ara2[i]<<endl;
        }

    }


    return 0;
}
