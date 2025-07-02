class Solution {
public:
    int romanToInt(string s) {
        map<int,int> roman;
        roman['I']=1;
        roman['V']=5;
        roman['X']=10;
        roman['L']=50;
        roman['C']=100;
        roman['D']=500;
        roman['M']=1000;
        int n=roman[s[s.size()-1]];
        for(int i= s.size()-2; i> -1; i--){
            if(roman[s[i]]<roman[s[i+1]]){
                n-=roman[s[i]];
            }else{
                n+=roman[s[i]];
            }
        }
        return n;
    }
};