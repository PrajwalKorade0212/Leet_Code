class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int n1 = nums1.size();
       int n2 = nums2.size();
       vector<int> a;

       if(n1>n2)
       {
           for(int i = 0; i<n2; i++)
           {
               nums1.push_back(nums2[i]);
           }
           a = nums1;
       } 
       else
       {
           for(int i = 0; i<n1; i++)
           {
               nums2.push_back(nums1[i]);
           }
           a = nums2;
       }

       std::sort(a.begin(), a.end());
       int len = a.size();
       double ans = 0;
       if(len%2==0)
       {
           ans = (double(a[len/2]) + double(a[(len/2)-1]))/2;
       }
       else
       {
           ans = a[len/2];
       }
       return ans;
    }
};