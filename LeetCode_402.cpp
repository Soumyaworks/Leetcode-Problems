string removeKdigits(string nums,int k){
        if(k==0)
            return "0";
        string ans;
        int i,j;
        stack<char>st;
        int n=nums.size();
        k=n-k;
        for(i=0;i<n;i++){
            if(st.empty())
                st.push(nums[i]);
            else{
                while(!st.empty() && st.top()>nums[i] && st.size()-1+n-i>=k)
                    st.pop();
                if(st.empty()||st.size()<k)
                    st.push(nums[i]);
            }
        }
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        while(ans[0]=='0'){
            ans=ans.substr(1);
        }
        if(ans=="" || k==0)
            return "0";
        return ans;
        
    }
