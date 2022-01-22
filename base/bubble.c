//bubble.c
//famous bubble sort
//implement the swap algorithm with pointers

#include <stdio.h>
#define MAX 9

//define our array which will be used for the bubble sort
int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

//function prototypes
/*create a prototype function which
 * will print the values of the array
 * each time two numbers are rearranged
*/
void printValues(){
  int i;
    //print a bracket outside the for loop
    printf("[");
    //print the numbers all on one line
    for (i = 0; i < MAX; i++){
      printf("%d ", *(values + i));
    }//end for loop
    //print a bracket and new line outside the for loop
    //keeps the entire visuals looking organized
    printf("] \n");
}//end function

//create a prototype function to sort two numbers in an array
//incorporates the swap function
void sort(){
  int i, j;
  for (i = 0; i < MAX; i++)
    for (j = 0; j < (MAX - 1); j++)
      if (values[j + 1] < values[j])
        swap (&values[j], &values[j + 1]);
}

void swap(int *iPtr, int *jPtr){
    
  int n = *iPtr;
  *iPtr = *jPtr;
  *jPtr = n;
  printValues();
} 

int main(){
  printf("Before: \n");
  printValues();
  sort();
  printf("After: \n");
  printValues();

  return(0);
} // end main
