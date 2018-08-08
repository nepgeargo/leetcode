class Solution {
    fun twoSum(nums: IntArray, target: Int): IntArray {
        val results = IntArray(2)
        val len = nums.lastIndex + 1
        var j: Int

        var i: Int = 0
        while (i < len) {
            j = i + 1
            while (j < len) {
                if (nums[i] + nums[j] == target) {
                    results[0] = i
                    results[1] = j
                }
                j++
            }
            i++
        }

        return results
    }
}