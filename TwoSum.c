#include <stdio.h>

// Function to find two indices whose values add up to the target
void twoSum(int* nums, int numsSize, int target) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                printf("Indices: [%d, %d]\n", i, j);
                return;
            }
        }
    }
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    twoSum(nums, numsSize, target);

    return 0;
}
