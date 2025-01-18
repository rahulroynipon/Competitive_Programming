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

        int x=-1, y=-1;
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

long long sumOFnode(Node *root)
{
    if (root == nullptr || (!root->left && !root->right) )
        return 0;

    return root->val + sumOFnode(root->left) + sumOFnode(root->right);
     
}

int main()
{

    Node *root = inputTree();
    cout<<sumOFnode(root)<<endl;

    return 0;
}