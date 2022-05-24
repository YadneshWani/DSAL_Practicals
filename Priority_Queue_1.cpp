#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	int priority;
};
int main(){
	queue<int> q1;
	queue<int> q2;
	q1.push(10);
	q1.push(20);
	q1.push(30);
	q1.push(40);
	q1.push(50);
	q2.push(1);
	q2.push(2);
	q2.push(3);
	q2.push(4);
	q2.push(5);
	for(int i=0;i<q1.size();i++)
	{
		cout<<q1.front();
	}
	cout<<endl;
//	while(!q1.empty())
//	{
//		cout<<q1.front()<<" "<<q2.front()<<endl;
//		q1.pop();
//		q2.pop();
//	}
	q1.pop();
	q2.pop();
	while(!q1.empty())
	{
		cout<<q1.front()<<" "<<q2.front()<<endl;
		q1.pop();
		q2.pop();
	}
	return 0;
}
