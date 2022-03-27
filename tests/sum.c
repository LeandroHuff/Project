#include "sum.h"

int sum( const int vect[] , int num )
{
  int sum = 0;
  
  for (int i = 0; i < num; i++)
  {
    sum += vect[i];
  }
  
  return sum;
}

