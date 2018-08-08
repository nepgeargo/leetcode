class Solution {
    fun lengthOfLastWord(s: String): Int {
        var i = s.length - 1
        while ((i >= 0) && (s.get(i) == ' '))
            i--

        var count = 0
        while ((i >= 0) && (s.get(i--) != ' ')) 
            count++

        return count
    }
}