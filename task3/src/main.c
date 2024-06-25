#include <stdio.h>
#define N 5

void init_upper_triangular_matrix(int size, int matrix[][size]);

void print_matrix(int rows, int cols, int matrix[][cols]);

int main(void) {
  int matrix[N][N];
  
  init_upper_triangular_matrix(N, matrix);
  printf("Upper triangular matrix: \n");
  print_matrix(N, N, matrix);
  return 0;
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
