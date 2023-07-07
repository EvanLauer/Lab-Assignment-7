#include <stdio.h>

int main(void)
{
  //init array and variables
  int array[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
  int arrayCount[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  int temp = 0;
  
  //sort array
  int i,j;
  for(i=0; i<9; i++)
  {
    for(j=0; j<9; j++)
    {
      if(array[j] > array[j+1])
      {
        temp = array[j+1];
        array[j+1] = array[j];
        array[j] = temp;
        arrayCount[i]++;
      }
    }

      
  }

  
  //print array
  /*printf("Sorted array: ");
  int h;
  for(h=0; h<9; h++)
  {
    printf("%d ", array[h]); 
  }*/

  //print swap counts
  int k;
  for(k=0; k<9; k++)
  {
      printf("\nIndex %d swaps: %d", k, arrayCount[k]);
  }
  

}