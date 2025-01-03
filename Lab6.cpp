#include<iostream>
#include<math.h>
using namespace std;

int binarySearch(int Beg, int End, int item, int ara[])
{
    int mid = floor((Beg+End)/2);
    if(ara[mid] == item) return mid;
    if(Beg> End) return -1;

    if(ara[mid] > item)
    {
        End = mid-1;
    }
    else
    {
        Beg = mid+1;
    }

    int pos = binarySearch(Beg, End, item, ara);

    return pos;
}


int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i = 0; i < n; i++)
    {
        cin>>ara[i];
    }
    int item;
    cin>>item;
    int Beg, End, Mid;
    Beg = 0;
    End = n-1;                      // Calculation before starting search

    int ind = binarySearch(Beg, End, item, ara);

    if(ind == -1) cout<<"Not Found"<<endl;
    else cout<<"Found at Index No: "<<ind<<endl;
    //Mid = floor((Beg+End)/2);



//    while(Beg <= End && ara[Mid]!=item)
//    {
//        if(ara[Mid] < item)
//        {
//            Beg = Mid+1;
//        }
//        else
//        {
//            End = Mid-1;
//        }
//
//        Mid = floor((Beg+End)/2);
//    }
//
//
//    if(Beg > End)
//    {
//        cout<<"Not Found"<<endl;
//    }
//    else
//    {
//        cout<<"Found at Index No.: "<<Mid<<endl;
//    }


    return 0;
}
