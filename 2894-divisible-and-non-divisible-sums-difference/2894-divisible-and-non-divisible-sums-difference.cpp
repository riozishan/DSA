class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sumnd = 0;
        int sumd = 0;
        for (int i = 1; i <= n; i++) {
            if (i % m == 0) {
                sumd = sumd + i;
            } else {
                sumnd = sumnd + i;
            }
        }
        return (sumnd - sumd);
    }
};