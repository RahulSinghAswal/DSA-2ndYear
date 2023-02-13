class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int result = original;
        map<int, int> mp;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for (auto i : mp) {
            if (i.first == result) {
                result = 2*result;
            }
        }



        return result;
        
    }
};
