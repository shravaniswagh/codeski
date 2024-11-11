class Solution {
public:
    int lengthOfLastWord(string s) {
        int i;
        int count=0;
        int n = s.length();  
        for(i =n-1;i>=0;i--){
            if((int)s[i] == 32 && count ==0){
                continue;
            }
            else if((int)s[i] == 32){
                break;
            }
            count ++;
        }

        return count;
    }
};