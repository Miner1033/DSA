#include<iostream>

using namespace std;

void change(int *x)
{
    int y;
    cin>>y;
    *x = y;
    return;
}

int main()
{
    int x;
    cin>>x;
    cout<<"Initial Value of x: "<<x<<endl;
    change(&x);
    cout<<"New Value of x: "<<x<<endl;


    return 0;
}
