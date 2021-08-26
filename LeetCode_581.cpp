int findUnsortedSubarray(vector<int>& nums) {
        //if(nums.empty() || nums.size()==1)
	    //return 0;
	    int i,j,local_max=INT_MIN,n=nums.size(),flag=0,start=-1,end=-1,ind;
        stack<int>st;
        int left=n,right=0;
        for(i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]>nums[i]){
                left=min(left,st.top());
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        for(i=n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]<nums[i]){
                right=max(right,st.top());
                st.pop();
            }
            st.push(i);
        }
        return right-left>0?right-left+1:0;
    }
