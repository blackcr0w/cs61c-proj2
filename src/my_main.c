#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int translate_num(long int* output, const char* str, long int lower_bound, 
    long int upper_bound) {
    if (!str || !output) {
        return -1;
    }
    /* YOUR CODE HERE */
    int base = 10;
    const char *hex = "0x";

    if (strstr(str, hex))
      base = 16;
    long int ret;
    ret = strtol(str, NULL, base);
    printf("subroutine1: %ld\n", ret);

    if (ret < lower_bound || ret > upper_bound)
      return -1;

    *output = ret;
    printf("soubroutine2: %ld\n", *output);
    return 0;
}

int main() {
    long int a = 1L;
    long int *output = &a;
    const char *str = "0x123";
    long int lb = 0L;
    long int ub = 99999L;

    translate_num(output, str, lb, ub);
    printf("in main: %ld\n", *output);


    return 0;
}