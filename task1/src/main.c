#include <stdio.h>

#define N 5

void init_matrix(int rows, int cols, int matrix[][cols]);

void print_matrix(int rows, int cols, int matrix[][cols]);

int main(void) {
  int matrix[N][N];
  
  init_matrix(N, N, matrix);

  printf("Matrix: \n");
  print_matrix(N, N, matrix); 

  return 0;
}

void init_matrix(int rows, int cols, int matrix[][cols]) {
  int value = 1;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      matrix[i][j] = value;
      value++;
    }
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
