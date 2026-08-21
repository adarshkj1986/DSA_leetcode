class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int m=*max_element(nums.begin(),nums.end());
        int s=*min_element(nums.begin(),nums.end());
        unordered_set<int>st(nums.begin(),nums.end());
        vector<int>v;
        for(int i=s;i<m;i++){
            if(st.find(i)==st.end()){
                v.push_back(i);

            }
        }
        return v;
        
    }
};