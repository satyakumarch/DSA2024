#include <iostream>
using namespace std;

class Node { // Linked list Node
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class Linkedlist {
public:
    Node* head;
    Node* tail;
    int size = 0;

    Linkedlist() {
        head = tail = NULL;
        size = 0;
    }

    void insertAtTail(int val) {
        Node* temp = new Node(val);
        if (size == 0) head = tail = temp;
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int val) {
        Node* temp = new Node(val);
        if (size == 0) head = tail = temp;
        else {
            temp->next = head;
            head=temp;
        }
        
        size++;
    }

    void insertAtIdx(int idx, int val) {
        if (idx < 0 || idx > size)
            cout << "Invalid Index" << endl;
        else if (idx == 0) insertAtHead(val);
        else if (idx == size) insertAtTail(val);
        else {
            Node* t = new Node(val);
            Node* temp = head;
            for (int i = 1; i < idx; i++) {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

    int getAtIdx(int idx) {
        if (idx < 0 || idx >= size) {
            cout << "invalid index";
            return -1;
        }
        else if (idx == 0) return head->val;
        else if (idx == size - 1) return tail->val;
        else {
            Node* temp = head;
            for (int i = 1; i <= idx; i++) {
                temp = temp->next;
            }
            return temp->val;
        }
    }

    void deleteAtHead() {
        if (size == 0) {
            cout << "List is Empty";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
        if (size == 0) {
            tail = NULL;
        }
    }

    void deleteAtTail() {
        if (size == 0) {
            cout << "List is Empty";
            return;
        }
        if (size == 1) {
            delete head;
            head = tail = NULL;
        } else {
            Node* temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = NULL;
        }
        size--;
    }

    void deleteAtIdx(int idx) {
        if (size == 0) {
            cout << "List is Empty";
            return;
        }
        else if (idx < 0 || idx >= size) {
            cout << "invalid index";
            return;
        }
        else if (idx == 0) deleteAtHead();
        else if (idx == size - 1) deleteAtTail();
        else {
            Node* temp = head;
            for (int i = 1; i < idx; i++) {
                temp = temp->next;
            }
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            size--;
        }
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Linkedlist ll;
    int choice, value, index;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Insert at Tail\n";
        cout << "2. Insert at Head\n";
        cout << "3. Insert at Index\n";
        cout << "4. Get value at Index\n";
        cout << "5. Delete at Index\n";
        cout << "6. Display List\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert at tail: ";
                cin >> value;
                ll.insertAtTail(value);
                break;
            case 2:
                cout << "Enter value to insert at head: ";
                cin >> value;
                ll.insertAtHead(value);
                break;
            case 3:
                cout << "Enter index to insert at: ";
                cin >> index;
                cout << "Enter value to insert: ";
                cin >> value;
                ll.insertAtIdx(index, value);
                break;
            case 4:
                cout << "Enter index to get value from: ";
                cin >> index;
                value = ll.getAtIdx(index);
                if (value != -1)
                    cout << "Value at index " << index << " is " << value << endl;
                break;
            case 5:
                cout << "Enter index to delete: ";
                cin >> index;
                ll.deleteAtIdx(index);
                break;
            case 6:
                ll.display();
                break;
            case 7:
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
