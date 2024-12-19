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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode* dummy = new ListNode(-101);
        ListNode* tail = dummy;

        while (list1 != nullptr && list2 != nullptr) {
        if (list1->val <= list2->val) {
            tail->next = list1; 
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }


        if(list1 != nullptr){
            tail->next = list1;
        }else if (list2 != nullptr){
            tail->next = list2;
        }
        
        
        return dummy->next;
    }

    ListNode* swapPairs(ListNode* head){
        if(head==nullptr || head->next==nullptr) return head;

        ListNode* dummy = new ListNode(-101);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* current = head;
        while (current->next != nullptr)
        {
            ListNode* next = current->next->next;
            ListNode* temp = current->next;
            prev->next = current->next;
            current->next = next;
            prev->next->next = current;
            prev = prev->next;
            current = next;
        }

        return dummy->next;
        
    }
};

int main()
{
    ListNode *list1 = new ListNode(4);
    list1->next = new ListNode(5);
    list1->next = new ListNode(6);
    list1->next = new ListNode(7);

    ListNode *list2 = new ListNode(1);
    list2->next = new ListNode(2);
    list2->next = new ListNode(4);

    Solution s1;
    ListNode *head = s1.mergeTwoLists(list1, list2);

    while (head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }

    return 0;
}