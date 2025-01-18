#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left = nullptr;
    Node *right = nullptr;

    Node(int val)
    {
        this->val = val;
    }
};

Node *inputTree()
{
    Node *root = nullptr;

    int val;
    cin >> val;

    if (val == -1)
    {
        return root;
    }

    root = new Node(val);

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        int x = -1, y = -1;
        cin >> x >> y;

        if (x != -1)
        {
            temp->left = new Node(x);
            q.push(temp->left);
        }

        if (y != -1)
        {
            temp->right = new Node(y);
            q.push(temp->right);
        }
    }

    return root;
}

void printLeft(Node *root)
{
    if (!root)
        return;

    if (root->left)
    {
        printLeft(root->left);
    }
    else if (root->right)
    {
        printLeft(root->right);
    }
    cout << root->val << " ";
}

void printRight(Node *root)
{
    if (!root)
        return;

    cout << root->val << " ";
    if (root->right)
    {

        printRight(root->right);
    }
    else if (root->left)
    {
        printRight(root->left);
    }
}

int main()
{

    Node* root = inputTree();

    printLeft(root->left);
    if(root){
        cout<<root->val<<" ";
    }
    printRight(root->right);

    // Node *root = new Node(10);
    // root->left = new Node(20);
    // root->left->left = new Node(40);
    // root->left->left->left = new Node(90);

    // cout << root->left->left->left->val << endl;

    return 0;
}
