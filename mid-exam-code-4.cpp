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

void Display(Node *head, Node *tail)
{
    Node *first = head;
    Node *last = tail;

    cout << "L -> ";
    while (first != NULL)
    {
        cout << first->val << " ";
        first = first->next;
    }
    cout << endl;

    cout << "R -> ";
    while (last != NULL)
    {
        cout << last->val << " ";
        last = last->prev;
    }
    cout << endl;
}

void pushNewNode(int index, int val, Node *&head, Node *&tail, int *len)
{
    if (index > *len)
    {
        cout << "Invalid" << endl;
        return;
    }

    Node *newNode = new Node(val);

    if (index == 0)
    {
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    else if (index == *len)
    {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    else
    {
        Node *current = head;
        for (int i = 0; i < index - 1; i++)
        {
            current = current->next;
        }

        newNode->next = current->next;
        newNode->prev = current;
        if (current->next != NULL)
        {
            current->next->prev = newNode;
        }
        current->next = newNode;
    }

    (*len)++;
    Display(head, tail);
}

int main()
{
    int t;
    cin >> t;

    Node *head = NULL;
    Node *tail = NULL;
    int len = 0;

    while (t--)
    {
        int index, val;
        cin >> index >> val;
        pushNewNode(index, val, head, tail, &len);
    }

    return 0;
}