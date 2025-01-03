#include<iostream>
#include<math.h>
using namespace std;

int Binary_Search(int BEG, int END, int item, int ara[] )
{
    int MID = floor((BEG+END)/2);

    if(BEG > END)  return -1;           // Base case
    if(ara[MID] == item) return MID;

    if(ara[MID] > item) END = MID-1;
    else BEG = MID+1;


    int index = Binary_Search(BEG, END, item, ara);

    return index;


}


int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i = 0; i < n; i++)          // array size declare and input
    {
        cin>>ara[i];
    }

    int item;                      // Finding the value of item
    cin>>item;

    int BEG, END, MID;
    BEG = 0;
    END = n-1;                      //Calculation before starting steps
//    MID = floor((BEG+END)/2);
//
//    while(BEG <= END && ara[MID] != item)
//    {
//        if(ara[MID] < item) BEG = MID+1;        // Steps inside loop O(logn)
//        else END = MID-1;
//
//        MID = floor((BEG+END)/2);
//    }

    //if(BEG > END) cout<<"NOT FOUND"<<endl;              // Decision whether The item is found or not
    //else cout<<"Found At Position NO: "<<MID<<endl;

    int index = Binary_Search(BEG, END, item, ara);

    if(index == -1) cout<<"NOT FOUND"<<endl;
    else cout<<"FOUND AT : "<<index<<endl;


    return 0;
}
