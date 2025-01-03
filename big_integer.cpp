#include<iostream>
#include<string>
using namespace std;

int main()
{
    string num1, num2, result;

    getline(cin, num1);
    getline(cin, num2);

    if(num1.size() < num2.size())
    {
        num1.swap(num2);
    }

    int len = num2.size()-1;
    int carray = 0;
    for(int i = num1.size()-1; i >= 0; i--)
    {

        if(len>=0)
        {
            int a = num1[i]-'0';
           // cout<<a<<endl;
            int b = num2[len]-'0';
            int ans = a+b+carray;
            //cout<<ans<<endl;

            if(ans >= 10)
            {
                char c = char(ans%10)+'0';
                //cout<<c<<endl;
                result.push_back(c);
                carray  = 1;

            }
            else
            {
                char ch = char(ans)+'0';
                result.push_back(ch);
                carray = 0;
            }
            len--;
        }
        else
        {
            int x = num1[i]-'0';
            int ans = x+carray;
            if(ans>=10)
            {
                char c = char(ans%10)+'0';
                result.push_back(c);
                carray  = 1;
            }
            else
            {
                char ch = char(ans)+'0';
                result.push_back(ch);
                carray = 0;
            }
        }

    }

    if(carray == 1) result.push_back(char(carray)+'0');

    for(int i = result.size()-1; i >= 0; i--)
    {
        cout<<result[i];
    }


    //cout<<num1<<" "<<num2<<endl;



    return 0;
}
