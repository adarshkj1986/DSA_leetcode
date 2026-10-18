class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            long long currentIndex=(long long)nums[i]-1;
            if(nums[i]>0 && nums[i]<=n && nums[i]!=nums[currentIndex]){
                int temp=nums[i];
                nums[i]=nums[currentIndex];
                nums[currentIndex]=temp;
            }
            else{
                i++;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1){
                return i+1;
            }
        }
        return n+1;

    }
};