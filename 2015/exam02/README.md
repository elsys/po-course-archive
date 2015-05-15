# Условия на задачите от второто контролно
## Вариант 1
### Задача 1
Да се дефинира функция на C, която приема указател към масив от числа с плаваща запетая, големина на масива и число n, като записва на всички места където числото от масива е равно на n сумата на масива преди той да бъде променен. Прототип на функцията:

```c++
void replace_with_sum(float *arr, int length, float n);
```

Демонстрирайте коректността на тази функция в main.

### Задача 2
Даден е следният код:

```c++

#include <stdio.h>
#include <time.h>

#define CASTLE_SIZE 9

void initialize_castle_grounds(int castle_grounds[CASTLE_SIZE][CASTLE_SIZE])
{...}

void print_castle_grounds(int castle_grounds[CASTLE_SIZE][CASTLE_SIZE])
{
  int i;
  for (i = 1; i < CASTLE_SIZE; i++)
  {
    int j;
    for (j = 1; j < CASTLE_SIZE; j++)
    {
      printf(castle_grounds[i][j]);
    }
    printf("\n");
  }
}

int main() {

  int castle_grounds[CASTLE_SIZE];
  srand(time(NULL));

  initialize_castle_grounds(*castle_grounds);
  print_castle_grounds(*castle_grounds);
}
```

Намерете и обяснете грешките в него.

### Задача 3
Пресметнете и запишете в шестнадесетичен вид стойността на израза:

```c++
(0xABABAB | 0xBEFE) ^ 0xBABABA ==
```

## Вариант 2
### Задача 1
Да се дефинира функция на C, която приема указател към масив от числа с плаваща запетая, големина на масива и естествено число n и повдига на степен n всички елементи на масива. Прототип на функцията:

```c++
void raise_to_pow(float *arr, int length, int n);
```

Демонстрирайте коректността на тази функция в main.

### Задача 2
Даден е следният код:

```c++

#include <stdio.h>
#include <time.h>

#define CASTLE_SIZE 9

void initialize_castle_grounds(int castle_grounds[CASTLE_SIZE][CASTLE_SIZE])
{
  int i = 0;
  for (; i < CASTLE_SIZE; ++i)
  {
    for (j = 0; j < CASTLE_SIZE; ++j);
    {
      castle_grounds[i][j] = rand() % 10;
    }
  }

  castle_grounds[CASTLE_SIZE % 2][CASTLE_SIZE % 2 ] = 20;
}

void print_castle_grounds(int castle_grounds[CASTLE_SIZE][CASTLE_SIZE])
{...}

int main() {

  int castle_grounds[CASTLE_SIZE];
  srand(time(NULL));

  initialize_castle_grounds(*castle_grounds);
  print_castle_grounds(*castle_grounds);
}
```

Намерете и обяснете грешките в него.

### Задача 3
Пресметнете и запишете в шестнадесетичен вид стойността на израза

```c++
(0x424242 | 0xBEEF) ^ 0xABABAB ==
```
