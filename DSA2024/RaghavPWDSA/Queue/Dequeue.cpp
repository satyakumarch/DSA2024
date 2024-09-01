#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next,*prev;

    Node (int value)
    {
        data=value;
        next=prev=NULL;
    }
    
} ;// namespace std;
class Dequeue
{
    Node *front,*rear;
    public:

    Dequeue()
    {
        front=rear=NULL;
    }
    //push front  operation
    void Push_front(int x)
    {
        //empty
        if(front==NULL)
        {
            front=rear=new Node(x);
            cout<<"Pushed "<<x<<" in front of dequeue"<<endl;
            return;
        }
        else
        {
            Node *temp=new Node(x);
            temp->next=front;
            front->prev=temp;
            front=temp;
            cout<<"Pushed "<<x<<" in front of dequeue"<<endl;
            return;
        }
    }
    //push back operation
     void Push_back(int x)
    {
        //empty
        if(front==NULL)
        {
            front=rear=new Node(x);
            cout<<"Pushed "<<x<<" in back of dequeue"<<endl;
            return;
        }
        else
        {
            Node *temp=new Node(x);
            rear->next=temp;
            temp->prev=rear;
            rear=temp;
            cout<<"Pushed "<<x<<" in back of dequeue"<<endl;
        }
    }
    //pop front
    void pop_front(int x)
    {
        if(front==NULL)
        {
            cout<<"Dequeue underflow"<<endl;
            return;
        }
        else
        {
            Node *temp=front;
            cout<<"popped "<<temp->data<<" from front"<<endl;
            front=front->next;
            delete temp;
            //greater than 1 node
            if(front)
            front->prev=NULL;
            //1 node
            else
            rear=NULL;
        }
    }
    //pop back
    void pop_back()
    {
        if(front==NULL)
        {
            cout<<"Dequeue underflow"<<endl;
            return;
        }
        else
        {
            Node *temp=rear;
            cout<<"popped "<<temp->data<<" from front"<<endl;
            rear=rear->prev;
            delete temp;
            //greater than 1 node
            if(rear)
            rear->prev=NULL;
            //1 node
            else
            front=NULL;
        }
    }
    //start
    int start()
    {
        if(front==NULL)
        return -1;
        else
        return front->data;
    }
    //end
    int end()
    {
        if(front==NULL)
        return -1;
        else
        return rear->data;

    }
};
int main()
{
Dequeue d;
d.Push_back(5);
d.Push_front(8);
d.pop_back();
cout<<d.start()<<endl;
}
