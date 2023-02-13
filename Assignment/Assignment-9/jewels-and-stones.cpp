class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;

        unordered_map<char, int> mp;

        for (int i = 0; i < stones.size(); i++) {
           char ch = stones[i];
           mp[ch]++;
        }
        for (int i = 0; i < jewels.size(); i++) {
            if (mp.find(jewels[i]) != mp.end()) {
                count = count + mp[jewels[i]];

            }
            
        }

        return count;

        
    }
};
