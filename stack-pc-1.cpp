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
        len++;
        Node *newNode = new Node(val);

        if (!this->head)
        {
            this->head = newNode;
            this->tail = newNode;
            return;
        }

        newNode->prev = this->tail;
        this->tail->next = newNode;
        this->tail = newNode;
    }

    int pop()
    {
        Node *deleteNode = this->tail;
        if (!this->tail->prev)
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

        int value = deleteNode->val;
        delete deleteNode;
        len--;
        return value;
    }

    int top(){
        
    }



    void display()
    {
        if (!this->head)
        {
            cout << "Empty stack" << endl;
            return;
        }
        Node *current = this->head;
        while (current)
        {
            cout << current->val << " ";
            current = current->next;
        }

        cout << endl;
    }
};



int main()
{

    Stack *s1 = new Stack();

    s1->push(10);
    s1->push(20);
    s1->push(30);
    s1->push(40);
    s1->pop();
    s1->pop();
    s1->pop();
    s1->pop();
    s1->pop();
    s1->display();

    return 0;
}