#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *To_Words(long long n);

int main(void) {
    long long number = 0;
    printf("Enter a number to convert it in words\n");
    scanf("%lld", &number);
    if (number >= 0) {
        printf("%lld in words - %s",number, To_Words(number));
    } else {
        printf("Value out of range.");
    }
    return 0;
}

char * To_Words(long long n) {
    char *ones[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven",
                    "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
                    "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    char *tens[] = {"Twenty", "Thirty", "Fourty", "Fifty", "Sixty", "Seventy", "Eighty",
                    "Ninety"};
    char *word = malloc(300);
    if (n <= 19) {
        strcat(word, ones[n]);
        return word;
    } else if (n <= 99) {
        int x = n / 10;
        int y = n % 10;
        if (n % 10 == 0) {
            strcat(word, tens[x - 2]);
            return word;
        } else {
            strcat(word, tens[x - 2]);
            strcat(word, " ");
            strcat(word, ones[y]);
            return word;
        }
    } else if (n <= 999) {
        int x = n / 100;
        int y = n % 100;
        if (n % 100 == 0) {
            word = strcat(word, ones[x]);
            word = strcat(word, " Hundred ");
            return word;
        } else {
            strcat(word, ones[x]);
            strcat(word, " Hundred ");
            strcat(word, To_Words(y));
            return word;
        }
    } else if (n <= 99999) {
        int x = n / 1000;
        int y = n % 1000;
        if (n % 1000 == 0) {
            strcat(word, To_Words(x));
            strcat(word, " Thousand ");
            return word;
        } else {
            strcat(word, To_Words(x));
            strcat(word, " Thousand ");
            strcat(word, To_Words(y));
            return word;
        }
    } else if (n <= 9999999) {
        int x = n / 100000;
        int y = n % 100000;
        if (n % 100000 == 0) {
            strcat(word, To_Words(x));
            strcat(word, " Lakh ");
            return word;
        } else {
            strcat(word, To_Words(x));
            strcat(word, " Lakh ");
            strcat(word, To_Words(y));
            return word;
        }
    } else {
        int x = n / 10000000;
        int y = n % 10000000;
        if (n % 10000000 == 0) {
            strcat(word, To_Words(x));
            strcat(word, " Crore ");
            return word;
        } else {
            strcat(word, To_Words(x));
            strcat(word, " Crore ");
            strcat(word, To_Words(y));
            return word;
        }
    }
}
