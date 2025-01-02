#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev = NULL;
    Node *next = NULL;
    Node(int val)
    {
        this->val = val;
    }
};

void pushNewNode(int val, Node *&head, Node *&tail)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

bool isPalindrome(Node *head, Node *tail)
{
    bool flag = true;
    Node *first = head;
    Node *last = tail;
    while (first != NULL)
    {
        if (first->val != last->val)
        {
            flag = false;
            break;
        }
        first = first->next;
        last = last->prev;
    }

    return flag;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int x;
    while (cin >> x && x != -1)
    {
        pushNewNode(x, head, tail);
    }

    if (isPalindrome(head, tail))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}