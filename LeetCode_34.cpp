class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        ans.push_back(find_first(nums,nums.size(),target));
        ans.push_back(find_last(nums,nums.size(),target));
        return ans;
    }
    int find_first(vector<int>arr,int n,int x){
        int low=0,high=n-1,mid,res=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(arr[mid]==x)
                {
                res=mid;
                high=mid-1;
            }
            else if(x>arr[mid])
                low=mid+1;
            else if(x<arr[mid])
                high=mid-1;
        }
        return res;
    }
int find_last(vector<int>arr,int n,int x){
    int low=0,high=n-1,mid,res=-1;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==x)
        {
            res=mid;
            low=mid+1;
        }
        else if(x>arr[mid])
        low=mid+1;
        else if(x<arr[mid])
        high=mid-1;
    }
    return res;
}
};
