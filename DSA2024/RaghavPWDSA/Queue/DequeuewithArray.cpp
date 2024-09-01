#include<iostream>
using namespace std;
class Dequeue
{
    int front,rear,size;
    int *arr;

    public:
    Dequeue(int n)
    {
        size=n;
        arr=new int[n];
        front=rear=-1;
    }
    bool IsEmpty()
    {
        return front==-1;
    }
    bool IsFull()
    {
        return (rear+1)%size==front;
    }
    void push_front(int x)
    {
        //empyt
        if(IsEmpty())
        {
            front=rear=0;
            cout<<"Pushed "<<x<< " in front"<<endl;
            arr[0]=x;
            return;
        }
        //is full
        else if(IsFull())
        {
            cout<<"Dequeue Overflow"<<endl;
            return;
        }
        //normal
        else
        {
front=(front-1+size)%size;
arr[front]=x;
cout<<"Pushed "<<x<<" in front"<<endl;
return;
        }
    }
    //push back
    void push_back(int x)
    {
        //empyt
        if(IsEmpty())
        {
            front=rear=0;
            cout<<"Pushed "<<x<< " in back"<<endl;
            arr[0]=x;
            return;
        }
        //is full
        else if(IsFull())
        {
            cout<<"Dequeue Overflow"<<endl;
            return;
        }
        //normal
        else
        {
rear=(rear+1)%size;
arr[rear]=x;
cout<<"Pushed "<<x<<" in back"<<endl;
return;
        }
    }
    //pop front
    void pop_front()
    {
        //empty
        if(IsEmpty())
        {
            cout<<"Dequeue underflow"<<endl;
            return;
        }
        else{
            cout<<"popped "<<arr[front]<<" front dequeue"<<endl;

            //single element
            if(front==rear)
            front=rear=-1;
            //greater than 1 element
            else
            front=(front+1)%size;
        }
    }
    //pop back
    void pop_back()
    {
        //empty
        if(IsEmpty())
        {
            cout<<"Dequeue underflow"<<endl;
            return;
        }
        else{
            cout<<"popped "<<arr[rear]<<" front dequeue"<<endl;
            //single element
            if(front==rear)
            front=rear=-1;
            //greater than 1 element
            else
          rear=(rear-1+size)%size;
        }
    }
    int start()
    {
        if(IsEmpty())
        return -1;
        else
        return arr[front];
       
    }
    int end()
    {
        if(IsEmpty())
        return -1;
        else
        return arr[rear];

    }
};
int main()
{
Dequeue d(5);
d.push_back(10);
d.push_back(9);
d.push_front(13);
d.push_back(15);
d.push_back(78);
d.push_front(65);
d.pop_back();
d.pop_front();
cout<<d.start()<<endl;

}

