class Solution {
public:
   bool isPalindrome(int x) {
    if (x < 0) return false;
    long reverse=0;
    int number=x;
    while (number!=0) {
        reverse= reverse*10 + number%10;
        number/=10;
    }
    return (reverse == x);
}
};
