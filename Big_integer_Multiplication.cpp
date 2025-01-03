#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string fsum(string s1, string s2);

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    if (s1.size() < s2.size())
    {
        s1.swap(s2);
    }
    

    string mulsum;
    //string temp;
    //cout << "A" << mulsum << "A\n";

    int cnt=0;

    for (int i = s2.size() - 1; i > -1; i--)
    {
        string multi;
        int x = s2[i] - '0';
        int carry = 0;

        for (int j = s1.size() - 1; j > -1; j--)
        {
            int y = s1[j] - '0';
            int m = y * x + carry;
            int mod = m % 10;
            carry = m / 10;

            char c = mod + '0';
            multi += c;
        }
        if (carry != 0)
        {
            char c = carry + '0';
            multi += c;
        }

        reverse(multi.begin(), multi.end());

        for(int k=0;k<cnt;k++)
        {
            multi+='0';

        }
        //cout<<"multi "<<multi<<"\n";
        //cout<<"temp "<<temp<<"\n";
        mulsum = fsum(multi, mulsum);
        
        //cout<<"mulsum "<<mulsum<<"\n\n";
        //temp = multi;

        cnt++;
        
    }

   
/*এইখানে আবার reverse করার দরকার নেই। কারন reverse হয়েই return হয়েছে ।*/
    
    cout << mulsum << endl;

    return 0;
}



string fsum(string s1, string s2)
{

    if (s1.size() < s2.size())
    {
        s1.swap(s2);
    }

    string sum;
    int carry = 0;
    int j = s2.length() - 1; // s2.length();
    for (int i = s1.length() - 1; i > -1; i--)
    {
        if (j > -1)
        {

            int x = s1[i] - '0'; // int x = s1[i] - 48;
            int y = s2[j] - '0'; // int x = s2[i] - 48;

            int s = x + y + carry;

            int rem = s % 10;

            carry = s / 10;
            char part = (rem + '0'); // char part = (rem + 48);
            sum += part;

            j--;
        }

        else
        {

            int x = s1[i] - '0'; // int x = s1[i] - 48;

            int s = x + carry;
            int rem = s % 10;

            carry = s / 10;
            char part = (rem + '0'); // char part = (rem + 48);
            sum += part;
        }
    }
    if (carry != 0)
    {
        char c = carry + '0';
        sum += c;
    }
    reverse(sum.begin(), sum.end());
    //cout<<"sum "<<sum<<"\n";

    return sum;
}