#include <stdio.h>

/*
 * SELECTION SORT
 * 1. Find min
 * 2. Swap min with current element
 *
 */
int min_array(int* array, int size)
{
  int i, min_index;
  int min = array[0];
  for (i=1; i<size; i++)
      if (array[i] < min)
	min_index = i;
  return min_index;
}

int main(void)
{
  int array[] = {3, 1, -2, 7, 3, 8, 1, 5};
  
  int min = min_array(array, 4);
  printf("Min = %d \n", min);

  return (0);
}
