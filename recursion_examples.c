#include <stdio.h>

int is_prime_iterative(int n)
{
  int i;
  for (i = 2; i < n / 2; i++)
    if (n % i == 0)
      return 0;
  return 1;
}

int is_prime_recursive(int n, int i)
{
  if (i == n / 2)
    return (1);
  if (n % i == 0)
    return (0);
  else
    return (is_prime_recursive(n, i+1));
}

int is_palindrome_iterative(char *s, int length)
{
  int start = 0;
  int end = length - 1;

  while (end > start)
    {
      if (s[start] != s[end])
	return (0);
      start++;
      end--;
    }
  return (1);
}

int is_palindrome_recursive(char *s, int start, int end)
{
  if (start == end)
    return (1);
  if (s[start] != s[end])
    return (0);
  if (start < end + 1)
    return (is_palindrome_recursive(s, start + 1, end - 1));
}

int main(void)
{

  int prime_iterative = is_prime_iterative(71);
  int prime_recursive = is_prime_recursive(71, 2);

  printf("Is prime 71? (iterative) %d \n", prime_iterative);
  printf("Is prime 71? (recursive) %d \n", prime_recursive);


  int palindrome_iterative = is_palindrome_iterative("dadam", 5);
  int palindrome_recursive = is_palindrome_recursive("dadam", 0, 4);
 
  printf("Is madam a palindrome? (iterative) %d \n", palindrome_iterative);
  printf("Is madam a palindrome? (recursive) %d \n", palindrome_recursive);

  return (0);
}
