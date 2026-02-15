class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    Node(int val){
        data=val;
        prev=NULL;
        nect=NULL;
    }
};

void insertAtHead(Node* &head, int val) {
    Node* n = new Node(val);
    if (head != NULL) {
        head->prev = n;
    }
    n->next = head;
    head = n;
}

void insertAtTail(Node* &head, int val) {
    if (head == NULL) {
        insertAtHead(head, val);
        return;
    }
    Node* n = new Node(val);
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
void insertatposi(Node* &head, int val, int posi){
    Node *node=new Node(val);
    if(head==NULL){
        insertAtHead(head,val);
    }
    Node *temp=head;
    for(int i=1;i<posi-1 && temp!=NULL;i++){
        temp=temp->next;
    }
    node->next=temp->next;
    temp->next=node;
    node->prev=temp;
}
int main() {
    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtHead(head, 0);
    insertatposi(head, 10, 3);

    Node* temp = head;
    while (temp != NULL) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}