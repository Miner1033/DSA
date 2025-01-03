#include<bits/stdc++.h>
using namespace std;

struct Stack
{
    string str;
    Stack *next;
};
Stack *top = NULL;
Stack * create_node(string value)
{
    Stack *snode = new Stack;
    if(snode==NULL)
    {
        cout<<"overflow"<<endl;
        exit(1);
    }
    snode->str = value;
    snode->next = NULL;
    return snode;
}
void push(Stack *new_node)///insert at begining
{
    new_node->next = top;
    top = new_node;
}

void pop()
{
    if(top==NULL)
    {
        cout<<"underflow"<<endl;
        exit(1);
    }
    cout<<top->str<<" is deleted successfully!"<<endl;
    top = top->next;
}
void traverse()
{
    Stack *ptr = top;
    while(ptr!=NULL)
    {
        cout<<ptr->str<<" ";
        ptr = ptr->next;
    }
    cout<<endl<<endl;
}
int main()
{
    int n;cin>>n;string s;
    for(int i=0;i<n;++i)
    {
        cin>>s;
        Stack *NEW = create_node(s);
        push(NEW);
    }
    traverse();
    pop();
    pop();
//    Stack *NEW = create_node("n");
//    push(NEW);
//    traverse();
//    pop();
//    pop();
//    pop();
//    pop();pop();
//    pop();
//    pop();
//    pop();pop();
//    pop();
//    pop();
//    pop();pop();
//    pop();
//    pop();
//    pop();pop();
//    pop();
//    pop();
//    pop();
//
//    Stack *NEW1 = create_node("m");
//    push(NEW1);
//    Stack *NEW2 = create_node("p");
//    push(NEW2);
    traverse();
}


