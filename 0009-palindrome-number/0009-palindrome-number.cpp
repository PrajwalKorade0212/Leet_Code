class Solution {
public:
    bool isPalindrome(int x) 
    {
        long long rev = 0;
        int temp = x;
        if(x>=0)
        {
            while(temp!=0)
            {
                int r = temp%10;
                temp = temp/10;
                rev = rev*10 +r;
            }
            return(rev==x);
        }
        else
        {
            return false;
        }
        
    }
};