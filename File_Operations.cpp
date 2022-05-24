#include<iostream>
#include<fstream>
using namespace std;
struct student{
	int roll;
	char name[30];
};
int main(){
	ofstream fout;
	ifstream obj;
	student stud;
	char data[30];
	fout.open("sample.txt",ios::out);
//	fout<<"Hello there...";
	cout<<"\nEnter the data: ";
	cin>>stud.roll;
	cin>>stud.name;
	
	fout.write((char*)&stud,sizeof(stud))<<flush;
	cin>>stud.roll;
	cin>>stud.name;
	
	fout.write((char*)&stud,sizeof(stud))<<flush;
	fout.close();
	obj.open("sample.txt",ios::in);
	while(obj.read((char *)&stud,sizeof(stud)))
	{
		cout<<stud.name<<"\t"<<stud.roll;
	}
//	obj.open("sample.txt");
//	obj >> data;
//	obj.close();
//	cout<<"\nEnter the data: ";
//	cout<<data;
	return 0;
}
