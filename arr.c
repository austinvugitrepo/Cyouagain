#include <stdio.h>
#include <stdlib.h>

int main(){
int number_size; // used for displaying number and malloc
int *this_big;
printf("How big is array: ");
scanf("%d", &number_size); //input into address
printf("your array is %d big\n", number_size);

this_big = (int *) malloc(number_size * sizeof(int)); //malloc into pointer
printf("please type the numbers for your array:\n");
for (int i =0; i < number_size; i++ ){
    scanf("%d", &this_big[i]);
  }
for (int i = 0; i < number_size; i++){
   printf("%d ", this_big[i]);
  }
 printf("\n");
  free(this_big);

  return 0;
}
