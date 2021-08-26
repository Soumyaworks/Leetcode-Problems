int subarraySum(vector<int>& nums, int k) {
    int target=k;
    if(nums.empty())
    return 0;
    int curr=0,ans=0;
    unordered_map<int,int>M;
    int i,n=nums.size();
    for(i=0;i<n;i++){
        curr+=nums[i];
        if(curr==target)
        ans++;
        if(M.find(curr-target)!=M.end())
        ans+=M[curr-target];
        M[curr]++;
    }
    return ans;
    }
