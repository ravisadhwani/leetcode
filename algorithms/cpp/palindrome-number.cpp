class Solution {
public:
    bool isPalindrome(long n) {
        long rev_n = reverseDigits(n);
        if (rev_n == n)
            return true;
        else
            return false;
    }
    long reverseDigits(int num)
{
    long rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
};