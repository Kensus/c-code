#include<stdio.h>

int
main ()
{

  int num, i;

  printf ("Give a number to  check if a number is prime ");
  scanf ("%d", &num);

  for (i = 2; i < num; ++i)
    {
      if (num % 2 == 0)
	{
	  printf ("is not prime");
	}
      else
	{
	  printf ("is  prime");
	}

    }


  return 0;

}
