#include<iostream>
using namespace std;
class Node{ //Linked list Node
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Linkedlist{
    public:
    Node* head;
    Node* tail;
    int size=0;

    Linkedlist(){
       head=tail=NULL;
       size=0; 

    }
    void insertAtTail(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertAtIdx(int idx,int val){
       if(idx<0 || idx >size)
       cout<<"Invalid Index"<<endl;
       else if(idx==0) insertAtHead(val);
       else if(idx==size) insertAtTail(val);
       else{
        Node* t=new Node(val);
        Node* temp=head;
        for(int i=1;i<=idx;i++){
            temp=temp->next;

        }
        t->next=temp->next;
        temp->next=t;
        size++;
        
     }
    }
    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"invalid index";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
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

    void deleteAtIdx(int idx){
        if(size==0){
            cout<<"List is Empty";
            return ;
        }
        else if(idx<=0 || idx>=size){
            cout<<"invalid index";
            return;

        }
        else if(idx==0) return deleteAtHead();
         else if(idx==size-1) deleteAtTail();
        else{
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }



    void display(){
        Node* temp=head;
        while(temp!=NULL){
           cout<<temp->val<<" ";
           temp=temp->next; 
        }
        cout<<endl;
    }
};
int main(){

Linkedlist ll;//{}
ll.insertAtTail(10);//{10->NULL}
ll.display();
ll.insertAtTail(20);//{10->20->NULL}
ll.display();
ll.insertAtTail(30);
ll.insertAtTail(40);
ll.display();
ll.insertAtHead(50);
ll.display();
ll.insertAtHead(24);
ll.display();
ll.insertAtIdx(4,80);
ll.display();
cout<<ll.getAtIdx(5)<<endl;
ll.deleteAtIdx(2);
ll.display();
}
