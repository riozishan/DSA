bool isPalindrome(int x) {
    int ld, rev = 0;
    int original = x;
    while (x > 0) {
        ld = x % 10;
        if (rev > INT_MAX / 10 || rev < INT_MIN / 10) {
            return 0;
        } 
        else {
            x = x / 10;
            rev = (rev * 10) + ld;
        }
    }
    if (original == rev) {
        return 1;
    } 
    else {
        return 0;
    }
}