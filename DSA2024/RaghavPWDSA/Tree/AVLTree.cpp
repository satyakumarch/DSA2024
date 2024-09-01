#include <iostream>
using namespace std;

class Node {
public:
    int data;
    int height;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        height = 1;
        left = right = NULL;
    }
};

int getHeight(Node* root) {
    if (!root) {
        return 0;
    }
    return root->height;
}

int getBalance(Node* root) {
    if (!root) {
        return 0;
    }
    return getHeight(root->left) - getHeight(root->right);
}

Node* rightRotate(Node* root) {
    Node* child = root->left;
    Node* childRight = child->right;

    child->right = root;
    root->left = childRight;

    // Update heights
    root->height = max(getHeight(root->left), getHeight(root->right)) + 1;
    child->height = max(getHeight(child->left), getHeight(child->right)) + 1;

    return child;
}

Node* leftRotate(Node* root) {
    Node* child = root->right;
    Node* childLeft = child->left;

    child->left = root;
    root->right = childLeft;

    // Update heights
    root->height = max(getHeight(root->left), getHeight(root->right)) + 1;
    child->height = max(getHeight(child->left), getHeight(child->right)) + 1;

    return child;
}

Node* insert(Node* root, int key)
 {
    //doesnot exit
    if (!root) {
        return new Node(key);
    }

    if (key < root->data) {
        root->left = insert(root->left, key);
    } else if (key > root->data) {
        root->right = insert(root->right, key);
    } else { // Duplicate key handled (optional: throw an exception or adjust logic)
        // You can choose how to handle duplicate keys here, such as ignoring them
        // or overwriting the existing value.
    }

    // Update height
    root->height = max(getHeight(root->left), getHeight(root->right)) + 1;

    // Balance check
    int balance = getBalance(root);

    // Left Left Case
    if (balance > 1 && key < root->left->data) {
        return rightRotate(root);
    }

    // Right Right Case
    if (balance < -1 && key > root->right->data) {
        return leftRotate(root);
    }

    // Left Right Case
    if (balance > 1 && key > root->left->data) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // Right Left Case
    if (balance < -1 && key < root->right->data) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

void preorder(Node* root) {
    if (!root) {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void InOrder(Node *root)
{
    if(!root)
    return;

    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

int main() {
    Node* root = NULL;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 50);
    root = insert(root, 70);
    root = insert(root, 5);
    root = insert(root, 100);
    root = insert(root, 95);

    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;

    cout<<"Inorder traversal:";
    InOrder(root);
    cout<<endl;

    return 0;
}
