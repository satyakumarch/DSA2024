#include<iostream>
using namespace std;

//implement it with array
class Stack{
    int *arr;
    int size;
    int top;

    public:
    bool flag;
    //constructor
    Stack(int s)
    {
        size=s;
        top=-1;
        arr=new int[s];
        flag=1;
    }
    //push operation
    void push(int value)
    {
        if(top==size-1)
        {
            cout<<"stack overflow\n";
            return;
        }
        else{
            top++;
            arr[top]=value;
            cout<<"Paushed "<<value<<" into the stack\n";
            flag=0;
        }
    }
    //pop operation
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow\n";
        }
        else
        {
            cout<<"Popped "<<arr[top]<< " from the stack"<<endl;
            top--;
            if(top==1)
            flag=1; 
            
        }
    }
    //top//peek operation
    int peek()
    {
        if(top==-1)
        {
            cout<<"Stack Empty\n";
            return -1;
        }
        else
        {
           
          return arr[top];  
        }
    }
    //IsEmpty
    bool IsEmpty()
    {
        return top==-1;
    }
    //IsSize
    int IsSize()
    {
        
        return top+1;

    }

    
};
int main(){
Stack S(5);
int value=S.peek();
if(S.flag==0)
cout<<value<<endl;
//push
// S.push(5);
// S.push(6);
// S.push(7);
// S.push(8);
// S.push(9);
// cout<<"Top element is:"<<S.peek()<<endl;
// cout<<S.IsEmpty()<<endl;
// cout<<"The size of the stack is:"<<S.IsSize()<<endl;


}