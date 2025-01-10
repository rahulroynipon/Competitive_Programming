#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev = nullptr;
    Node *next = nullptr;
    Node(int val)
    {
        this->val = val;
    }
};

class Stack
{
public:
    Node *head = nullptr;
    Node *tail = nullptr;
    int len = 0;

    void push(int val)
    {
        this->len++;
        Node *newNode = new Node(val);

        if (!this->head)
        {
            this->head = newNode;
            this->tail = this->head;
        }
        else
        {
            newNode->prev = this->tail;
            this->tail->next = newNode;
            this->tail = newNode;
        }
    }

    void pop()
    {
        if (!this->len)
            return;
        this->len--;

        Node *deleteNode = this->tail;

        if (this->head == this->tail)
        {
            this->head = nullptr;
            this->tail = nullptr;
        }
        else
        {
            Node *prevNode = this->tail->prev;
            prevNode->next = nullptr;
            this->tail = prevNode;
        }

        delete deleteNode;
    }

    int top()
    {
        if (!this->tail)
            return -1;

        return this->tail->val;
    }

    int size()
    {
        return this->len;
    }
};

class Queque
{
public:
    Node *head = nullptr;
    Node *tail = nullptr;
    int len = 0;

    void push(int val)
    {
        this->len++;
        Node *newNode = new Node(val);

        if (!this->head)
        {
            this->head = newNode;
            this->tail = newNode;
        }
        else
        {
            newNode->prev = this->tail;
            this->tail->next = newNode;
            this->tail = newNode;
        }
    }

    void pop()
    {
        if (!this->len)
            return;

        this->len--;

        Node *deleteNode = this->head;

        if (this->head == this->tail)
        {
            this->head = nullptr;
            this->tail = nullptr;
        }
        else
        {
            this->head = this->head->next;
        }

        delete deleteNode;
    }

    int front()
    {
        if (!this->len)
            return -1;

        return this->head->val;
    }

    int size()
    {
        return this->len;
    }
};

int main()
{
    Stack *s = new Stack();
    Queque *q = new Queque();

    int n, m;
    cin >> n >> m;

    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s->push(x);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        q->push(x);
    }

    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    bool flag = true;

    for (int i = 0; i < n; i++)
    {
        if (s->top() != q->front())
        {
            flag = false;
            break;
        }
        s->pop();
        q->pop();
    }

    cout << (flag ? "YES" : "NO") << endl;

    return 0;
}