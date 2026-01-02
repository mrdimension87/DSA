class Solution {
public:
    bool isPowerOfThree(int n) {
        int t=0;
        while(true){
            if(pow(3,t)>n){
                break;
            }
            if(pow(3,t)==n){
                return true;
            }
            t++;
            
        }
        return false;
    }
};