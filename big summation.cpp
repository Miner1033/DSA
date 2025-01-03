#include <bits/stdc++.h>
using namespace std;

using namespace std;

string addBigIntegers(string num1,string num2) {
    string sum;
    int carry = 0;
    int len1 = num1.size() - 1;
    int len2 = num2.size() - 1;

    while (len1 >= 0 || len2 >= 0) {
        int digit1 = (len1 >= 0) ? num1[len1] - '0' : 0;
        int digit2 = (len2 >= 0) ? num2[len2] - '0' : 0;

        int total = digit1 + digit2 + carry;
        carry = total / 10;
        sum = to_string(total % 10) + sum;

        len1--;
        len2--;
    }
    return sum;
}

int main() {
    cout<< "Enter First Number: ";
    string num1,num2;
    cin>>num1; /// First big integer always Bigger than Second Big Integer
    cout<< "Enter Second Number: ";
    cin>>num2; /// Second big integer always smaller than first Big Integer

    string sum = addBigIntegers(num1, num2); // Perform the summation

    cout << "Sum: " << sum << endl;

    return 0;
}
