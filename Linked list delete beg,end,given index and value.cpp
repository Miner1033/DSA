#include<bits/stdc++.h>
using namespace std;
int t;
#define ll long long
#define llloop for(ll i=0;i<n;++i)
#define rllloop for(ll i=n-1;i>=0;--i)
#define loop for(int i=0;i<n;++i)
#define rloop for(int i=n-1;i>=0;--i)
#define sloop for(int i=0;i<s.size();++i)
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
#define dgm_naxmul59 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

struct node
{
    int data;
    node* next;

};

node *head = NULL;

node * create_node(int item)
{
    node* newnode = new node;
    if(newnode==NULL)
    {
        cout<<"overflow"<<endl;
        exit(1);
    }
    newnode->data = item;
    newnode->next = NULL;
    return newnode;
}

void insert_at_begining(node * newnode)
{
    newnode->next=head;
    head = newnode;
}

void insert_at_ending(node *newnode)
{

    if(head==NULL)insert_at_begining(newnode);
    else
    {
        node * p=head;
        while(p->next!=NULL)
        {
            p = p->next;
        }
        p->next=newnode;
    }
}
void insert_at_sorting_pos(node *newnode)
{

    if(head==NULL)insert_at_begining(newnode);
    else
    {
        if(head->data > newnode->data)insert_at_begining(newnode);
        else
        {
            node * p=head,*q=head->next;
            while(p->next!=NULL and q->data<newnode->data)
            {
                q=q->next;
                p = p->next;
            }
            newnode->next=p->next;
            p->next=newnode;
        }
    }
}
void insert_after_given_value(int value,node* newnode)
{
    node* p=head;
    node* q;
    while(p->data!=value)
    {
        q = p;
        p= p->next;
    }
    newnode->next = p->next;
    p->next=newnode;
}
void insert_after_given_index(int index,node* newnode)
{
    node* p=head;
    int i=0;
    while(i<index-1)
    {
        p=p->next;
        ++i;
    }
    newnode->next=p->next;
    p->next=newnode;
}
void insert_at_given_index(int index,node* newnode)
{
    node* p=head;
    int i=0;
    if(index==1)insert_at_begining(newnode);
    else
    {
        while(i<index-2)
        {
            p=p->next;
            ++i;
        }
        newnode->next=p->next;
        p->next=newnode;
    }
}
void deletefirst()
{
    head=head->next;
}
void deletelast()
{
    node* p=head,*q;
    while(p->next!=NULL)
    {
        q=p;
        p=p->next;
    }
    q->next=NULL;
}
void delete_at_given_value(int value)
{
    node* p=head,*q;
    while(p->data!=value)
    {
        q=p;
        p=p->next;
    }
    q->next=p->next;
}
void traverse()
{
    node* p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
void delete_at_given_index(int index)
{
    node* p=head,*q;
    int i=0;
    if(index==1)deletefirst();
    else
    {
        while(i<index-1)
        {
            q=p;
            p=p->next;
            ++i;
        }
        q->next=p->next;
    }
}



void print_max_min_Of_difference(int mx,int mn)
{
    cout<<endl<<"maximum value: "<<mx<<endl<<"minimum value: "<<mn<<endl;
    int sum = mx-mn;
    cout<<"difference between max and min value: "<<sum<<endl;
}
void linkedList_max_min(node *head){
    node *ptr = head;
    int flag = 1,mx,mn;
    while(ptr!=NULL){
        if(flag){
            mx = ptr->data;
            mn = ptr->data;
            flag = 0;
        }
        else
        {
            if(mx<ptr->data){
                mx = ptr->data;
            }
            if(mn>ptr->data)
            {
                mn = ptr->data;
            }
        }
        ptr= ptr->next;
    }
    print_max_min_Of_difference(mx,mn);
}
void count_evenOdd_number(node * head)
{
    int even_cnt=0,oddcnt=0;
    node *ptr = head;
    while(ptr!=NULL){///O(n)
        if(ptr->data%2)++oddcnt;
        else ++even_cnt;
        ptr=ptr->next;
    }
    cout<<"Number of even value: "<<even_cnt<<endl<<"Number of Odd value: "<<oddcnt<<endl;
}

node *return_given_item_node_adress(node *head,int key)
{


    node *p = head;
    node *q = head->next;
    while(q->data!=key && q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }
if( head->data == key)cout<<head->next;
    else if(q->data== key ){
       cout<<q->next;
    }


    else cout<<"your given key not exist"<<endl;
    return 0;
}




int main()
{
    int n;
    cin>>n;
    int item;
    for(int i=0; i<n; ++i)
    {
        cin>>item;
        node* newnode = create_node(item);
        insert_at_sorting_pos(newnode);
    }//int val;cin>>val;int it;cin>>it;
    //int value;cin>>value;
    int index;
    cin>>index;
    //node* NEW=create_node(it);
    traverse();
    //insert_after_given_value(val,NEW);
    //insert_after_given_index(val,NEW);i
    //insert_at_given_index(val,NEW);
    //delete_at_given_value(value);
    delete_at_given_index(index);
    traverse();
    deletefirst();
    traverse();
    deletelast();
    traverse();
}


