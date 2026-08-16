class Solution {
public:
      vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;

        for(int i=0;i<nums.size()-1;i++){
           for(int j=i+1;j<nums.size();j++){
             if(nums[i]+nums[j]==target){
                result.push_back(i);
                result.push_back(j);
                return result;
              
            }
           }
        }
        return result;
        

    }
    int main(){
        int n;
        cout<<"enter the no of elements";
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        
        int target;
        cout<<"enter the target";
        cin>>target;
        Solution obj;
        vector<int>result=obj.twoSum(nums,target);
        for(int i=0;i<result.size();i++){
            cout<<result[i];
        }
         return 0;
    }
};