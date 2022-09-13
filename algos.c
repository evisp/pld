#include <stdio.h>

int largest_difference_array(int* array, int size)
{
  int i, min, max;
  min = max = array[0];
  for (i=1; i<size; i++)
    {
      if (array[i] < min)
	min = array[i];
      if (array[i] > max)
	max = array[i];
    }
  return max - min;
}

int max_profit(int prices[], int n)
{
    int buy = prices[0], max_profit = 0;
    for (int i = 1; i < n; i++) {
 
        // Checking for lower buy value
        if (buy > prices[i])
            buy = prices[i];
 
        // Checking for higher profit
        else if (prices[i] - buy > max_profit)
            max_profit = prices[i] - buy;
    }
    return max_profit;
}

int remove_duplicates(int* nums, int size)
{
  int count = 0;
  if (nums == NULL)
    return (-1);

  for (int i = 0; i < size; i++) {
    if (i < size - 1 && nums[i] == nums[i + 1])
      {
	continue;
      }
    nums[count] = nums[i];
    count++;
  }
  return count;
}

void find_first_last(int arr[], int n, int x)
{
    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (x != arr[i])
            continue;
        if (first == -1)
            first = i;
        last = i;
    }
    if (first != -1)
        printf(
            "First Occurrence = %d \nLast Occurrence = %d\n",
            first, last);
    else
        printf("Not Found");
}

int main(void)
{
  /*
   * int diff = largest_difference_array(array, 8);
   * printf("Largest difference = %d \n", diff);
   *
   * int count = remove_duplicates(array, 7);
   * printf("Number of unique elements is %d \n", count);
   */

  int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
  int n = sizeof(arr) / sizeof(int);
  int x = 2;
  find_first_last(arr, n, x);

  int prices[] = { 7, 1, 5, 6, 4 };
  int size = sizeof(prices) / sizeof(prices[0]);
  int max_p = max_profit(prices, size);
  printf("Max profit is %d\n", max_p);
  
  return (0);
}
