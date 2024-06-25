#include <stdio.h>

#define N 5

enum Direction { LEFT, RIGHT, DOWN, UP };

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
  int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
  enum Direction direction = RIGHT;

  while (top <= bottom && left <= right) {
    if (direction == RIGHT) {
      for (int i = left; i <= right; i++) {
        matrix[top][i] = value;
        value++;
      }
      top++;
      direction = DOWN;
    } else if (direction == LEFT) {
      for (int i = right; i >= left; i--) {
        matrix[bottom][i] = value;
        value++;
      }
      bottom--;
      direction = UP;
    } else if (direction == DOWN) {
      for (int i = top; i <= bottom; i++) {
        matrix[i][right] = value;
        value++;
      }
      right--;
      direction = LEFT;
    } else if (direction == UP) {
      for (int i = bottom; i >= top; i--) {
        matrix[i][left] = value;
        value++;
      }
      left++;
      direction = RIGHT;
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
