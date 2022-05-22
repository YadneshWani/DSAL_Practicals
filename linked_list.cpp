#include <stdio.h>
#include<iostream>
using namespace std;
class node{
    public: 
    int data;
    node *next;
};
void insertAtBeginning(int data, node **head)
{
    cout<<"Insert: "<<data;
    node *temp = new node();
    temp->data = data;
    temp->next = *head;
    *head = temp;
}
void insertAtLast(int data1, node **head)
{
    cout<<"Insert Last: "<<data1;
    node *tmp = new node();
    node *temp = new node();
    temp->data = data1;
    temp->next = NULL;
    tmp = *head;
    while(tmp->next!=NULL)
    {
        tmp = tmp->next;
        cout<<"Next Data: "<<tmp->data;
    }
    tmp->next = temp;
    cout<<"\nTEMP: "<<tmp->data;
}
int main()
{
    node* head = new node();
    node *temp = new node();
    node* temp1 = new node();
    node* tmp = new node();
    cout<<"Hello world";
    head->data = 10;
    head->next = temp;
    // cout<<"Data: "<<head->data;
    temp->data = 20;
    temp->next = NULL;
    // cout<<"Data: "<<temp->data;
    // Inserting data in a list through loop
    // for(int i=0;i<=5;i++)
    // {
    //     temp1->data = i;
    //     if(i==5)
    //     temp1->next = NULL;
    //     else
    //     temp1->next = temp1;
    // }
    insertAtBeginning(30,&head);
    tmp = head;
    while(tmp->next!=NULL)
        {
            cout<<"\nData: "<<tmp->data;
            tmp = tmp->next;
        }
        tmp = head;
    insertAtLast(40,&head);
    while(tmp->next!=NULL)
        {
            cout<<"\nData: "<<tmp->data;
            tmp = tmp->next;
        }
    
    return 0;
}

