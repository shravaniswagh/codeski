class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int cnt = 0;
        
       
        bool allSame = (unordered_set<int>(nums.begin(), nums.end()).size() == 1);
        
        
        if (allSame && nums[0] == goal) {
            return (n * (n + 1)) / 2;
        }

        
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                if (sum == goal) cnt++;
                if (sum > goal) break; 
            }
        }
        return cnt;
    }
};
