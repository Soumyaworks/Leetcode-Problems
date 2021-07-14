int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-1,mid;
        while(l<r){
            mid=(l+r)/2;
            if(nums[mid]>nums[mid+1]) //decreasing slope
                r=mid;
            else // increasing slope
                l=mid+1;
        }
        return l;
    }
