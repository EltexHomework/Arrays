# Задание №2 - Массивы 
## Сборщик проекта
В качестве сборщика проекта используется Makefile. Для компиляции проекта необходимо ввести следующую команду в корне проекта:
``` bash
make
```

Для очистки бинарных файлов можно воспользоваться командой:
``` bash
make clean
```

## Задание
1. Вывести квадратную матрицу по заданному N.
Пример N = 3:
```
1 2 3
4 5 6
7 8 9
```
2. Вывести заданный массив размером N в обратном порядке.
Пример:
```
Ввод -> 1 2 3 4 5
Вывод -> 5 4 3 2 1
```
3. Заполнить верхний треугольник матрицы 1, а нижний 0. 
Пример:
```
1 1 1
1 1 0
1 0 0
```
4. Заполнить матрицу числами от 1 до N^2 в виде спирали.
Пример:
```
1 2 3
8 9 4
7 6 5
```
## Результаты тестирования программы
### Задание №1
Пример правильного ввода:
```
Enter size of matrix (positive value greater than zero): 5
Matrix: 
1 2 3 4 5 
6 7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 
21 22 23 24 25 
```

Пример неправильного ввода:
```
Enter size of matrix (positive value greater than zero): -2
Wrong number
```
### Задание №2
Пример правильного ввода:
```
Enter size of array (positive value greater than zero): 5
Reverse array: 5 4 3 2 1
```

Пример неправильного ввода:
```
Enter size of array (positive value greater than zero): -1
Wrong number
```
### Задание №3
Пример правильного ввода:
```
Enter size of matrix (positive value greater than zero): 5
Upper triangular matrix: 
1 1 1 1 1 
1 1 1 1 0 
1 1 1 0 0 
1 1 0 0 0 
1 0 0 0 0 
```

Пример неправильного ввода:
```
Enter size of matrix (positive value greater than zero): -1
Wrong number
```
### Задание №4
Пример правильного ввода:
```
Enter size of matrix (positive value greater than zero): 5
Matrix: 
1 2 3 4 5 
16 17 18 19 6 
15 24 25 20 7 
14 23 22 21 8 
13 12 11 10 9 
```

Пример неправильного ввода:
```
Enter size of matrix (positive value greater than zero): 0
Wrong number
```
## Демонстрация работы программ

