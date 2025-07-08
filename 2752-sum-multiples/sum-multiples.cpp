class Solution {
public:
    int sumOfMultiples(int n) {
        int sum3 =0;
        int sum5 =0;
        int sum7 =0;
        int sum15 =0;
        int sum21 =0;
        int sum35 =0;
        int sum105 =0;
        int i = 1;
        while(3*i <= n){
            sum3 += 3*i;
            i++;
        }
        int j = 1;
        while(5*j <= n){
            sum5 += 5*j;
            j++;
        }
        int k = 1;
        while(7*k <= n){
            sum7 += 7*k;
            k++;
        }
        int l = 1;
        while(15*l <= n){
            sum15 += 15*l;
            l++;
        }
        int m = 1;
        while(21*m <= n){
            sum21 += 21*m;
            m++;
        }
        int o = 1;
        while(35*o <= n){   
            sum35 += 35*o;
            o++;
        }
        int p = 1;
        while(105*p <= n){  
            sum105 += 105*p;
            p++;
        }
        return sum3 + sum5 + sum7 - sum15 - sum21 - sum35 + sum105;
    }
};