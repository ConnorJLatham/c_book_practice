#include <stdio.h>

int GetInt(char* phrase) {
    printf("%s", phrase);
    int num;
    scanf("%d", &num);
    return num;
}

float GetReal(char* phrase) {
    printf("%s", phrase);
    float num;
    scanf("%f", &num);
    return num;
}

struct my_string {
    char val[100];
};

int main() {
    int n1, n2, total;

    printf("This program adds 2 numbers\n");
    n1 = GetReal("First num? ");
    n2 = GetInt("Second num? ");
    total = n1 + n2;
    printf("The total is %d.\n", total);
}