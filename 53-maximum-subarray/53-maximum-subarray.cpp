class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = INT_MIN; // for maximum value
        int sum = 0; // for larger sum
        
        // Iterate through the loop
        for(int i = 0; i< nums.size();i++){
            
            sum += nums[i]; // calculating the sum
            if (sum > max){
                // if sum is max than prev max ==> set max = sum
                max = sum;
            }
            if (sum < 0){
                // if sum become -ve then we should discard till that point and fresh start to find max value
                sum = 0;
            }
        }
        return max;
    }
};