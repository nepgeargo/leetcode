class Solution {
    fun isPerfectSquare(num: Int): Boolean {
        if (num < 1) return false
        if (num == 1) return true
        for (i in 1..num) {
            if (i * i == num) return true
            if (i * i > num) return false
        }
        return false
    }
}