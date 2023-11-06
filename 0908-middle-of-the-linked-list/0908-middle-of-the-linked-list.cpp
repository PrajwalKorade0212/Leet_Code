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
private:
    int countNodes(ListNode* head)
    {
        ListNode* temp = head;
        int count = 0;
        while(temp!= NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
public:
    ListNode* middleNode(ListNode* head) {
        int count = countNodes(head);
        int half = count/2;
        
        while(half>0)
        {
            head = head->next;
            half--;
        }
        return head;
    }
};