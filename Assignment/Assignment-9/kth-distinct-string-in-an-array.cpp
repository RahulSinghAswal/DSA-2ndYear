class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<string>ans;
        unordered_map<string,int>count;
        
        for(int i = 0; i<arr.size(); i++) {
            count[arr[i]]++;
        }

        for(int i = 0 ; i<arr.size() ; i++) {
            if(count[arr[i]]==1) {
                ans.push_back(arr[i]); 
            }
        }
 
    if(k>ans.size())
    
    else
    return ans[k-1];
        
    }
};
