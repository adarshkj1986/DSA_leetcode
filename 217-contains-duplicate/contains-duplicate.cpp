class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
           if(nums[i]==nums[i+1]){
            return true;
           }
        }
        return false;
        
       
    }
    int main(){
        int n;
        cout<<"enter the number";
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cout<<nums[i];
        }
        cout<< containsDuplicate(nums);
        return 0;

    }

};