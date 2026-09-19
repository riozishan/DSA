class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int count = 0;
        if (maxDoubles == 0) {
            return (target - 1);
        }
        while (target != 1) {
            if ((target % 2 == 0) && (maxDoubles != 0)) {
                maxDoubles--;
                target = target / 2;
                count++;
                if (maxDoubles == 0) {
                    count += target - 1;
                    break;
                }
            } else {
                target--;
                count++;
            }
        }
        return count;
    }
};