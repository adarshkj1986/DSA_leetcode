class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int a1=0;
        int a2=0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i] > nums[i - 1] && nums[i] > nums[i + 1] ){
                a1+=nums[i];
            }
            else if(nums[i] < nums[i - 1] && nums[i] < nums[i + 1]){
                a2+=nums[i];
            }
        }
        return (a1)-(a2);
    }
};