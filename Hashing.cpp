#include<iostream>
#include<string.h>
using namespace std;
struct node{
	char name[30];
	long mobile_no;
};
class clientData{
	public:
		struct node d[10];
		clientData(){
			for(int i=0;i<10;i++)
			{
				strcpy( d[i].name, "NIL");
				d[i].mobile_no =  -1;
			}
		}
	void linear_probing();
	void display();
};

void clientData::linear_probing()
{
	int n,x;
	cout<<"\nEnter the no. of nodes:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter the name:";
		cin>>d[i].name;
		cout<<"\nEnter the mobile no.";
		cin>>d[i].mobile_no;
		x = d[i].mobile_no%10;
		if(d[x].mobile_no ==  -1)
		{
			d[x].mobile_no = d[i].mobile_no;
		}
		
				
	}
}
void clientData:: display(){
	for(int i=0;i<10;i++)
	{
		cout<<d[i].name<<" ";
		cout<<d[i].mobile_no<< " \n";
		
				
	}
}
int main(){
	clientData c1;
	c1.linear_probing();
	c1.display();
	return 0;
}
