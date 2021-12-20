#include <stdio.h>

int main()
{
  int i = 34; //--> address - 6422220

  int *j = &i; //--> *j contain the address of i (6422220) also contain the value of i (34). And *j also have an address (6422216) .

  printf("1. The value of i is %d \n\n", i);

  printf("2. The value of i using *j is %d \n\n", *j);

  printf("3. The address of i is %u \n\n", &i);

  printf("4. The address of i is %u \n\n", j);

  printf("5. The address of j is %u \n\n", &j);

  printf("6. Also the value of j is %d \n\n", *(&j));

  return 0;
}