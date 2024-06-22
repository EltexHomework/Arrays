#include <stdio.h>

int read_matrix_size();

void init_upper_triangular_matrix(int size, int matrix[][size]);

void print_matrix(int rows, int cols, int matrix[][cols]);

int main(void) {
  int size = read_matrix_size();
  int matrix[size][size];
  
  init_upper_triangular_matrix(size, matrix);
  printf("Upper triangular matrix: \n");
  print_matrix(size, size, matrix);
  return 0;
}

int read_matrix_size() {
  int value;

  do {
    printf("Enter size of matrix (positive value greater than zero): ");
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

void init_upper_triangular_matrix(int size, int matrix[][size]) {
  int offset = 0;

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      matrix[i][j] =(j <= size - offset - 1) ? 1 : 0;
    }
    offset++;
  }
}

void print_matrix(int rows, int cols, int matrix[][cols]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}
