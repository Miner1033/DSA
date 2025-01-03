#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str; // string declare

    //INPUT FUNCTION
    getline(cin, str);
    cout<<str<<endl;

    str.push_back(' ');
    str.push_back('i');
    str.push_back('s');

    cout<<str<<endl;

    str.pop_back();

    cout<<str<<endl;


    //CAPACITY FUNCTION

    cout<<str.capacity()<<endl;
    cout<<str.size()<<endl;
    cout<<str.length()<<endl;
    //str.resize(6);
    cout<<str<<endl;
    str.shrink_to_fit();
    cout<<str.capacity()<<endl;


    //Iterative Function

    //index approach
    for(int i = 0; i < str.size(); i++)
    {
        cout<<str[i];
    }
    cout<<endl;

    //pointer approach
    string::iterator it1;
    string::reverse_iterator it2;

    for(it1 = str.begin(); it1!=str.end(); it1++)
    {
        cout<<*it1;
    }
    cout<<endl;
    for(it2 = str.rbegin(); it2 != str.rend(); it2++)
    {
        cout<<*it2;
    }

    cout<<endl;
    // Manipulating Function
    char name[20];
    str.copy(name, 6, 0);
    cout<<name<<endl;

    string str2;
    getline(cin, str2);
    str.swap(str2);

    cout<<str<<endl;

    //Array of Strings

    // Using Pointers

    const char *color[] = {"Blue", "Red", "Orange","Yellow"};

    //using 2D array

    char color2[][10] = {"Blue", "Red", "Orange","Yellow"};

    //using string array

    string color3[] = {"Blue", "Red", "Orange","Yellow"};

    //using vector class

    vector<string>color4 = {"Blue", "Red", "Orange","Yellow"};

    //using array class
    array<string, 5>color5 = {"Blue", "Red", "Orange","Yellow"};






    return 0;
}
