#include<bits/stdc++.h>
using namespace std;
class doublyNode
{
public:
    int value;
    doublyNode *prev;
    doublyNode *Next;
    doublyNode(int val)
    {
        value=val;
        prev=NULL;
        Next=NULL;
    }
};
void insertAtTail(doublyNode *&head,int val)
{
    doublyNode *newNode= new doublyNode(val);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    doublyNode *temp=head;
    while(temp->Next!=NULL)
    {
        temp=temp->Next;
    }
    temp->Next=newNode;
    newNode->prev=temp;
}
void insertAtHead(doublyNode *&head,int val)
{
    doublyNode *newNode= new doublyNode(val);
    head->prev=newNode;
    newNode->Next=head;
    head=newNode;
}
void display(doublyNode *n)
{
    while(n!=NULL)
    {
        cout<< n->value;
        if(n->Next!=NULL)
            cout<<"->";
            n=n->Next;

    }
    cout<<endl;
}
int countlength(doublyNode *&head)
{
    int count=0;
    doublyNode *temp= head;
    while(temp!=NULL)
    {
        count++;
        temp= temp->Next;
    }
    return count;
}
int main()
{
    doublyNode *head=NULL;
    int value,position;
    cout<<"choice 1: Insertion at head"<<endl
    <<"choice 2: Insertion at tail"<<endl
    <<"choice 0: Exit "<<endl
    <<endl;
    cout<<"Next choice: ";
    int choice;
    cin>>choice;
    cout<<"sohel";
    while(choice!=0)
    {
        switch(choice)
        {
        case 1:
            cout<<"Enter the value: ";
            cin>>value;
            insertAtHead(head,value);
            break;
        case 2:
            cout<<"Enter the value: ";
            cin>>value;
            insertAtTail(head,value);
            break;
        }
        cout<<"Next choice: ";
        cin>>choice;
    }
    cout<<endl<<"Doubly linked list: ";
    display(head);
    cout<<"Length of the doubly link list: "<<countlength(head)<<endl;
    return 0;
}

