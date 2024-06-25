#include <stdio.h>
#define N 9

void init_array(int size, int array[size]);

void print_array(int size, int array[size]);

void reverse_array(int size, int array[size]);

int main(void) {
  int array[N];
  
  init_array(N, array);
  reverse_array(N, array);

  printf("Reverse array: ");
  print_array(N, array);
  printf("\n");

  return 0;
}

void init_array(int size, int array[size]) {
  for (int i = 0; i < size; i++) {
    array[i] = i + 1;
  }   
}

void print_array(int size, int array[size]) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
}

void reverse_array(int size, int array[size]) {
  int t;

  for (int i = 0; i < size / 2; i++) {
    t = array[i];
    array[i] = array[size - i - 1];
    array[size - i - 1] = t;  
  }
}
