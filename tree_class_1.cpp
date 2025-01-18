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

void preorderTraversal(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->val << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->val << " ";
}

void inorderTraversal(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

void levelorderTraversal(Node *root)
{
    if (!root)
    {
        cout << "Empty" << endl;
        return;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << temp->val << " ";

        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
}

Node *inputTree()
{
    int val;
    cin >> val;

    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        int x, y;
        cin >> x >> y;

        Node *leftNode = nullptr, *rightNode = nullptr;

        if (x != -1)
        {
            leftNode = new Node(x);
        }
        if (y != -1)
        {
            rightNode = new Node(y);
        }

        temp->left = leftNode;
        temp->right = rightNode;

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }

    return root;
}

int main()
{

    Node *root = inputTree();

    preorderTraversal(root);
    cout << endl;

    postorderTraversal(root);
    cout << endl;

    inorderTraversal(root);
    cout << endl;

    levelorderTraversal(root);

    return 0;
}