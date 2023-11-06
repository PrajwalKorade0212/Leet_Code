/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(NULL) {}
 *     ListNode(int x) : val(x), next(NULL) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution 
{
public:
    ListNode* removeElements(ListNode* head, int val) 
    {
        ListNode* temp = head;
        ListNode* prev = NULL;

        while (temp != NULL) 
        {
            if (temp->val == val) 
            {
                ListNode* valueToDelete = temp;
                temp = temp->next; 
                delete valueToDelete; 

                if (prev != NULL) 
                {
                    prev->next = temp;
                } 
                
                else
                {
                    head = temp;
                }
            }

            else 
            {
                prev = temp;
                temp = temp->next;
            }
        }

        return head;
    }
};
