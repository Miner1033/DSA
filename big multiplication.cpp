#include <bits/stdc++.h>

using namespace std;

string RemoveLeadingZero(string result);
string multiply(string num1,string num2)
{
    int len1 = num1.size();
    int len2 = num2.size();

    string result(len1 + len2, '0');///creates a string named result and initializes it with a length equal to the sum of len1 and len2. Each character in the string is set to the character '0'.
    for (int i = len1 - 1; i >= 0; i--)
    {
        int carry = 0;
        int digit1 = num1[i] - '0';///char to int

        for (int j = len2 - 1; j >= 0; j--)
        {
            int digit2 = num2[j] - '0';///char to int

            int mul = digit1 * digit2 + carry + (result[i + j + 1] - '0');///result[i+j+1]-'0' is the meaning of this code it is like arr[i] number index value and this value convert in to char to integer assci value
            carry = mul / 10;///charry is how many times devide of the resultend multi[lication
            result[i + j + 1] = (mul % 10) + '0';///result[i+j+1] update to the multi of index i* index j result and the module o result store in a character
        }
        result[i] = carry + '0';///Add any remaining carry
    }

    return RemoveLeadingZero(result);///remove the leading zeros

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
int main()
{
    cout<< "Enter First Number: ";
    string num1,num2;
    cin>>num1; /// First big integer always Bigger than Second Big Integer
    cout<< "Enter Second Number: ";
    cin>>num2; /// Second big integer always smaller than first Big Integer
    string multi = multiply(num1, num2);
    cout << "Result of Two Big Integer multiplication: " << multi << endl;

    return 0;
}

