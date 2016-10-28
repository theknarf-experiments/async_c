#include "async.h"
#include <stdio.h>

#define true 1

void async_method()
{
    static int i = -1;
    ASYNC_BEGIN
       do
       {
          ++i;
          printf("Count i: %d\n", i);
          if(i % 2)
          {
              YIELD
          }
       } while( i < 10);
       YIELD
       printf("After for loop");
    ASYNC_END
}

int main()
{
   while(true)
   {
      printf("Calling async method\n");
      async_method();
      getc(stdin);
   }
}
