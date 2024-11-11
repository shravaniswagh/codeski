class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int found =0 ;
        int t = 0;
        for(int i = 0; i<n ; i ++){
            if(nums[i]==target){
                t = i;
                found =1;
                break;
            }
        }
        if(found == 0){
            for(int j = 0; j<n;j ++ ){
                if(nums[j]>target){
                    t = j;
                    break;
                }
                else{
                    if(nums[n-1] < target){
                        t = n;
                        break;
                    }    
                }
            }
        }
        
        return t;
    }
};