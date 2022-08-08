#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
/* Function that accepts an array of 32-bit unassigned integers and array size as input*/
void reverseArray(uint32_t src[], int32_t size) {
  // C99 error, need to declare i outside loop
  int32_t i;
  //for loop to change through the array
  for (i = 0; i < size / 2; ++i) {
      src[i] = src[i] + src[size - i - 1];
      src[size - i - 1] = src[i] - src[size - i - 1];
      src[i] = src[i] - src[size - i - 1];
     } 
}
