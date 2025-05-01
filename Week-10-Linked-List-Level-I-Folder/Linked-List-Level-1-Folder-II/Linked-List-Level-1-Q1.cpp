#include<iostream>
using namespace std;
// ~ idn
class Node {
public:
    int data;
    Node* next;

    Node() {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

void insertathead(Node* &head, int data) {
    Node* newnode = new Node(data);
    newnode->next = head;
    head = newnode;
}

int main() {
    Node* head = new Node(10);
    insertathead(head, 20);
    insertathead(head, 30);
    insertathead(head, 40);
    insertathead(head, 50);
    insertathead(head, 60);

    head->print();

    return 0;
}
