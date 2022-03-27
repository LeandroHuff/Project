#include "sum.h"

int main( void ) 
{
  int int_vector[] = { 1, 2, 3, 4, 5 };

  if ( sum( int_vector, SIZE_INT_VECTOR(int_vector) ) == 15 )
  {
    return 0;
  } 
  else 
  {
    return 1;
  }
  
  return 1;
}

