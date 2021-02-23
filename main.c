#include <stdio.h>

int sum(int num);

int main() {
  int number;
  int result;
  printf("Enter a number: \n");
  scanf("%d", &number); // Number = input
  result = sum(number); // Result = sum() output
  printf("Sum = %d", result); //Print result from sum() function
  return 0;
}
int sum(int num) {
  if(num != 0) {
    return num + sum(num-1);
  } else {
    return num; }
}