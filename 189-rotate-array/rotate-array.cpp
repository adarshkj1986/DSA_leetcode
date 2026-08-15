class Solution {
public:
    void rotate(vector<int> &nums, int k) {
        int m=nums.size();
        k=k%m;
        if(k<0){
            k+=m;
        }
        reverse(nums.begin(),nums.end()-k);
        reverse(nums.end()-k,nums.end());
        reverse(nums.begin(),nums.end());
    }
    int main(){
        int n;
        cout<<"enter the vector";
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int k;
        cin>>k;
        rotate(nums,k);
        return 0;



    }
};