class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),i,j,k;
        if(n==0)
            return 0;
        else if(n==1)
            return 1;
        i=0;j=1;
        int c=0;
        unordered_map<char,int>mymap;
        mymap[s[0]]=0;
        while(j<n){
            if(mymap.find(s[j])!=mymap.end()){
                i=max(i,mymap[s[j]]+1);
            }
            mymap[s[j]]=j;
            c=max(c,j-i+1);
            j++;
        }
        return c;
    }
};
