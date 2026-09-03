class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int j=0;
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(j==0){
                ans=nums[i];
                j++;
            }
            else if(nums[i]==ans){
                j++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};