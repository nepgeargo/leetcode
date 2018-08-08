int lengthOfLastWord(char *s) {
    int len = 0;
    while (s[len])
        len++;

    int i = len - 1;
    while ((i >= 0) && (s[i] == ' '))
        i--;

    int count = 0;
    while ((i >= 0) && (s[i--] != ' '))
        count++;

    return count;
}
