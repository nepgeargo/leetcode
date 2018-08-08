class Solution {
    public int searchInsert(int[] nums, int target) {
        if (nums[0] > target)
            return 0;
        int min = 0;

        int max = nums.length - 1;
        if (nums[max] < target)
            return max + 1;

        int mid;

        while (min < max) {
            mid = (max + min) / 2;
            if (target < nums[mid])
                max = mid - 1;
            else if (target > nums[mid])
                min = mid + 1;
            else
                return mid;
        }

        if (target > nums[max])
            return max + 1;
        return min;
    }
}
