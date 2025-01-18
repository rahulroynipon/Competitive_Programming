#include <bits/stdc++.h>
using namespace std;

vector<int> v;

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

int countNode(Node *root)
{
    if (!root)
        return 0;
    return 1 + countNode(root->left) + countNode(root->right);
}

int treeHeight(Node* root){
    if(!root) return 0;

    int l = treeHeight(root->left);
    int r = treeHeight(root->right);

    return 1+max(l,r);
}

int main()
{

    Node *root = inputTree();

    int h = treeHeight(root);
    int c = countNode(root);


    cout<<((pow(2,h)-1) == c ? "YES": "NO")<<endl;

    return 0;
}