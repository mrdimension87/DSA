class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1)return true;
        if(n%3!=0)return false;
        if(n==0)return false;
        while(true){
            int rem = n%3;
            if(n%3!=0){
                return false;
            }
            n=n/3;
            if(n==1 && rem==0){
                return true;
            }

            if(n==0){
                return false;
            }
        }

    }
};