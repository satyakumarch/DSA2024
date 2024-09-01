// #include<iostream>
// #include<queue>
// using namespace std;

// class Node
// {
// public:
// int data;
// Node* left,*right;
// Node(int value)
// {
//     data=value;
//     left=right=NULL;

// }
// };



// int main()
// {
// int x;
// cout<<"Enter the root element:";
// cin>>x;
// int first,second;
// queue<Node*>q;
// Node *root=new Node(x);
// q.push(root);

// //Build the binary tree
// while (!q.empty())
// {
//     Node *temp=q.front();
//     q.pop();
//     cout<<"Enter the left child of "<<temp->data<<" : ";
//     cin>>first;//left node ki value
// //left node
// if(first!=-1)
// {
//     temp->left=new Node(first);
//     q.push(temp->left);
// }
// //right node
// cout<<"Enter the right child of "<<temp->data<<" : ";
// cin>>second;
// if(second!=-1)
// {
//     temp->right=new Node(second);
//     q.push(temp->right);
// }

// }

// }

#include <iostream>
using namespace std;

class Print {
public:
    void show(int i) {
        cout << "Integer: " << i << endl;
    }

    void show(double d) {
        cout << "Double: " << d << endl;
    }

    void show(std::string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print print;

    print.show(5);        // Calls show(int)
    print.show(5.5);      // Calls show(double)
    print.show("Hello");  // Calls show(string)

    return 0;
}
