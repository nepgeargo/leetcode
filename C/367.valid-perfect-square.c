bool isPerfectSquare(int num) {
    if (num < 1)
        return false;
    if (num == 1)
        return true;
    int i;
    for (i = 1; i < num; i++) {
        if (i * i == num)
            return true;
        if (i * i > num)
            return false;
    }
    return false;
}