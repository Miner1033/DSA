#include<iostream>

using namespace std;

void traverse(int n, int ara[])
{

    for(int k = 0; k < n; k++)
    {
        cout<<ara[k]<<" ";
    }

//    int k = 0;
//    while(k < n)
//    {
//        cout<<ara[k]<<" ";
//        k = k+1;
//    }

    return;
}

bool linear_search(int n, int item, int ara[])
{
    for(int k = 0; k < n; k++)
    {
        if(ara[k] == item)
        {
            cout<<"position is: "<<k<<endl;
            return true;
        }
    }
    return false;
}


int main()
{

    int n; // size of an array
    cin>>n;

    int ara[n]; // declaring a n size double array

    for(int i = 0; i < n; i++)
    {
        cin>>ara[i];  // loop for array input
    }

    traverse(n, ara);
    int item;
    cin>>item;
    bool findd = linear_search(n, item, ara);
    if(findd ==  true)cout<<"Found"<<endl;
    else cout<<"Not Found"<<endl;

//    for(int i = 0; i < n; i++)
//    {
//        cout<<(void*)&ara[i]<<endl;
//    }


    return 0;
}
