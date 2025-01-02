class Solution {
public:
    int climbStairs(int n) {
        int a = 0;
        int b = 1;
        int count;
        for(int i =0;i<n;i++){
            count =  a + b;
            a = b;
            b = count;
        }
        return count;
    }
};