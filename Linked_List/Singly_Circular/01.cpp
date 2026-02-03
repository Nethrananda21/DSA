#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int val){
            data=val;
            next=NULL;
        }
};

Node *InsertAtBeginning(Node *head, int val){
    Node *node=new Node(val);
    if(head==NULL){
        node->next=node;
        return node;
    }
    Node *temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=node;
    node->next=head;
    return node;
}

Node *InsertAtEnd(Node *head, int val){
    Node *node = new Node(val);
    if(head==NULL){
        node->next=node;
        return node;
    }
    Node *temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=node;
    node->next=head;
    return head;
}

void Print(Node *head){
    if(head==NULL) return;
    Node *temp=head;
    do {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while(temp!=head);
    cout << endl;
}

int main(){
    Node *head=NULL;
    int n;
    while(cin>>n){
        head=InsertAtEnd(head,n);
    }
    Print(head);
    return 0;
}