class Solution {
public:
    int divide(int dividend, int divisor) {
        // base case
        if(dividend == divisor) return 1;
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        if(divisor == 1) return dividend;

        bool isPos = true;

        // updating sign
        if(dividend >= 0 && divisor < 0) isPos = false;
        else if(dividend < 0 && divisor > 0) isPos = false;

        long long n = dividend;
        long long d = divisor;

        n = abs(n);
        d = abs(d);

        long long ans = 0, sum = 0;

        while(sum + d <= n){
            // increment the count
            ans++;

            // update the sum
            sum += d;
        }

        // overflowing conditions
        if(ans > INT_MAX && isPos) return INT_MAX;

        if(ans > INT_MAX && !isPos) return INT_MIN;

        return isPos ? ans : -1 * ans;
    }
};