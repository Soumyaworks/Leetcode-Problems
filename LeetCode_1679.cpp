class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int c=0,i,j,n1,n2;
        if(nums.empty())
            return 0;
        sort(nums.begin(),nums.end());
        n1=0;n2=nums.size()-1;
        while(n1<n2){
            if((nums[n1]+nums[n2])==k){
                c++;
                n1++;
                n2--;
            }
            else if((nums[n1]+nums[n2])<k){
                n1++;
            }
            else
                n2--;
        }
        return c;
    }
};
