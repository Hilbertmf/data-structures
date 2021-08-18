#include <stdio.h>
#include <stdlib.h>
// Advantages of arrays:
// Random access of elements using array index
// Easy access to all elements
// Traversal through the array becomes easy using a single loop
// Sorting becomes easy as it can be accomplished by writing less lines of code

// Disadvantages of arrays:
// Allows a fixed number of elements to be entered which is decided at the time
// of declaration. Unlike a linked list, an array in C is not dynamic
// Insertion and deletion of elements can be costly since the elements are needed
// to be managed in accordance with the new memory allocation

int main()
{
  int aux;
//  Initializing arrays:
// All elements with zero:
  int arr[5] = {0};
// first elements with values and the rest is zero:
  int arr1[5] = {1, 2, 3};
// initializing random elements and the rest is zero:
  int arr2[10] = {[0] = 1, [4] = 2, [6] = 3};

  for (int i = 0; i < 5; i++)
  {
    printf("arr[%d] = %d\n", i, arr[i]);
  }
  
  for (int i = 0; i < 5; i++)
  {
    printf("arr1[%d] = %d\n", i, arr1[i]);
  }
  
  for (int i = 0; i < 10; i++)
  {
    printf("arr2[%d] = %d\n", i, arr2[i]);
  }

  return 0;
}