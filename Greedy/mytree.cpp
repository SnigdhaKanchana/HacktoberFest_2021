#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *left,*right;
	
};
Node* newnode(int ele){
	Node* node = new Node;
	node->data = ele;
	node->left = NULL;
	node->right = NULL;
	return node;
}

Node* insert(Node* root,int ele){
	if(root==NULL)
	return newnode(ele);
	if(root->data < ele)
	root->right = insert(root->right,ele);
	if(root->data >  ele)
	root->left = insert(root->left,ele);
	return root;
	
}
void pre(Node* root){
	if(root == NULL)
	return;
	cout << root->data << endl;
	pre(root->left);
	pre(root->right);
}
int main(){
	int n,data;
	cin >> n;
	Node* root = NULL;
	while(n--){
		cin >> data;
		root = insert(root, data);
	}
	pre(root);
	
	return 0;
}
