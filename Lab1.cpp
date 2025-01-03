#include<iostream> //Preprocessor directive header file

#define PI 3.1416  //Preprocessor definition //Macros

using namespace std; //using declaration


float arear(float r);  // Prototyping

int main()    // Main Functin
{
    float r;  // Declaring a float variable r denoting circle's radius

    cin>>r;  // Taking radius r as input

    float a; // Declaring a float variable a denoting circle's area

    a = area(r); // Function Call

    cout<<a<<endl; // Printing the answer area
}

float area(float r) // Function definition
{
    float ans = PI*r*r; // calculate
    return ans;  // area's answer returns to main function
}
