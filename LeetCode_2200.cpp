vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int>ans;
        int n=nums.size();
        int i,j;
        unordered_set<int>S;
        for(i=0;i<n;i++){
            if(nums[i]==key){
                S.insert(i);
            }
        }
        set<int>S2;
        for(auto it:S){
            int low=it-k;
            int high=it+k;
            
                for(i=max(0,low);i<=min(n-1,high);i++){
                    S2.insert(i);
                }
            
        }
        for(auto it:S2){
            ans.push_back(it);
        }
        return ans;
    }
