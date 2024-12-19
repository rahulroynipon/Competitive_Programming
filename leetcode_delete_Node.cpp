#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next = NULL;
    ListNode(int val)
    {
        this->val = val;
    }
};

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *current = head;
        while (current != nullptr)
        {
            if (current->next == nullptr)
                return head;
            ListNode *temp = current->next;
            while (temp != nullptr && temp->val == current->val)
            {
                temp = temp->next;
            }
            current->next = temp;
            current = current->next;
        }

        return head;
    }

    ListNode *removeElements(ListNode *head, int val){
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;

        ListNode *prev = dummy;
        ListNode *current = dummy->next;

        while (current != nullptr)
        {
            if (current->val == val)
            {
                prev->next = current->next;
                current = current->next;
                continue;
            }
            prev = current;
            current = current->next;
        }
        return dummy->next;
    }

    ListNode *reverseList(ListNode *head){
        ListNode* newHead = nullptr;
        ListNode* current = head;
        while (current!=nullptr)
        {
            ListNode* temp = current->next;
            current->next = newHead;
            newHead = current;
            current = temp;
        }
        return newHead;
    }

    bool isPalindrome(ListNode* head) {
        
    }
};

void insert(ListNode *head, int val){
    ListNode *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = new ListNode(val);
}

void display(ListNode *head)
{
    ListNode *current = head;
    while (current != nullptr)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    ListNode *head = new ListNode(1);
    int x;
    while (cin >> x)
    {
        insert(head, x);
    }

    display(head);
    Solution *s = new Solution();

    ListNode *newHead = s->reverseList(head);
    display(newHead);

    return 0;
}