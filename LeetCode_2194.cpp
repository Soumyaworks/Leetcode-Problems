vector<string> cellsInRange(string s) {
       vector<string> ans;
       string str;
       char c1=s[0],c2=s[3],r1=s[1],r2=s[4];
        //cout<<"c1="<<c1<<" c2="<<c2<<" r1="<<r1<<" r2="<<r2;
        int i,j;
        for(char ch=c1;ch<=c2;ch++){
            //cout<<"ch="<<ch<<"\n";
            for(char c=r1;c<=r2;c++){
                str=ch;
                str.append(1,c);
                ans.push_back(str);
            }
            cout<<"\n";
        }
        return ans;
    }
