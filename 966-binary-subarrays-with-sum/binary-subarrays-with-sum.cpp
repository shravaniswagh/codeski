class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> prefixcnt;
        int sum = 0,cnt = 0;
        prefixcnt[0] = 1;

        for(int num : nums){
            sum += num;
            if(prefixcnt.find(sum - goal) != prefixcnt.end()){
                cnt += prefixcnt[sum - goal];
            }
            prefixcnt[sum]++;
        }
        return cnt;
    }
};