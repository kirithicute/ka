#include <stdio.h>

int main() {
   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int sum, loop;
   float avg;

   sum = avg = 0;
   
   for(loop = 0; loop < 10; loop++) {
      sum = sum + arr[loop];
   }
   
   avg = (float)sum / loop;
   
   printf("Average of array values is %.2f", avg);   
   
   return 0;
}
