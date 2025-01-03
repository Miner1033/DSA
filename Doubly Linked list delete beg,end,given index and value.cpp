#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
    node* prev;
};

node* first = NULL;
node* last = NULL;

node* create_node(int item){
    node* newnode = new node;
    if(newnode==NULL)
    {
        cout<<"overflow"<<endl;
        exit(1);
    }
    newnode->data = item;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
}

void insert_at_begining(node* newnode)
{
    if(first==NULL and last==NULL)
    {
        first=newnode;
        last=newnode;
    }

    else
    {
        newnode->next = first;
        first->prev = newnode;
        first = newnode;
    }
}

void insert_at_ending(node* newnode)
{
    node* p=first;
    if(first==NULL and last==NULL)insert_at_begining(newnode);
    else
    {
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=newnode;
        newnode->prev=p;
        last=newnode;
    }
}

void insert_after_value(node* newnode,int value)
{
    node* p=first,*q=first->next;
    if(first==NULL and last==NULL)
    {
        first=newnode;
        last=newnode;
    }
    else if(last->data==value)insert_at_ending(newnode);
    else
    {
        while(p->data!=value){
            p=p->next;
            q=q->next;
        }
        newnode->next=p->next;
        p->next=newnode;
        newnode->prev=p;
        q->prev=newnode;

    }
}

void insert_after_pos(node* newnode,int pos,int n)
{
    int i=0;
    node* p =first;
    node* q=first->next;
    if(first==NULL and last==NULL)
    {
        first=newnode;
        last=newnode;
    }
    else if(pos==n)insert_at_ending(newnode);
    else
    {
        while(i<pos-1)
        {
            p=p->next;
            q=q->next;++i;
        }
        newnode->next=p->next;
        p->next=newnode;
        newnode->prev=p;
        q->prev=newnode;
    }
}

void deletefirst()
{
    first=first->next;
    first->prev=NULL;
}

void deletelast()
{
    node* p = first,*q;
    while(p->next!=NULL)
    {
        q=p;
        p=p->next;
    }
    q->next=NULL;
    last=q;
}

void delete_at_given_index(int index,int n)
{
    node* p=first,*q;int i=0;
    if(index==1)deletefirst();
    else if(index==n)deletelast();
    else
    {
        while(i<index-1){
            q=p;
            p=p->next;++i;
        }
        q->next=p->next;
        p->next->prev = q;
    }
}

void delete_at_given_value(int vall)
{
    node* p=first,*q;
    if(first->data==vall)deletefirst();
    else if(last->data==vall)deletelast();
    else{
        while(p->data!=vall){
        q=p;
        p=p->next;
        }
        q->next=p->next;
        p->next->prev=q;
    }
}

void traverse()
{
    node* ptr = first;
    while(ptr!=NULL){
        cout<<ptr->data<<' ';
        ptr = ptr->next;
    }
    cout<<endl<<"ReverseOreder: ";
    node* p=last;
    while(p!=NULL)
    {
        cout<<p->data<<' ';
        p=p->prev;
    }
    cout<<endl;cout<<endl;
}



int main()
{
    int n,item;cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>item;
        node* newnode = create_node(item);
        insert_at_ending(newnode);
    }
    int val,it;cout<<"ChoseANodevalue: ";cin>>val;cout<<"ChoseYourPos: ";cin>>it;
//    int index;cout<<"DeleteIndex: ";cin>>index;
    int vall;cout<<"DeleteValue: ";cin>>vall;
    cout<<endl<<"NormalTraverse: ";
    traverse();
    node* newnode=create_node(val);
    insert_after_pos(newnode,it,n);
    cout<<"InsertAfterPos: ";
    traverse();
    deletefirst();cout<<"DeleteFirst: ";
    traverse();
    deletelast();cout<<"DeleteLast: ";
    traverse();
//    delete_at_given_index(index,n);cout<<"DeleteIndex: ";
//    traverse();
    delete_at_given_value(vall);cout<<"DeleteValue "<<vall<<" : ";
    traverse();
}





