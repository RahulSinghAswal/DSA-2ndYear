class Solution {
public:
    int reversed(int n) {
        int rev = 0;
        while (n > 0) {
            int rem = n%10;
            rev = rev*10 + rem;
            n = n/10;

        }
        return rev;

    }
    int countDistinctIntegers(vector<int>& nums) {
        
            unordered_set<int> ns{begin(nums), end(nums)};

            for (auto i : nums) {
                ns.insert(reversed(i));
            }
            return ns.size();

        }
        
    
};
