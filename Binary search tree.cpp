#include<iostream>
using namespace std;

struct BstNode {
	int data;
	BstNode* left;
	BstNode* right;
};


BstNode* create_node(int data) {
	BstNode* newNode = new BstNode;
	newNode->data = data;
	newNode->left = NULL;
    newNode->right = NULL;

	return newNode;
}


BstNode* Insert(BstNode* node, int data) {
	if(node == NULL) {
		node = create_node(data);
	}

	else if( node->data > data) {
		node->left = Insert(node->left,data);
	}

	else {
		node->right = Insert(node->right,data);
	}
	return node;
}

bool Search(BstNode* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}
int main() {
	BstNode* root = NULL;

	int n, element;
	cin>>n;
	for(int i = 1; i <= n; i++)
    {
        cin>>element;
        root = Insert(root, element);
    }

//	root = Insert(root,15);
//	root = Insert(root,10);
//	root = Insert(root,20);
//	root = Insert(root,25);
//	root = Insert(root,8);
//	root = Insert(root,12);
    int number;
	cout<<"Enter number be searched: ";
	cin>>number;

	if(Search(root, number) == true) cout<<"Found"<<endl;
	else cout<<"Not Found!"<<endl;
}



