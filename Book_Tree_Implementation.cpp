#include<iostream>
using namespace std;
struct node{
	char label[10];
	int chapter_count;
	struct node *child[10];
}*root;
class book{
	public:
	book(){
		root = NULL;
	}
	void create_book();
	void display_book();
};
void book::create_book()
{
	int chapters;
	root = new node;
	cout<<"\nEnter the book name:";
	cin>>root->label;
	cout<<"\nEnter the no. of chapters:";
	cin>>root->chapter_count;
	for(int i=0;i<root->chapter_count;i++)
	{
		root->child[i] = new node;
		cout<<"\nEnter the chapter name:";
		cin>>root->child[i]->label;
		cout<<"\nEnter the subsections:";
		cin>>root->child[i]->chapter_count;
		for(int j=0;j<root->child[i]->chapter_count;j++)
		{
				root->child[i]->child[j] = new node;
				cout<<"\nEnter the sub section name:";
				cin>>root->child[i]->child[j]->label;
		}
	}
	cout<<" Book Name: "<<root->chapter_count;
}
void book::display_book()
{
	int chapters;
	cout<<"\nBook name:"<<root->label;
	for(int i=0;i<root->chapter_count;i++)
	{
		cout<<"\nEnter the chapter name:"<<root->child[i]->label;
		cout<<"\nEnter the subsections:"<<root->child[i]->chapter_count;
		for(int j=0;j<root->child[i]->chapter_count;j++)
		{
				cout<<"\nEnter the sub section"<<j+1<<" name:"<<root->child[i]->child[j]->label;
		}
	}
}
int main(){
	book book1;
	book1.create_book();
	book1.display_book();
	return 0;
}
