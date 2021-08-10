vector<int> partitionLabels(string s) {
        vector<int>ans;
    if(s=="")
    return ans;
    int n=s.length();
    int i,j;
    unordered_map<char,int>M;
    for(i=0;i<n;i++)
    {
        M[s[i]]=i;
        //M[s[i]].second++;
    }
    int c=0,p;
    i=0;
    while(i<n){
        if(M[s[i]]==i)
        {
            ans.push_back(1);
            i++;
        }
        else{
            p=M[s[i]];
            j=i;
            while(i<p){
                p=max(p,M[s[i]]);
                i++;
            }
            ans.push_back(i-j+1);
            i++;
        }
    }
    return ans;
    }
