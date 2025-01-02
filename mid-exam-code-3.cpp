#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *prev = NULL;
    Node *next = NULL;
    Node(string val)
    {
        this->val = val;
    }
};

void pushNewNode(string val, Node *&head, Node *&tail)
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

bool visitNode(string val, Node *head, Node *&track)
{
    Node *current = head;
    while (current != NULL)
    {
        if (current->val == val)
        {
            track = current;
            return true;
        }
        current = current->next;
    }
    return false;
}

bool visitPrevNextNode(string task, Node *&track){
    if (task == "prev"){
        if(track->prev != NULL){
            track = track->prev;
            return true;
        }
    }

    if(task == "next"){
        if(track->next != NULL){
            track = track->next;
            return true;
        }
    }

    return false;
}

void printOutput(bool flag, Node *track)
{
    if (flag)
    {
        cout << track->val << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *track = NULL;

    string ch;
    while (cin >> ch && ch != "end")
    {
        pushNewNode(ch, head, tail);
    }

    int t;
    cin >> t;
    while (t--)
    {
        string task;
        cin >> task;
        if (task == "visit")
        {
            string val;
            cin >> val;
            bool flag = visitNode(val, head, track);
            printOutput(flag, track);
        }
        else
        {
            bool flag = visitPrevNextNode(task,track);
            printOutput(flag, track);
        }
    }

   

    return 0;
}