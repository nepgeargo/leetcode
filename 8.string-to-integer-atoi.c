#define CH_ZERO '0'
#define CH_SPACE ' '
#define PLUS_SIGN '+'
#define MINUS_SIGN '-'
#define STR_SIZE 100

int myAtoi(char *str) {
    // Trims the string
    while (str[0] == CH_SPACE)
        str++;

    // Validates the string
    char c = str[0];
    if (!(((c == PLUS_SIGN) || (c == MINUS_SIGN)) || (c == ' ') || isdigit(c)))
        return 0;
    int isPos = 1;
    if (str[0] == MINUS_SIGN) {
        str++;
        isPos = -1;
    } else if (str[0] == PLUS_SIGN)
        str++;

    // Converts each char to int
    int i = 0;
    long num = 0;
    while (isdigit(str[i])) {
        num *= 10;
        num += str[i] - CH_ZERO;
        i++;
        if (num * isPos > INT_MAX)
            return INT_MAX;
        if (num * isPos < INT_MIN)
            return INT_MIN;
    }

    num *= isPos;
    return (int)num;
}