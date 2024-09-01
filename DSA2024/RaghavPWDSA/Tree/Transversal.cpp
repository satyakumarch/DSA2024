
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *left,*right;
    Node(int value)
    {
        left=right=NULL;
        data=value;
    }
};
void PreOrder(Node *root)
{
    if(root==NULL)
    return;

    //Node
    cout<<root->data<<" ";

    //left

   PreOrder(root->left);
    //right
    PreOrder(root->right);
}
void InOrder(Node *root)
{
    if(root==NULL)
    return;
    //left
    InOrder(root->left);

    //Node
    cout<<root->data<<" ";

    //right
    InOrder(root->right);
}

void PostOrder(Node *root)
{
    if(root==NULL)
    return;
    //left
    PostOrder(root->left);
    //right
    PostOrder(root->right);
    //Node
    cout<<root->data<<" ";
}


Node *BinaryTree()
{
    
    int x;
    
    cin>>x;
    if(x==-1)
    return NULL;
    
    Node *temp=new Node(x);
    //left side
    cout<<"Enter the left child of "<< x <<" : ";
    temp->left=BinaryTree();
    cout<<"Enter the right child of:"<< x <<" : ";
    temp->right=BinaryTree();
    return temp;
}
int main()
{
    cout<<"Enter the root Node:";
    Node *root;
    root=BinaryTree();

    //tree creation code
    //preorder
    cout<<"PrePorder:";
    PreOrder(root);
cout<<endl;
    //InOrder
    cout<<"InOrder:";
    InOrder(root);
cout<<endl;
    //PostOrder
    cout<<"POstOrder:";
    PostOrder(root);
}
// output
// Enter the root Node:1
// Enter the left child of 1 : 2
// Enter the left child of 2 : 3
// Enter the left child of 3 : 4
// Enter the left child of 4 : -1
// Enter the right child of:4 : -1
// Enter the right child of:3 : 5
// Enter the left child of 5 : -1
// Enter the right child of:5 : -1
// Enter the right child of:2 : 6
// Enter the left child of 6 : -1
// Enter the right child of:6 : -1
// Enter the right child of:1 : 7
// Enter the left child of 7 : -1
// Enter the right child of:7 : 8
// Enter the left child of 8 : 9
// Enter the left child of 9 : -1
// Enter the right child of:9 : -1
// Enter the right child of:8 : 10
// Enter the left child of 10 : -1
// Enter the right child of:10 : -1
// PrePorder:1 2 3 4 5 6 7 8 9 10 
// InOrder:4 3 5 2 6 1 7 9 8 10
// POstOrder:4 5 3 6 2 9 10 8 7 1
