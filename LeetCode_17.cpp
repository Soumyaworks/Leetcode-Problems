 void func(vector<string>&ans,map<int,string>&M,string &digits,int ind,string temp){
        if(ind<digits.size()){
            int num=digits[ind]-'0';
            for(int j=0;j<M[num].size();j++){
                temp+=M[num][j];
                func(ans,M,digits,ind+1,temp);
                temp.pop_back();
            }
            
        }
        else{
            ans.push_back(temp);
            //temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits=="")
            return ans;
        map<int,string>M;
        M[2]="abc";
        M[3]="def";
        M[4]="ghi";
        M[5]="jkl";
        M[6]="mno";
        M[7]="pqrs";
        M[8]="tuv";
        M[9]="wxyz";
        string temp="";
        func(ans,M,digits,0,temp);
        return ans;
    }
