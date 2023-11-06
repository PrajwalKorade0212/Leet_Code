class Solution {
public:
    int reverse(int x) {
        signed int rev = 0;
        int temp = abs(x);
        int i,r;
        while(temp!=0)
        {
            r = temp%10;
            if(rev>INT_MAX/10 || rev < INT_MIN/10)
            {
                return 0;
            }
            rev = r+ rev*10;
            temp = temp/10;
        }
        if(x >= 0)
        {
            return rev;
        }
        else
        {
            return rev*(-1);
        }
    }
};