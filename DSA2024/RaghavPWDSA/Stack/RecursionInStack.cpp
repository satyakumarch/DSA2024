#include<iostream>
#include<stack>
using namespace std;

void displayRev(stack<int>& st){
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    displayRev(st);
    st.push(x);
}
void display(stack<int>& st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
void pushAtButtomRec(stack<int>& st,int val){
    if(st.size()==0) {
    st.push(val);
    return;
    }
   
    int x=st.top();
    st.pop(); 
    pushAtButtomRec(st,val);
    st.push(x);
}
void reverse(stack<int>& st){
    if(st.size()==1)return;
    int x=st.top();
    st.pop();
    reverse(st);
    pushAtButtomRec(st,x);
}

int main(){
stack<int> st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);
display(st);
//pushAtButtomRec(st,-10);

// displayRev(st);
cout<<endl;
reverse(st);
display(st);

} 