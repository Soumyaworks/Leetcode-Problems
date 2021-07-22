int minOperations(string s) {
        int n=s.size();
        string str1,str2;
        int i,c1=0,c2=0;
        for(i=0;i<n;i++){
            if(i%2==0){
                str1+='0';
                str2+='1';
            }
            else{
                str1+='1';
                str2+='0';
            }
        }
        //int c1=0,c2=0;
        for(i=0;i<n;i++){
            if(s[i]!=str1[i])
                c1++;
            if(s[i]!=str2[i])
                c2++;
        }
        return min(c1,c2);
    }
