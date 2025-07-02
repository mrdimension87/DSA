class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=prices[0], pf=0;
        for(int i=1; i< prices.size(); i++){
            int cs= prices[i]-mn;
            pf=max(pf, cs);
            mn=min(mn,prices[i]);
        }
        return pf;
    }
};