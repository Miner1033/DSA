#include <bits/stdc++.h>
using namespace std;
string RemoveLeadingZero(string result);
string subtract(string num1,string num2);
int main()
{
    cout<< "Enter First Number: ";
    string num1,num2;
    cin>>num1; /// First big integer always Bigger than Second Big Integer
    cout<< "Enter Second Number: ";
    cin>>num2; /// Second big integer always smaller than first Big Integer
    string difference = subtract(num1, num2); /// Perform the subtraction

    cout << "Difference: " << difference << endl;

    return 0;
}
string subtract(string num1,string num2)
{
    string result;
    int borrow = 0;
    int i = num1.size() - 1;
    int j = num2.size() - 1;

    while (i >= 0 || j >= 0)
    {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;///why use this condition? Because after all any time user input num1 lenght smaller or larger than num2 this time programe is working if i limit is already cross but we are avoid convert char to integer
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;/// " "

        int sub = digit1 - digit2 - borrow;

        if (sub < 0)
        {
            sub += 10;
            borrow = 1;
        }
        else
        {
            borrow = 0;
        }
        ///result = (sub + "0") + result;
        result = to_string(sub) + result;
        i--;
        j--;
    }


    return RemoveLeadingZero(result);/// Remove leading zeros
}
string RemoveLeadingZero(string result)
{

    string temp=result;
    string ans="";
    int cnt=0;
    for(int p=0; p<temp.size(); ++p)
    {
        if(result[p]>='1' and result[p]<='9')break;
        else
        {
            cnt++;
        }
    }
    if(cnt!=0)
    {
        reverse(temp.begin(),temp.end());
        int len = temp.size()-cnt;
        for(int p=0; p<len; ++p)
        {
            ans = ans+temp[p];

        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    else return result;
}

