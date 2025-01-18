#include <bits/stdc++.h>
using namespace std;


vector<pair<int,int>> v;


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



Node* inputTree() 
{
    Node *root = nullptr;

    int val;
    cin >> val;

    if (val == -1)
    {
        return nullptr;
    }

    queue<pair<Node *, int>> q;
    root = new Node(val);
    q.push({root, 0});

    while (!q.empty())
    {
        pair<Node *, int> temp = q.front();
        v.push_back({temp.first->val,temp.second});
        q.pop();

        int x = -1, y = -1;
        cin >> x >> y;

        if (x != -1)
        {
            temp.first->left = new Node(x);
            q.push({temp.first->left, temp.second + 1});
        }

        if (y != -1)
        {
            temp.first->right = new Node(y);
            q.push({temp.first->right, temp.second + 1});
        }
    }

    return root;
}

int main()
{
    Node* root = inputTree();

    int x;
    cin >> x; 

    bool flag = false;
    for (auto i: v){
        if(x==i.second){
            cout<<i.first<<" ";
            flag= true;
        }
    }

    if(!flag){
        cout<<"Invalid";
    }

    cout << endl;

    return 0;
}
