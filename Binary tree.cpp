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

/**

                 2
        7                9
1             6                8
            5   10           3   4

*/


struct node
{
    int data;
    node* left;
    node* right;
};

node* root=NULL;
node* create_node(int item)
{
    node* newnode = new node;
    newnode->right = NULL;
    newnode->left = NULL;
    newnode->data = item;
    return newnode;
}

void add_left_child(node* parent,node* child)
{
    parent->left=child;
}

void add_right_child(node* parent,node* child)
{
    parent->right=child;
}
node *create_tree()
{
    node* two = create_node(2);
    node* seven = create_node(7);
    node* nine = create_node(9);

    add_left_child(two,seven);
    add_right_child(two,nine);

    node* one = create_node(1);
    node* six = create_node(6);


    add_left_child(seven,one);
    add_right_child(seven,six);

    node* five = create_node(5);
    node* ten = create_node(10);

    add_left_child(six,five);
    add_right_child(six,ten);

    node* eight = create_node(8);
    add_right_child(nine,eight);

    node* three = create_node(3);
    node* four = create_node(4);

    add_left_child(eight,three);
    add_right_child(eight,four);

    return two;
}

void pree_order(node* pr_node)
{
    cout<<pr_node->data<<' ';
    if(pr_node->left!=NULL)
    {
        pree_order(pr_node->left);
    }
    if(pr_node->right!=NULL)
    {
        pree_order(pr_node->right);
    }
    return;
}

void in_order(node* in_node)
{

    if(in_node->left!=NULL)
    {
        in_order(in_node->left);
    }
    cout<<in_node->data<<' ';
    if(in_node->right!=NULL)
    {
        in_order(in_node->right);
    }
    return;
}
void post_order(node* po_node)
{

    if(po_node->left!=NULL)
    {
        post_order(po_node->left);
    }
    if(po_node->right!=NULL)
    {
        post_order(po_node->right);
    }
    cout<<po_node->data<<' ';
    return;
}
int main()
{
    node * root = create_tree();
    cout<<"Pree Order: ";
    pree_order(root);
    cout<<endl;
    cout<<"Post Order: ";
    post_order(root);
    cout<<endl;
    cout<<"In   Order: ";
    in_order(root);
    cout<<endl;
}


