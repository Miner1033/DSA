#include<iostream>

using namespace std;


void print(int n)
{
    if(n==0) return;
    print(n-1);
    if(n%2 == 0)
    {
        return;
    }
    else cout<<n<<endl;
}


int main()
{
    int n;
    cin>>n;

    print(n);
}
