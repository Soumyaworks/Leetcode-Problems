class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1,s2;
        if(s==t)
            return true;
        stack<char>st;
        for(auto x:s){
            if(x=='#' && !st.empty())
                st.pop();
            else if(x!='#')
                st.push(x);
        }
        while(!st.empty()){
            s1=st.top()+s1;
            st.pop();
        }
        //cout<<"s1="<<s1<<"\n";
        for(auto x:t){
            if(x=='#' && !st.empty())
                st.pop();
            else if(x!='#')
                st.push(x);
        }
        while(!st.empty()){
            s2=st.top()+s2;
            st.pop();
        }
        //cout<<"s2="<<s2<<"\n";
        if(s1==s2)
            return true;
        else
            return false;
    }
};
