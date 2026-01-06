class Solution {
public:
    int climbStairs(int n) {
        map<int,int> mp;
        mp[1]=1;
        mp[2]=2;
        for(int i=3; i<=n; i++){
            mp[i]=mp[i-1]+mp[i-2];
        }
        return mp[n];

    }
};