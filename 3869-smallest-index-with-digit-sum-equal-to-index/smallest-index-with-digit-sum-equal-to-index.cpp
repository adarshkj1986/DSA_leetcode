class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int index=nums[i];
            int sum=0;
            while(index!=0){
                sum+=index%10;
                index=index/10;
            }
            if(sum==i){
                return i;
            }
        }
        return -1;
    }
};