/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution 
{
public:
    bool hasCycle(ListNode *head) 
    {
        if (head == NULL || head->next == NULL) 
        {
            return false; // No cycle if the list is empty or has only one element.
        }

        ListNode *one_step = head;
        ListNode *two_step = head->next;

        while (one_step != two_step) 
        {
            if (two_step == NULL || two_step->next == NULL) {
                return false; // No cycle if the fast pointer reaches the end.
            }
            one_step = one_step->next;
            two_step = two_step->next->next;
        }

        return true; // If slow and fast meet, there's a cycle.
    }
};