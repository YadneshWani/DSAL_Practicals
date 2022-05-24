#include<iostream>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
class tree{
	public:
	node *root = NULL;
	node *temp = NULL;

	void create_tree();
	void inOrder(node *);
	void insert(node *,node *);
	int longestPath(node *);
	int searchData(node *,int);
	
};
void tree::create_tree(){
	char ch;
	root = NULL;
	do{
		
	temp = new node;
	cout<<"\nEnter the data:";
	cin>>temp->data;
	temp->left = NULL;
	temp->right = NULL;
		if(root==NULL)
		{
			root = temp;
		}
		else{
			insert(root,temp);
		}
		cout<<"Do you want to continue: ";
		cin>>ch;
	}while(ch=='y');
}
void tree::insert(node *root,node *temp){
	if(temp->data < root->data){
		if(root->left==NULL)
		{
		root->left = temp;		
		}
		else{
			insert(root->left,temp);
		}
		cout<<"Left part of a tree\n";
	}
	else if(temp->data > root->data){
		if(root->right==NULL)
		{
		
	root->right = temp;	
		}
		else{
			insert(root->right,temp);
		}
	cout<<"Right part of a tree\n";	
	}
}
void tree::inOrder(node *root){
	if(root!=NULL)
	{
		inOrder(root->left);
		cout<<root->data<<" ";
		inOrder(root->right);
	}
}
int tree::longestPath(node *root){
	if(root==NULL)
	{
		return 0;
	}
	
	int rightLen = longestPath(root->right);
	
	int leftLen = longestPath(root->left);
	if(rightLen>leftLen)
	{
		return rightLen+1;
	}
	else{
		return leftLen+1;
	}
}
int tree:: searchData(node *root,int element)
{
	int flag = 0;
	while(root!=NULL)
	{
	
	if(root->data==element)
	{

		flag = 1;
		break;
	}
	else if(element < root->data)
	{
		root = root->left;
	}
	else if(element > root->data)
	{
		root = root->right;
	}
	}
	if(flag == 1)
	{
		cout<<"\nData found...";
	}
	else	
	{
		cout<<"\nData not found...";
	}
}
int main(){
	tree t1;
	int data;
	t1.create_tree();
	t1.inOrder(t1.root);
    int len = t1.longestPath(t1.root);
	cout<<"Length: "<<len;
	cout<<"\nEnter the data: ";
	cin>>data;
	t1.searchData(t1.root,data);
	return 0;
}
