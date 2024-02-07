#include <stdio.h>

int main(void) {
  int array[] = {19, -8, 9, 7, 25, -7, 0, 3, 11, -15, 6};
  int i = 0;
  int j = 0;
  int arraysize = (sizeof(array) / sizeof(array[0]));
  int x = 0;

  for (i = 0; i < (arraysize - 1); ++i)
    {
    for (j = 0; j < (arraysize - 1); ++j)
      {
      if ((array[j]) > (array[j + 1]))
        {
        int a = array[j];
        array[j] = array[j + 1];
        array[j + 1] = a;
        //printf("%d",array[i]);
        //printf("%d",array[i + 1]);
        }
      else
        {
        //printf("%d",array[i]);
        }
      int x = 0;
      }
    for(x=0; x<arraysize; x++)  
    {  
      printf("%d  ", array[x]);  
    } 
    printf("\n");
    }
  

  for(x=0; x<arraysize; x++)  
    {  
      printf("%d  ", array[x]);  
    } 
    printf("\n");
  
  return 0;
}
