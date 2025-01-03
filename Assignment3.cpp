#include<iostream>

using namespace std;

int GCD(int a, int b)
{
    int rem;
    for(;;)
    {
        rem = b%a;
        if(rem == 0)
        {
            break;
        }
        b = a;
        a = rem;
    }
    return a;
}

int RGCD(int a, int b)
{

    if( b%a == 0)
    {
        return a;
    }
    return RGCD(b%a, a);



}

int main()
{
    int a,b;
    cin>>a>>b;
    int gcd = GCD(a, b);
    cout<<gcd<<endl;

    int rgcd = RGCD(a, b);
    cout<<rgcd<<endl;



    return 0;
}
