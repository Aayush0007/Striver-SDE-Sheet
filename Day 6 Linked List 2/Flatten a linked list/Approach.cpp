#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node* bottom;
        Node(int val) {
            data = val;
            next = NULL;
            bottom = NULL;
        }
};

Node* mergeTwoLists(Node* a, Node* b) {
    
    Node *temp = new Node(0);
    Node *res = temp; 
    
    while(a != NULL && b != NULL) {
        if(a->data < b->data) {
            temp->bottom = a; 
            temp = temp->bottom; 
            a = a->bottom; 
        }
        else {
            temp->bottom = b;
            temp = temp->bottom; 
            b = b->bottom; 
        }
    }
    
    if(a) temp->bottom = a; 
    else temp->bottom = b; 
    
    return res -> bottom; 
    
}
Node *flatten(Node *root)
{
   
        if (root == NULL || root->next == NULL) 
            return root; 
  
        // recur for list on right 
        root->next = flatten(root->next); 
  
        // now merge 
        root = mergeTwoLists(root, root->next); 
  
        // return the root 
        // it will be in turn merged with its left 
        return root; 
}
// Function to print the linked list (bottom part of nodes)
void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " -> ";
        current = current->bottom;
    }
    cout << "nullptr" << endl;
}

int main() {
    // Create a sample linked list: 5 -> 10 -> 19 -> 28 -> nullptr
    Node* head = new Node(5);
    head->next = new Node(10);
    head->next->next = new Node(19);
    head->next->next->next = new Node(28);

    // Create a second linked list: 7 -> 8 -> 30 -> nullptr
    head->bottom = new Node(7);
    head->bottom->bottom = new Node(8);
    head->bottom->bottom->bottom = new Node(30);

    // Create a third linked list: 20 -> 22 -> nullptr
    head->next->bottom = new Node(20);
    head->next->bottom->bottom = new Node(22);

    // Flatten the linked list
    Node* flattened = flatten(head);

    // Print the flattened linked list
    cout << "Flattened Linked List: ";
    printList(flattened);

    return 0;
}