#include <bits/stdc++.h>
using namespace std;

class Linklist
{
public:
    int val;
    Linklist *next = nullptr;
    Linklist(int val)
    {
        this->val = val;
    }
};

void push(Linklist *&head, int val)
{
    if (head == nullptr)
    {
        head = new Linklist(val);
        return;
    }

    Linklist *current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    current->next = new Linklist(val);
}

void display(Linklist *&head)
{
    if (head == nullptr)
    {
        cout << "Empty Link list" << endl;
        return;
    }

    Linklist *current = head;
    while (current != nullptr)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

int len(Linklist *&head)
{
    int len = 0;
    if (head == nullptr)
        return len;

    Linklist *current = head;
    while (current)
    {
        len++;
        current = current->next;
    }
    return len;
}

void reversePrint(Linklist *head)
{
    if (head == nullptr)
    {
        return;
    }
    reversePrint(head->next);
    cout << head->val << " ";
}

void reverse(Linklist *&head)
{
    if (head == nullptr)
        return;
    Linklist *newHead = nullptr;
    Linklist *current = head;
    Linklist *temp;

    while (current != nullptr)
    {
        temp = current->next;
        current->next = newHead;
        newHead = current;
        current = temp;
    }

    head = newHead;
}

void sortD(Linklist *&head)
{
    if(head==nullptr || head->next==nullptr) return;

    for (Linklist *i=head; i->next!=nullptr; i = i->next){
        for (Linklist *j=i->next; j!=nullptr; j = j->next){
            if(i->val < j->val){
                swap(i->val,j->val);
            }
        }
    }
}

int main()
{
    Linklist *list1 = nullptr;

    int arr1[] = {5, 1, 4, 5, -1};

    for (int i : arr1)
    {
        push(list1, i);
    }

    display(list1);
    reverse(list1);
    display(list1);
    sortD(list1);
    display(list1);

    return 0;
}