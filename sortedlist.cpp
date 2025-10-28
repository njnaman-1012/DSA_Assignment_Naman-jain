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

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Create a temporary node to start the merged list
        ListNode temp;
        ListNode* tail = &temp;

        // While both lists have nodes
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                tail->next = list1;      // attach list1 node
                list1 = list1->next;     // move list1 ahead
            } else {
                tail->next = list2;      // attach list2 node
                list2 = list2->next;     // move list2 ahead
            }
            tail = tail->next;           // move tail forward
        }

        // Attach the remaining nodes (if any)
        if (list1 != nullptr) tail->next = list1;
        if (list2 != nullptr) tail->next = list2;

        // Return the merged list (skip temp node)
        return temp.next;
    }
};

