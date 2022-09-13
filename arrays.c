#include <stdio.h>

int sum_array(int *array, int size)
{
  int i, sum = 0;
  for (i = 0; i < size; i++)
    sum = sum + array[i];
  return (sum);
}

int min_array(int *array, int size)
{
  int i, min = array[0];
  for (i=0; i<size; i++)
    if (array[i] < min)
      min = array[i];
  return min;
}

int max_array(int *array, int size)
{
  int i, max = array[0];
  for (i=0; i<size; i++)
    if (array[i] > max)
      max = array[i];
  return max;
}

int count_larger_than(int *array, int size, int element)
{
  int i, count = 0;
  for (i=0; i<size; i++)
    if (array[i] > element)
      count++;

  return count;
}

int is_found(int *array, int size, int element)
{
  int i, found = -1;
  
  for (i = 0; i < size; i++)
    if (array[i] == element)
      found = i;
  return (found);
}


int main(void)
{
  int array[4] = {1, 2, 3, 4};
  
  int sum = sum_array(array, 4);
  printf("Sum is %d \n", sum);

  int min = min_array(array, 4);
  printf("Min is %d \n", min);
  
  return (0);
}
