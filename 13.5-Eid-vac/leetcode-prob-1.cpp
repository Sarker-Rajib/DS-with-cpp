/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *fast = head;
        ListNode *slow = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    // int size(ListNode * head){
    //     ListNode *tmp =head;
    //     int count;

    //     while(tmp!=NULL){
    //         count++;
    //         tmp=tmp->next;
    //     }
    //     return count;
    // }

    // ListNode* middleNode(ListNode* head) {
    //     ListNode* tmp = head;
    //     int sz = size(head);

    //     for(int i = 1; i<= sz/2; i++)
    //     {
    //         tmp = tmp->next;
    //     }

    //     return tmp;
    // }
};
