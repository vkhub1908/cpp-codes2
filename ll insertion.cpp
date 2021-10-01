#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    
};
void print(node* head)
{
    node*temp2=head;
    while(temp2!=NULL)
    {   cout<<temp2->data;
        temp2=temp2->next;
    
    }
}
void insert(node** ref,int info)
{
 node* last=*ref;
 node* temp=new node();
 
 temp->data=info;
 temp->next=NULL;
 
 if(*ref==NULL)
  {
    *ref=temp;
    return;
    
  }
  
    while(last->next!=NULL)
    {
    last=last->next;
    }
    last->next=temp;
    return;
  }

int main()
{
    node*head=NULL;
    insert(&head,5);
    insert(&head,6);
    print(head);
}