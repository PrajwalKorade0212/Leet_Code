class Solution {
private:
    void recurr(vector<vector<int>> &ans, vector<int> output, int i, vector<int> nums)
    {
        //base case
        if(i>=nums.size())
        {
            ans.push_back(output);
            return;
        }

        //exclude
        recurr(ans, output, i+1, nums);


        //include
        int elem = nums[i];
        output.push_back(elem);
        recurr(ans, output, i+1, nums);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int i = 0; 
        recurr(ans, output, i, nums);
        return ans;
    }
};