class Solution {
    public double myPow(double x, int n) {
        if (n==0 ){           //BASE CASE
            return 1;
        }
        if (n == Integer.MIN_VALUE) {  
            x = x * x;
            n = n / 2;
        }

        // Handle negative powers
        if (n < 0) {
            x = 1 / x;
            n = -n;
        }
        
     double pow = myPow(x,n/2);
        if(n%2==0){
            return pow*pow;
        }else {
            return pow * pow * x;
    }
    }
}