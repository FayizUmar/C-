#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

node* newnode(int d)
{
    node* n = new node;
    n->data=d;
    n->next=NULL;

    return n;
}

int main()
{
    node* a=newnode(50);
    a->next=newnode(55);
    a->next->next=newnode(70);
    a->next->next->next=newnode(80);

    node* b = newnode(5);
    b->next=newnode(10);
      
    b->next->next=newnode(15);
    b->next->next->next=newnode(20);

    node* temp_a=a;
    node* temp_b=b;

    cout<<"first liked list a is "<<endl;
    while(temp_a!=NULL)
    {
        cout<<temp_a->data<<"->";
        temp_a=temp_a->next;
    }
    cout<<"b linked list is "<<endl;
    while(temp_b!=NULL)
    {
        cout<<temp_b->data<<"->";
        temp_b=temp_b->next;
    }

    vector<int>v;
    while(a!=NULL)
    {
        v.push_back(a->data);
        a=a->next;
    }

    while(b!=NULL)
    {
        v.push_back(b->data);
        b=b->next;
    }

    sort(v.begin(),v.end());
    node* result = newnode(-1);
    node *temp = result;

    for(int i=0;i<v.size();i++)
    {
        result->next=newnode(v[i]);
        result=result->next;
    }
    temp=temp->next;
    cout<<"Resultant Merge Linked List Is :"<<endl;
    while(temp!=NULL)
    {
       cout<<temp->data<<" ->";
       temp=temp->next;
    }


    

}