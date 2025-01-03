#include<bits/stdc++.h>
using namespace std;
struct Queue
{
    char ch;
    Queue *next;
};

Queue *Front = NULL;
Queue *rear = NULL;

void push(char value)
{
    Queue *qnode = new Queue;
    if(qnode==NULL)
    {
        cout<<"Overflow"<<endl;
        exit(1);
    }
    qnode->ch=value;
    qnode->next=NULL;

    if(Front==NULL and rear==NULL){
        Front = qnode;
        rear=qnode;
    }
    else {
        rear->next = qnode;///insert at ending
        rear=qnode;
    }
}

void pop()
{
   if(Front==NULL)
   {
       cout<<"Underflow"<<endl;
       exit(1);
   }
    cout<<Front->ch<<" is deleted"<<endl;
   Front=Front->next;
}
void traverse()
{
    Queue *ptr=Front;
    while(ptr!=NULL)
    {
        cout<<ptr->ch<<" ";
        ptr = ptr->next;
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




