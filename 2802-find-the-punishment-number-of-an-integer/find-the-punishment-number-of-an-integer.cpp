class Solution {
public:
    bool canPartition(string numStr, int target, int currentSum, int index) {
        if (index == numStr.size()) 
            return currentSum == target;
        
        int val = 0;
        for (int i = index; i < numStr.size(); i++) {
            val = val * 10 + (numStr[i] - '0');  
            if (canPartition(numStr, target, currentSum + val, i + 1)) 
                return true;
        }
        return false;
    }

    int punishmentNumber(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            int square = i * i;
            string squareStr = to_string(square);
            if (canPartition(squareStr, i, 0, 0)) {
                sum += square;
            }
        }
        return sum;
    }
};
