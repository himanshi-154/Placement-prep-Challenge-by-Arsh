class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        ranges::sort(nums);
        int n = nums.size() - 1;
        for(int i=0 ; i<n ; i++){
            if(nums[i] == nums[i+1]){
                return nums[i];
            }
        }
        return 0;
    }
};
//will get back to this with different and better approach
