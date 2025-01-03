#include<iostream>

using namespace std;

void print(int ascii)
{
    if(ascii == 64) return;

    print(ascii-1);
    cout<<char(ascii)<<endl;
}


int main()
{
    int ascii = char('Z');
    cout<<ascii<<endl;
    print(ascii);


    return 0;
}
