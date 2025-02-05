class Solution {
public:
    int firstUniqChar(string s) {
        map <char,int> mpp;
        int n = s.size();
        for(char c : s){
            mpp[c]++;
        }
        for (int i = 0; i < n; i++) {  
            if (mpp[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};