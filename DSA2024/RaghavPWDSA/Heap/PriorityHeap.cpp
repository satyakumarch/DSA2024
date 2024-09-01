#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//max heap priority queue
int main()
{
    //priority_queue<int>p;//max heap

    // p.push(10);
    // p.push(20);
    // p.push(11);
    // p.push(18);
    // p.push(15);
    // cout<<p.top()<<endl;
    // //delete
    // p.pop();
    // cout<<p.top()<<" ";
    // //size
    // cout<<p.size()<<endl;
    // while (!p.empty())
    // {
    //     /* code */
    //     cout<<p.top()<<" ";
    //     p.pop();
    // }
    priority_queue<int,vector<int>,greater<int> >p;//min heap

    p.push(10);
    p.push(20);
    p.push(11);
    p.push(18);
    p.push(15);

    while (!p.empty())
    {
        /* code */
        cout<<p.top()<<" ";
        p.pop();
    }
    
    
}
