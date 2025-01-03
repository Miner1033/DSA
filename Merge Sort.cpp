#include<bits/stdc++.h>
using namespace std;
int pry[1000];
int ar[1000];
void merging(int l,int mid, int h)
{
        int i=l;
        int k =l;
        int j = mid+1;

        while(i<=mid and j<=h){
                if(pry[i]<pry[j]){
                        ar[k++] = pry[i];
                        ++i;
                }
                else{
                    ar[k++] = pry[j];
                    ++j;
                }
        }

        for( ; i<=mid; ++i) {ar[k++]=pry[i]; }
        for( ; j<=h; ++j ){ar[k++]=pry[j]; }

        for( int p = l; p<k; ++p){
                pry[p] = ar[p];
        }
}
void mergSort(int l,int h)
{
        if(l<h){
                int mid = (l+h)/2;
                mergSort(l,mid);
                mergSort(mid+1,h);
                merging(l,mid,h);
        }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)cin>>pry[i];

    mergSort(0,n-1);

    for( int i=0;i<n;++i )cout<<pry[i]<<' ';
}


/*
6
5 8 6 1 7 9
*/


