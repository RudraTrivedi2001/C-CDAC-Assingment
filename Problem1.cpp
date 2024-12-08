#include <iostream>
using namespace std;

// Node structure for the singly linked list
struct Node {
    int data;
    Node* next;
    
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// SinglyLinkedList class with basic operations
class SinglyLinkedList {
private:
    Node* head;  // Pointer to the head node
    
public:
    SinglyLinkedList() {
        head = nullptr;
    }

    // Method to insert a node at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Method to insert a node at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Method to delete a node with a given value
    void deleteNode(int value) {
        if (head == nullptr) {
            cout << "List is empty, nothing to delete." << endl;
            return;
        }
        
        // If the node to be deleted is the head
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        
        Node* temp = head;
        while (temp->next != nullptr && temp->next->data != value) {
            temp = temp->next;
        }

        // If the value is not found
        if (temp->next == nullptr) {
            cout << "Node with value " << value << " not found." << endl;
            return;
        }
        
        // Deleting the node
        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }

    // Method to search for a node with a given value
    bool search(int value) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == value) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    // Method to display all nodes in the list
    void display() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }
        
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Main function to demonstrate the operations
int main() {
    SinglyLinkedList list;
    
    list.insertAtBeginning(10);
    list.insertAtBeginning(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    
    cout << "List after insertions: ";
    list.display();

    cout << "Search for 20: " << (list.search(20) ? "Found" : "Not Found") << endl;
    cout << "Search for 50: " << (list.search(50) ? "Found" : "Not Found") << endl;

    list.deleteNode(20);
    cout << "List after deleting 20: ";
    list.display();

    list.deleteNode(50);  // Attempting to delete a non-existing node
    
    list.deleteNode(10);
    cout << "List after deleting 10: ";
    list.display();

    return 0;
}
