#include <stdio.h>
#include <ctype.h>

int computeInFix() {
    int c = getchar();

    if (isdigit(c)) {
        return c - '0';
    }
    if (c == '+') {
        int EL = computeInFix();
        int ER = computeInFix();
        return EL + ER;
    }
    if (c == '-') {
        int EL = computeInFix();
        int ER = computeInFix();
        return EL - ER;
    }
    if (c == '*') {
        int EL = computeInFix();
        int ER = computeInFix();
        return EL * ER;
    }
    if(c == '/') {
        int EL = computeInFix();
        int ER = computeInFix();
        return EL / ER;
    }
}

int main() {
    int n = computeInFix();
    printf("%d", n);

    return 0;
}