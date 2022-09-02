// Given an integer num, return the number of steps to reduce it to zero.

int numberOfSteps(int num) {
    int count = 0;
    while (num != 0) {
        if (num % 2 == 0) {
            num /= 2;
            count++;
        } 
        else {
            num--;
            count++;
        }
    }
    return count;
}

int numberOfStepsRecursive(int num) {
    if (num == 0) return 0;
    else {
        if (num % 2 == 0) {
            return numberOfStepsRecursive(num/2) + 1;
        } 
        else {
            return numberOfStepsRecursive(num-1) + 1;
        }
    }
}