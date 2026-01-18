class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==1){
            return strs[0];
        }
        int m=INT_MAX;
        for(int i=0; i<n; i++){
            m=min(m,(int)strs[i].size());
        }
        if(m==0){
            return "";
        }
        int k=0;
        string s= "";
        while(k<m){
            bool th=false;
            char c = strs[0][k];
            for(int i=1; i<n; i++){
                if(strs[i][k]!=c){
                    th=true;
                    break;
                }
            }
            if(th){
                break;
            }else{
                s.push_back(c);
            }
            k++;
        }
        return s;
    }
};