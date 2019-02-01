#include <stdio.h>
#include <assert.h>


char* My_Strcpy(char* dest,const char* src)
{
  assert(dest);
  assert(src);
  while(*dest++ = *src++)
  {
    ;
  }
}
int main()
{
  char arr[10]={'0'};
  My_Strcpy(arr,"mystrcpy");
  printf("%s\n",arr);
  return 0;
}
