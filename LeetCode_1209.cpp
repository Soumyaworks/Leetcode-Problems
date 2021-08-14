string removeDuplicates(string s, int k) {
        if(k==1)
            return "";
        stack<pair<char,int>>st;
        int i;
        string str;
        for(i=0;i<s.length();i++){
            if(st.empty()){
                st.push(make_pair(s[i],1));
            }
            else{
                if(s[i]==st.top().first){
                    st.push(make_pair(s[i],st.top().second+1));
                    if(st.top().second==k){
                        int count=k;
                        while(count){
                            st.pop();
                            count--;
                        }
                    }
                }
                else{
                    st.push(make_pair(s[i],1));
                }
            }
        }
        while(!st.empty()){
            str+=st.top().first;
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
