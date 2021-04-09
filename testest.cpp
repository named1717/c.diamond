﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_diamond(unsigned n) {
        for (int i = 0;i < n;i++) {
            for (int j = n - 1;j > i;j--) {
                printf(" ");
            }

            for (int j = 0;j < 2 * i + 1;j++) {
                printf("*");
            }
            printf("\n");
        }

        for (int i = 1;i < n;i++) {
            for (int j = 0;j < i;j++) {
                printf(" ");
            }

            for (int j = 2 * n - 1;j > 2 * i;j--) {
                printf("*");
            }
            printf("\n");
        }
    }


int main() {
    unsigned n;
    scanf("%d", &n);
    print_diamond(n);
}