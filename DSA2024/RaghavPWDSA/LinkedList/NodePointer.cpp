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
void display(Node* head){
    // Node* temp=head;
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int size(Node* head){
    Node* temp=head;
    int n=0;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    return n;
}
// void reversedisplay(Node* head){
//     if(head==NULL) return;//base case
//     displayrec(head->next);//call
//     cout<<head->val<<" ";//kam

// }

void displayrec(Node* head){
    if(head==NULL) return;//base case
    cout<<head->val<<" ";//kam
    displayrec(head->next);//call

}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    
    a->next=b;
    b->next=c;
    c->next=d; 
    d->next=e;

    displayrec(a);
    // cout<<endl;
    // reversedisplay(a);



}