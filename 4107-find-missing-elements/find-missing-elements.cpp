class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        int min=nums[0];
        int max=nums[n-1];
        for(int k:nums){
            if(k<min) min=k;
            if(k>max) max=k;
        }
        vector<int> v;
        unordered_set<int> st;
        for(int k:nums) st.insert(k);
        for(int i=min;i<=max;i++){
            if(st.find(i)==st.end()) v.push_back(i);
        }
        return v;
    }
};