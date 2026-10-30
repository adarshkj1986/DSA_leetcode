class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count=0;
        int a=nums[0];
        for(int i=1;i<nums.size()-1;i++){
            if(a<nums[i] && nums[i]>nums[i+1] ){
                count++;
                a=nums[i];
            }
            else if(a>nums[i] && nums[i]<nums[i+1] ){
                count++;
                a=nums[i];
            }

        }
        return count;
    }
};