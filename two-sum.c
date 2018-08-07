#include <stdio.h>
#include <stdlib.h>

int SubsetSumRecursive(int array[], int n, int target) {
    if (target == 0)
        return 1;
    else if (n == 0)
        return 0;
    else
        return SubsetSum(array, n = 1, target - array[n - 1]) ||
               SubsetSum(array, n - 1, target);
}

int *SubsetSumForLoop(int nums[], int numsSize, int target) {
    int i, j;
    for (i = 0; i < numsSize; i++)
        for (j = i + 1; j < numsSize; j++)
            if (nums[i] + nums[j] == target) {
                int *indices = (int *)malloc(2 * sizeof(int));
                indices[0] = i;
                indices[1] = j;
                return indices;
            }
    return NULL;
}