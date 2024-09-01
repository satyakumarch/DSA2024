#include<iostream>
using namespace std;

//implementation queue using circular array,circular queue
class Queue
{
    int *arr;
    int front,rear,size;

    public:
    //constructor
    Queue(int n)
    {
        arr=new int[n];
        size=n;
        front=rear=-1;
    }
    //if queue is empty is not
    bool IsEmpty()
    {
       
        return  front==-1;
         
    }
    //queue is full or not
    bool IsFull()
    {
        return (rear+1)%size==front;
    }
    //push element into queue
    void push(int x)
    {
        //empty
        if(IsEmpty())
        {
            cout<<"Pushed "<<x<<" into the Queue"<<endl;
            front=rear=0;
            arr[0]=x;
            return;
        }
        //full
        else if(IsFull())
        {
            cout<<"Queue Overflow"<<endl;
            return;
        }
        //insert
        else
        {
            rear=(rear+1)%size;
            arr[rear]=x;
            cout<<"Pushed "<<x<<" into the Queue"<<endl;


        }
    }
    //pop element starting
    void pop()
    {
        //empty
        if(IsEmpty())
        {
            cout<<"Queue underflow"<<endl;
            return;
        }
        //pop kar do
        else
        {
            if(front==rear)
            {
                 cout<<"Popped "<<arr[front]<< " into the Queue"<<endl;
                  front=rear=-1;

            }
          
            else
            {
                 cout<<"Popped "<<arr[front]<< " into the Queue"<<endl;
                front=(front+1)%size;
            }
           
        }

    }
    //starting mein kan sa element hia
    int start()
    {
        if(IsEmpty())
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else
         return arr[front];
        
    }
};
int main(){
Queue q(5);
q.push(5);
q.push(15);
q.push(51);
q.push(125);
q.pop();
q.push(511);
q.push(38);
q.pop();






}
