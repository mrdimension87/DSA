class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int> ans(n,0);
        if(k==0) return ans;
        if(k>0){
            
            for(int i=0; i<n; i++){
                int sum=0;
                for(int j=i+1; j<i+1+k; j++){
                    int idx=j%n;
                    sum+=code[idx];
                }
                ans[i]=sum;
            }
            return ans;

        }else if(k<0){
            reverse(code.begin(),code.end());
            int m=abs(k);
            for(int i=0; i<n; i++){
                int sum=0;
                for(int j=i+1; j<i+1+m; j++){
                    int idx=j%n;
                    sum+=code[idx];
                }
                ans[i]=sum;
            }
            reverse(ans.begin(),ans.end());
            return ans;
        }
        return ans;
    }
};