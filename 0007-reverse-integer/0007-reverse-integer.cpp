class Solution {
public:
    int reverse(int x) {
        long num = 0; // use long to detect overflow
        while (x != 0) {
            int digit = x % 10;
            num = num * 10 + digit;
            x /= 10;
        }
        if (num < INT_MIN || num > INT_MAX) return 0; // overflow check
        return (int)num;
    }
};
