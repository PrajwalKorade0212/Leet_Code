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
class Solution 
{
private:
    int binaryToDecimal(vector<int> binary)
    {
        int ans = 0;
        int n = binary.size();
        int power = n-1;
        for(int i = 0 ; i < n ; i++)
        {
            ans = ans+ binary[i] * pow(2, power);
            power--;
        }
        return ans;
    }
public:
    int getDecimalValue(ListNode* head) 
    {
        vector<int> binary;
        ListNode* temp = head;
        while(temp!= NULL)
        {
            binary.push_back(temp->val);
            temp = temp->next;
        }
        return binaryToDecimal(binary);
    }
};