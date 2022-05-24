#include<iostream>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
class list{
	public:
		node *root = NULL;
		void createTree();
		void insert(node *,node *);
};
void list::createTree(){
	int data;
	node *temp;
	char ch;
	do{
	
	cout<<"\nEnter the data:";
	cin>>data;
	temp->data = data;
		temp->left = NULL;
		temp->right = NULL;
	if(root==NULL)
	{
		root = temp;
	}
	else{
		insert(root,temp);
	}
	cout<<"\nDo you want to continue?";
	cin>>ch;
	}while(ch=='y');
}
void list::insert(node *root,node *temp)
{
	if(temp->data < root->data)
	{
		if(root->left==NULL)
		{
			temp->left = root->left;
			temp->right = root;
			root->left = temp;
		}
		else{
			insert(root->left,temp);
		}
	}
	else{
		if(root->right==NULL){
			temp->right = root->right;
			temp->left = root;
			root->right = temp;
		}
		else{
			insert(root->right,temp);
		}
	}
}
int main(){
	
	return 0;
}
