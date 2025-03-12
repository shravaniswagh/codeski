class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int size = nums.size();
        int p=0;
        int n=0;
        for(int i=0;i<size; i++){
            if(nums[i]<0){
                n++;
            }
            if(nums[i]>0){
                p++;
            }
        }
        return max(p,n);
    }
};