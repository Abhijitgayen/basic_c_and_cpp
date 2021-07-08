#include<iostream>
using namespace std;
struct Node {
	int data;
	struct Node *left;
	struct Node *right;
};
//Function to find minimum in a tree. 
Node* FindMin(Node* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}

// Function to search a delete a value from tree.
struct Node* Delete(struct Node *root, int data) {
	if(root == NULL) return root; 
	else if(data < root->data) Delete(root->left,data);
	else if (data > root->data) Delete(root->right,data);
	// Wohoo... I found you, Get ready to be deleted	
	else {
		// Case 1:  No child
		if(root->left == NULL && root->right == NULL) { 
			delete root;
			root = NULL;
			cout<<"\tDelete sucessfully..\n";
		}
		//Case 2: One child 
		else if(root->left == NULL) {
			struct Node *temp = root;
			root = root->right;
			delete temp;
			cout<<"\tDelete sucessfully..\n";
		}
		else if(root->right == NULL) {
			struct Node *temp = root;
			root = root->left;
			delete temp;
			cout<<"\tDelete sucessfully..\n";
		}
		// case 3: 2 children
		else { 
			struct Node *temp = FindMin(root->right);
			root->data = temp->data;
			Delete(root->right,temp->data);
			cout<<"\tDelete sucessfully..\n";
		}
	}
	return root;
}
 
//Function to visit nodes in Inorder
void Inorder(Node *root) {
	if(root == NULL) return;
 
	Inorder(root->left);       //Visit left subtree
	printf("%d ",root->data);  //Print data
	Inorder(root->right);      // Visit right subtree
}
//Search function
int search(Node *root, int data ){
	int a=0;
	if(root->data==data && root!=NULL) a++;
	else{
		if(root->data>data)
		search(root->right,data);
		else
		search(root->left,data);
	}
	return a;
}
// Function to Insert Node in a Binary Search Tree
Node* Insert(Node *root,int data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else {
	if(data < root->data)
		root->left = Insert(root->left,data);
	else if(data==root->data)
cout<<"\t Error data already exist in this tree\n";
	else 
		root->right = Insert(root->right,data);
		}
	return root;
}

int main() {
	Node* root = NULL;
	int a ;
	cout<<"how many data you want to add :";
	cin>>a;
	int data;
	for ( int i=0;i<a;i++){
		cout<<"enter the data:";
		cin>>data;	
		root = Insert(root,data);
	}
	//  root = Insert(root,10);
	// root = Insert(root,3); root = Insert(root,4); 
	// root = Insert(root,1); root = Insert(root,11);

	// Deleting node with value 5, change this value to test other cases
	cout<<"enter the data to delete:";
	int del;
	cin>>del;
	root = Delete(root,del);
	
	/*int sea;
	cout<<"enter data to search:";
	cin>>sea;
	if(search(root,sea)) cout<<"data is there";
	else cout<<"data is not there....";*/
	//Print Nodes in Inorder
	cout<<"Inorder: ";
	Inorder(root);
	cout<<"\n";
}
