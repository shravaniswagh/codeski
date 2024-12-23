class Solution {
public:
    int mySqrt(int x) {
        
        int ans=0;
        int i=0; 
        while(true){
            long long pow =(long long) i*i;
            if(pow<=x){
                ans = i;
            }else{
                break;
            }
            i++;
        }
        return ans;
        
    }
};