#include <stdio.h>

/*
 * 3) Циклы.
Запросить у пользователя десять чисел. Вывести на экран среднее арифметическое введённых чисел.
 */

int main ()
{
  int inputNumber = 10, i = 0, number = 0;
  float total = 0;

  printf("Введите 10 чисел:\n");

  while(i < inputNumber)
    {
      scanf("%i", &number);
      getchar();
      total += number;
     ++i;
    }
  printf ("Среднее арифметическое введенных чисел равно: %.1f\n", total / inputNumber);
  return 0;
}