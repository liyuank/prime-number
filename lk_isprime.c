/*
**  Created by L. K.
**  Nov. 15, 2017
**
**  check whether the number is a prime number or not.
**  The input number is greater than 0.
*/
#include <stdio.h>

int   lk_isprime(int nb)
{
  if (nb == 1)
    return (0);
  if (nb == 2)
    return (1);
  if (nb == 3)
    return (1);
  if (nb % 2 == 0)
  {
    return (0);
  }
  else if (nb % 3 ==  0)
  {
    return (0);
  }
  else 
  {
    int i;
    
    i = 5;
    while (i < nb/2)
    {
      if (nb % i == 0)
        return (0);
      else
        i += 2;
    }
    return (1);
  }  
}

int   main(void)
{
  int nb = 1;
  int nb2 = 2;
  int nb3 = 3;
  int nb4 = 23;
  int nb5 = 99;
  
  printf("%d is prime? 0's not and 1's yes! : %d", nb, lk_isprime(nb));
  printf("%d is prime? 0's not and 1's yes! : %d", nb2, lk_isprime(nb2));
  printf("%d is prime? 0's not and 1's yes! : %d", nb3, lk_isprime(nb3));
  printf("%d is prime? 0's not and 1's yes! : %d", nb4, lk_isprime(nb4));
  printf("%d is prime? 0's not and 1's yes! : %d", nb5, lk_isprime(nb5));
  
  return (0);
  }
