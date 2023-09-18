#include <stdio.h>

int main()
{
  int i;
  int array[] = {900, 600, 1200, 50, 300};
  int size = sizeof(array) / sizeof(array[0]);
  int min = array[0];
  int max_prof = 0;

  for (i = 0; i < size;i++)
    {
      if (array[i] < min)
	min = array[i];
      if (array[i] - min > max_prof)
	max_prof = array[i] - min;
      printf("Max prof is: %i\n Min is: %i\n", max_prof, min);
    }

}
