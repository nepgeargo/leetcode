import kotlin.math.sign

class Solution {
    fun reverse(x: Int): Int {
        var xTmp = x
        var y: Long = 0
        val flag = x.sign

        while (xTmp != 0) {
            y = (y * 10) + (xTmp % 10)
            if (y * flag > Int.MAX_VALUE || y * flag < Int.MIN_VALUE) 
                return 0;
            xTmp /= 10
        }
        
        return y.toInt()
    }
}
