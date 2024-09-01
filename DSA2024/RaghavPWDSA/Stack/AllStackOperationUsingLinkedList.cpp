#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    
    Node(int value)
    {
        data=value;
        next=NULL;

    }
};
class Stack
{
    Node *top;
    int size;//actual size of the stack

    public:
    Stack()
    {
        top=NULL;
        size=0;
    }
    //push operation
    void push(int value)
    {
        Node *temp=new Node(value);
        if(temp==NULL)
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        temp->next=top;
        top=temp;
        size++;
        cout<<"Pushed "<<value<<" into the stack"<<endl;
    }


//pop operation
void pop(){
    if(top==NULL)
    {
        cout<<"Stack underflow"<<endl;
        return;
    }
    else
    {
        Node *temp=top;
        cout<<"Popped "<<top->data<<" from the stack"<<endl;
        top=top->next;
        delete temp;
        size--;
    }
}
//peek
int peek()
{
    if(top==NULL)
    {
        cout<<"Stack is Empty";
    return -1;
    }
    else{
        return top->data;
    }

}
//IsEmpty
bool IsEmpty()
{
    return top==NULL;
}
//Issize
int IsSize()
{
    return size;
}
};
int main()
{
    Stack S;
S.push(10);
S.push(20);
S.push(30);
S.push(40);
S.push(50);
S.pop();
cout<<S.peek()<<endl;
cout<<"The size of the stack  is:"<<S.IsSize()<<endl;
cout<<S.IsEmpty<<endl;



}