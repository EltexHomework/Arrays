#include <stdio.h>

int read_array_size();

void init_array(int size, int array[size]);

void print_array_reverse(int size, int array[size]);

int main(void) {
  int size = read_array_size();
  int array[size];
  
  init_array(size, array);
  
  printf("Reverse array: ");
  print_array_reverse(size, array);
  printf("\n");

  return 0;
}

int read_array_size() {
  int value;

  do {
    printf("Enter size of array (positive value greater than zero): ");
    if (scanf("%d", &value) == 0) {
      printf("Error while reading value\n");
      return -1;
    }

    if (value <= 0) {
      printf("Wrong number\n");
    }
  } while (value <= 0);

  return value;
}

void init_array(int size, int array[size]) {
  for (int i = 0; i < size; i++) {
    array[i] = i + 1;
  }   
}

void print_array_reverse(int size, int array[size]) {
  for (int i = size - 1; i >= 0; i--) {
    printf("%d ", array[i]);
  }
}
