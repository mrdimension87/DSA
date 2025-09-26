class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>mpp;
        for(char c : ransomNote){
            mpp[c]++;
        }
        map<char,int>mpp2;
        for(char c : magazine){
            mpp2[c]++;
        }
        for(char c : ransomNote){
            if(mpp[c]>mpp2[c]){
                return false;
            }
            
        }
        return true;
    }
};