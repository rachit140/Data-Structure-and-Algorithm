int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;

    // Pointer for last unique element
    int i = 0;

    // Traverse array
    for (int j = 1; j < numsSize; j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}