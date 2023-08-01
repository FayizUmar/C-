#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};
void addnext(node* &head,int data)
{
    node *n = new node(data);
    n->next=head;
    
    head=n;
}
void between(node *prev,int newd)
{
    node* new_node  = new node(newd);
    new_node->next=prev->next;
    prev->next=new_node;
}
void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
}
int main()
{
    node* head=NULL;
    addnext(head, 5);
    addnext(head, 2);
    addnext(head, 8);
    addnext(head, 3);
   // print(head);
    between(head->next,11);
    print(head);
}