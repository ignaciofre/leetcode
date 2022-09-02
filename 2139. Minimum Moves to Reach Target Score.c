/*
You are playing a game with integers. You start with the integer 1 and you want to reach the integer target. In one move, you can either increment or double the current integer. You can use the increment operation any number of times, however, you can only use the double operation at most maxDoubles times. Given the two integers target and maxDoubles, return the minimum number of moves needed to reach target starting with 1.
*/

int minMoves(int target, int maxDoubles) {
    if (target == 1 || target < 1) return 0;
    else {
        if ((maxDoubles > 0) && (target % 2 == 0)) {
            return 1 + minMoves(target/2, maxDoubles-1);
        }
        else {
            return 1 + minMoves(target-1, maxDoubles);
        }
    }
}