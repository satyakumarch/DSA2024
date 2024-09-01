#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>& st ){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    //putting element back fron temp to st
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}
//push at buttom
void pushAtButtom(stack<int>& st,int val){
   stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }

    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
//push at index
void pushAtIdx(stack<int>& st,int idx,int val){
   stack<int>temp;
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }

    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);
st.push(60);
print(st);
cout<<endl;
pushAtButtom(st,80);
cout<<"Pushed element at the buttom:"<<endl;
print(st);
cout<<endl;
cout<<"Element according to their index:"<<endl;
pushAtIdx(st,2,110);
print(st);
} 