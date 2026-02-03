#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

Node* InsertAtBeginning(Node* head, int val) {//normal insertion
    Node* node = new Node(val);
    node->next = head;
    return node;
}

Node* InsertAtEnd(Node* head, int val) {
    Node* node = new Node(val);
    if (head == NULL) {
        return node;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = node;
    return head;
}

Node* InsertAtPosi(Node* head, int val, int pos) {
    Node* node = new Node(val);
    if (pos == 1) {
        node->next = head;
        return node;
    }
    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        delete node;
        return head;
    }
    node->next = temp->next;
    temp->next = node;
    return head;
}
void Print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int data;
    while (cin >> data) {
        head = InsertAtEnd(head, data);
    }
    Print(head);
    return 0;
}