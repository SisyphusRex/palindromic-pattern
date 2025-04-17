#include <stdio.h>

void PrintNumPattern(int num1, int num2) {
    printf("%d ", num1);
    if (num1 < 0) {
        return;
    }
    PrintNumPattern(num1 - num2, num2);
    printf("%d ", num1);


}

int main(void) {
   int num1;
   int num2;
   
   scanf("%d", &num1);
   scanf("%d", &num2);
   PrintNumPattern(num1, num2);
}
