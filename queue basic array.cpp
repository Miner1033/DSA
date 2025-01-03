#include<bits/stdc++.h>
using namespace std;
#define N 5
char Queue[N];
int Front = -1;
int rear = -1;


void push(char value)
{
    if(Front==0 and rear == N-1 or Front==rear+1){
        cout<<"overflow"<<endl;
        exit(1);
    }
    if(Front == -1 and rear == -1){
        Front++;
        rear++;
    }
    else if(rear==N-1)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    Queue[rear]=value;///O(1)
}

void pop()
{
    if(Front==-1)
    {
        cout<<"Underflow"<<endl;
        exit(1);
    }
    cout<<Queue[Front]<<" is deleted"<<endl;
    if(Front==N-1)
    {
        Front=0;
    }
    else if(Front==rear)
    {
        Front = -1;
        rear = -1;
    }
    else
    {
        Front++;
    }
}
void traverse()
{
    for(int i=Front;;)
    {
        cout<<Queue[i]<<" ";
        if(i==rear)break;
        if(i==N-1)
        {
            i=0;
        }
        else ++i;
    }
    cout<<endl;
}
int main()
{
  push('A');
    push('B');
    push('C');
    traverse();
    pop();
    traverse();
    push('D');
    push('E');
    traverse();
    pop();
    pop();
    traverse();
    push('F');
    traverse();
    pop();
    traverse();
    push('G');
    push('H');
    traverse();
    pop();
    traverse();
    pop();
    traverse();
    push('K');
    traverse();
    pop();
    pop();
    traverse();
    pop();
    traverse();



    push('D');
    traverse();

    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    traverse();
}



