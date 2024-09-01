#include<iostream>
using namespace std;
//queue ko implement using linked list
class Node
{
    public:
    int data;
    Node *next;
    Node(int value)
    {
        data=data;
        next=NULL;
    }
};
class Queue
{
    Node *front;
    Node *rear;

    public:
    Queue()
    {
        front=rear=NULL;

    }
    //queue is empty or not
    bool IsEmpty()
    {
        return front==NULL;
    }
    //PUSH OPERRATION
    void push(int x)
    {
        //empty
        if(IsEmpty())
        {
            cout<<"Pushed "<<x<<" into the queue"<<endl;
            front=rear=new Node(x);
            return;
        }
        //empty na ho
        else{
            rear->next=new Node(x);
            if(rear->next==NULL)
            {
                cout<<"Queue Overflow"<<endl;
                return;
            }
            cout<<"Pushed "<<x<<" into the queue"<<endl;
            rear=rear->next;
        }
    }
    void pop()
    {
        //empty toh nai hai
        if(IsEmpty())
        {
            cout<<"Queue underfined";
            return;
        }
        else{
            cout<<"popped "<<front->data<<" front the queue"<<endl;
            Node* temp=front;
            front=front->next;
            delete temp;
        }
    }
    int start()
    {
        if(IsEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else
        {
            return front->data;
        }
    }
};

int main()
{
    Queue q;
    q.push(4);
    q.push(5);
    q.push(6);
    q.pop();
    cout<<q.start()<<endl;

}