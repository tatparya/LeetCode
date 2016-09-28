class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int begin, end, maxBegin, maxEnd, maxSum, currentSum;
        if (nums.size() == 0)
            return 0;

        begin = 0;
        end = 0;
        maxBegin = nums[0];
        maxSum = nums[0];
        currentSum = 0;
        maxSum = nums[0];
        int i = 0;
        while( i < nums.size() ){

            currentSum += nums[i];
            end = i;

            //  If current sum is greater than current max,
            //  then current val is a better beginning point
            if (nums[i] > currentSum){
                currentSum = nums[i];
                begin = i;
                end = i;
            }

            //  If current sum is greater than current max update max sum
            //  and begin and end for maxSum
            if (currentSum > maxSum){
                maxSum = currentSum;
                maxBegin = begin;
                maxEnd = i;
            }

            //  Loop update
            i++;

        }

        return maxSum;
    }
};
