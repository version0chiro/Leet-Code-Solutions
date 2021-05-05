class Solution {
public:
    int myAtoi(string str) {
        int sign=1;
        int i = 0;
        while (i + 1 < str.size() && isspace(str[i])) ++i;
        long res = 0;
        if (str[i] == '-' || str[i] == '+') sign = 44 - str[i++];
        while (i < str.size()) {
        if (isdigit(str[i])) res = 10 * res + str[i++] - '0';
        else return res * sign;
        if (res > INT_MAX) return sign == -1 ? INT_MIN : INT_MAX;
    }
        return res * sign;

    }
};