#include<bits/stdc++.h>
using namespace std;

struct node
{
    string data;
    node* next;
    node(string val) : data(val),next(nullptr) {}
};

node* head=nullptr;

void display(){
    for (node* i = head; i; i=i->next)
    {
        cout<<i->data<<(i->next ? " -> ": "\n");
    }
    
}

void insertstart(string val)
{
    node* newnode=new node(val);
    newnode->next= head;
    head=newnode;
}

void insertend(string val)
{
    node* newnode=new node(val);
    if (!head)
    {
        head=newnode;
        return;
    }
    node* temp=head;
    while (temp->next)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}

void insertafter(string val,int pos)
{
    node* temp=head;
    for (int i = 1; i < pos-1 && temp ; i++)
    {
        temp=temp->next;
    }
    if (temp)
    {
        node* newnode=new node(val);
        newnode->next=temp->next;
        temp->next=newnode;
    }
} 

int main()
{
    cout<<"Enter the number of data : ";
    int n;
    cin>>n;
    cout<<"Enter the string :\n";
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        insertend(s);
    }
    display();
    cout<<"Enter string for adding last position: ";
    string p;
    cin>>p;
    insertend(p);
    display();
    cout<<"Enter a string for adding first position : ";
    cin>>p;
    insertstart(p);
    display();
    string s="av";
    cout<<"avail list :-\n";
    for (int  i = 0; i < 3; i++)
    {
        cout<<s<<" -> ";
    }
    cout<<'\n';
    cout<<"Enter a string and position for adding this place: ";
    string x;
    cin>>x;
    cout<<"Enter the position: ";
    int po;
    cin>>po;
    insertafter(x,po);
    display();
    cout<<"avail list :-\n";
    for (int  i = 0; i < 2; i++)
    {
        cout<<s<<" -> ";
    }
    cout<<'\n';
    return 0;
}