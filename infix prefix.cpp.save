#include<bits/stdc++.h>
using namespace std;
int t;
#define ll long long
#define llloop for(ll i=0;i<n;++i)
#define rllloop for(ll i=n-1;i>=0;--i)
#define loop for(int i=0;i<n;++i)
#define rloop for(int i=n-1;i>=0;--i)
#define sloop for(int i=1;i<s.size();++i)
#define vsort sort(v.begin(),v.end())
#define  endl '\n'
#define test cin>>t;
#define cases while(t--){solve(); }
#define asort sort(arr,arr+n)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define print cout<<pry<<'\n'
#define imx INT_MAX
#define imn INT_MIN
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define maxstk 20
int top = - 1;
char stk[maxstk];
void push(char item)
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
     if(top==-1)
     {
         cout<<"underflow"<<endl;
         exit(1);
     }
     top--;
 }

int main()
{
    string infix;
    getline(cin,infix);///A+(B*C-(D/E^F)*G)*H
    infix="("+infix+")";string exp = "";
    for(int i=0;i<infix.size();++i){
        if(infix[i]>='A'&& infix[i]<='Z'||(infix[i]>='0'&&infix[i]<='9'))
        {
            exp.push_back(infix[i]);
        }
        else if(infix[i]=='('){
            push(infix[i]);
        }
        else if(infix[i]=='+'||infix[i]=='-'||infix[i]=='*'||infix[i]=='/'||infix[i]=='^'){
            if((infix[i]=='+'||infix[i]=='-')&&(stk[top]=='*'||stk[top]=='/'||stk[top]=='^')){
            exp.push_back(stk[top]);
            pop();
            push(infix[i]);
            }
            else if((infix[i]=='*'||infix[i]=='/')&&stk[top]=='^')
            {
                exp.push_back(stk[top]);
                pop();
                push(infix[i]);
            }
            else push(infix[i]);
        }
        else///closing backet
        {
            while(stk[top]!='(')
            {
                exp.push_back(stk[top]);
                pop();
            }
            pop();
        }
    }
    cout<<exp<<endl;
}

