#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next = nullptr;
    Node(int val)
    {
        this->val = val;
    }
};

class LinkList
{
public:
    Node *head = nullptr;
    Node *tail = nullptr;
    int len = 0;

    void push(int val)
    {
        Node *newNode = new Node(val);
        if (this->head == nullptr)
        {
            this->head = newNode;
            this->tail = newNode;
            return;
        }

        this->tail->next = newNode;
        this->tail = newNode;
    }

    void removeDuplicate()
    {
        Node *current = this->head;

        while (current != nullptr && current->next != nullptr)
        {
            Node *prev = current;
            Node *check = current->next;

            while (check != nullptr)
            {
                if (current->val == check->val)
                {

                    Node *duplicateNode = check;
                    prev->next = check->next;
                    check = check->next;   
                    delete duplicateNode;
                    this->len--;
                }
                else
                {
                    prev = check;
                    check = check->next;
                }
            }

            current = current->next;
        }
    }

    void addHead(int val)
    {
        Node *newHead = new Node(val);
        if (this->head == nullptr)
        {
            this->head = newHead;
            this->tail = this->head;
        }
        else
        {
            newHead->next = this->head;
            this->head = newHead;
        }
        this->len++;
    }

    void push1(int val)
    {
        Node *newNode = new Node(val);
        if (this->head == nullptr)
        {
            this->head = newNode;
            this->tail = this->head;
        }
        else
        {
            this->tail->next = newNode;
            this->tail = newNode;
        }
        this->len++;
    }

    void deleteNode(int index)
    {
        if (index >= this->len)
            return;

        Node *deleteNode = nullptr;

        if (index == 0)
        {
            deleteNode = this->head;
            this->head = this->head->next;

            if (this->head == nullptr)
                this->tail = nullptr;
        }
        else
        {
            Node *prev = this->head;
            int i = 0;
            while (i < index - 1)
            {
                prev = prev->next;
                i++;
            }

            deleteNode = prev->next;
            prev->next = deleteNode->next;

            if (deleteNode == this->tail)
                this->tail = prev;
        }

        delete deleteNode;
        this->len--;
    }

    bool compareLinkList(LinkList *other)
    {
        Node *frist = this->head;
        Node *second = other->head;
        while (frist != nullptr && second != nullptr)
        {
            if (frist->val != second->val)
            {
                return false;
            }
            frist = frist->next;
            second = second->next;
        }

        return frist == second;
    }

    int minMaxDiffer()
    {
        int x = INT_MIN, y = INT_MAX;
        Node *current = this->head;
        while (current != nullptr)
        {
            x = max(x, current->val);
            y = min(y, current->val);
            current = current->next;
        }

        return x - y;
    }

    int searchNode(int value)
    {
        Node *current = this->head;
        int findIndex = 0;

        while (current != nullptr)
        {
            if (current->val == value)
            {
                return findIndex;
            }
            findIndex++;
            current = current->next;
        }

        return -1;
    }

    void display()
    {
        Node *current = this->head;
        while (current != nullptr)
        {
            cout << current->val << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{

    LinkList *l1 = new LinkList();

    int x;
    while (cin >> x && x != -1)
    {
        l1->push(x);
    }

    l1->removeDuplicate();

    l1->display();

    return 0;
}