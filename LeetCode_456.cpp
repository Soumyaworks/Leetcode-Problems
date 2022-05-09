class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int i,j,k,n=nums.size();
        if(n<3)
            return false;
        stack<int>st;
        int ele2=INT_MIN;
        for(i=n-1;i>=0;i--){
            if(nums[i]<ele2)
                return true;
            while(!st.empty() && nums[i]>st.top()){
                ele2=st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};
