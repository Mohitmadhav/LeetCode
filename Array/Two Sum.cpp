class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        map<int,int>index;

        for(int i=0;i<nums.size();i++)
        {
            if(index.find(target-nums[i])!=index.end())
            {
                ans.push_back(index[target-nums[i]]);
                ans.push_back(i);
                  return ans;
            }

          index[nums[i]]=i;
        }

     return ans;
    }
};
