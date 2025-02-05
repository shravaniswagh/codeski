class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> answer(n);
        int val =1;
        for(int i=0;i<n;i++){
            answer[i] = val;
            if(val *10>n){
                if(val == n) val /=10;
                val++;
                while(val%10 == 0) val /=10;
            }else val*=10;
        }
        return answer;
    }
};