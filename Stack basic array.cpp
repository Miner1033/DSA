#include<bits/stdc++.h>
using namespace std;
int t;
#define maxstk 8
int stk[maxstk];
int top = -1;
void push(int item)
{
    if(top==maxstk)
    {
        cout<<"overflow"<<endl;
        exit(1);
    }
    top++;
    stk[top]=item;
}
void pop()
{
    if(top == -1)
    {
        cout<<"undeflow"<<endl;
        exit(1);
    }
    cout<<stk[top]<<" is deleted successfully!"<<endl;
    top--;
}
void traverse()
{
    for(int i=top;i>=0;--i)
    {
        cout<<stk[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n,item;cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>item;
        push(item);
    }
    traverse();
    pop();
    pop();
    traverse();
}


