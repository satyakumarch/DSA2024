#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //hoe to create a queue
    queue<int>q;
    q.push(10);
    q.push(24);
    q.push(54);
    q.pop();

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
}