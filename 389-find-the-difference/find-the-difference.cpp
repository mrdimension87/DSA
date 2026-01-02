class Solution {
public:
    const char findTheDifference(string s, string t) {
        unordered_map<char,int>mp;
        for(auto it : s){
            mp[it]++;
        }
        unordered_map<char,int> mp1;
        for(auto it : t){
            mp1[it]++;
        }
        for(auto it: t){
            if(mp[it]!=mp1[it]){
                return it;
            }
        }
        char x;
        return x;
    }
};