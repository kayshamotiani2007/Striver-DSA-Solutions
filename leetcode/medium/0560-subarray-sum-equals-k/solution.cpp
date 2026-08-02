class Solution{
public:
    int subarraySum(vector<int> &nums, int k){
        unordered_map<int , int> mpp;
        mpp[0] = 1;
        int n = nums.size();

        int prefixSum = 0 , count = 0;

        for ( int i=0 ; i<n ; i++) {
            prefixSum += nums[i];
            int remove = prefixSum - k;
            count += mpp[remove];
            mpp[prefixSum] += 1;



        }
        return count;
        
    }
};