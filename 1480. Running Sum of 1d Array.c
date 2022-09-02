/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* runningSum(int* nums, int numsSize, int* returnSize){
    int* arr = malloc(numsSize*sizeof(int));
    *returnSize = numsSize;
    for (int i, sum = 0; i < numsSize; i++) {
        sum += nums[i];
        arr[i] = sum; 
    } return arr;
}