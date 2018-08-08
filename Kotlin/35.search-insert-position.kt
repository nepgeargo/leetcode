class Solution {
    fun searchInsert(nums: IntArray, target: Int): Int {
        if (nums[0] > target)
            return 0
        var min = 0

        var max = nums.size - 1
        if (nums[max] < target)
            return max + 1

        var mid: Int

        while (min < max) {
            mid = (max + min) / 2
            if (target < nums[mid])
                max = mid - 1
            else if (target > nums[mid])
                min = mid + 1
            else
                return mid
        }

        if (target > nums[max])
            return max + 1
        return min
    }
}
