#include <stdio.h>

int main() {
  int num = 0;
  int sum = 0;
  int t = 0;
  printf("Enter a number: \n");
  scanf("%d", &num);
  while(num > 0) {
    t = num % 10; //t = remainder after dividing by 10
    sum = sum + t; //sum (0) plus remainder after dividing by 10
    num = num/10; //divides input by 10
  }
printf("Sum: %d\n", sum);
return 0;
}

