class Linkedlist {
public:
    Node* head;
    Node* tail;
    int size = 0;

    Linkedlist() {
        head = tail = NULL;
        size = 0;
    }