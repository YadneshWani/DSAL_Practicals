#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v1;
	vector<int>:: iterator it;
	int val,num;
	// insert
	cout<<"\nEnter the data";
	for(int i=1;i<=5;i++)
	{
		cin>>num;
		v1.push_back(num);
	}
	cout<<"\nDisplay data:";
	// display
	for(int i=0;i<5;i++)
	{
		cout<<v1.at(i)<<endl;
	}
	// Size
	cout<<"\nVector Size: "<<v1.size();
	// search
	cout<<"\nEnter the data:";
	cin>>val;
	for(int j=0;j<v1.size();j++)
	{
		if(val == v1.at(j))
		{
		cout<<"\nElement found..."<<val;
		break;
		}
		else
		{
			cout<<"\nData not found...";
			break;
		}
		
	}
	// Sort
	sort(v1.begin(),v1.end());
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1.at(i)<<endl;
	}
	cout<<"\nUnique elements:";
	it = unique(v1.begin(),v1.end());
	v1.resize(distance(v1.begin(), it));
	for(it=v1.begin();it<v1.end();it++)
	{
		cout<<*it<<endl;
	}
	return 0;
}
