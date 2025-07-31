1)Searching element in an array.
    
 #include <stdio.h>

int main() {
    int n,search, found = 0;

   
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
         scanf("%d", &arr[i]);
    }
    printf("Enter the  search element: ");
    scanf("%d", &search);

    for(int i = 0; i < n; i++) {
        if(arr[i] == search) {
            printf("Element %d is found \n", search);
            found = 1;
            break;
        }
    }

    if(found==0) {
        printf("Element %d not found \n", search);
    }
  return 0;
}

OUTPUT:

Enter the size of the array: 5
Enter 5 elements:
1
2
3
4
5
Enter the  search element: 3
Element 3 is found


2)Find out even elements in this array.

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
  printf("Even numbers in the array are:\n");
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            printf(" %d ", arr[i]);
        }
    }
  return 0;
}

OUTPUT:
Enter the number of elements: 5
Enter 5 numbers:
2
88
56
23
11
Even numbers in the array are:
2  88  56


    
3)deletion of an element in the array

#include<stdio.h>
int main() {
    int n, pos;
  printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
}
    printf("Enter position to delete at position: ");
    scanf("%d", &pos);
  if(pos < 1 || pos > n) {
        printf("Invalid position!");
        return 1;
    }
  for(int i = pos - 1; i < n - 1; i++){
        arr[i] = arr[i + 1];
}
  n--; 
   printf("Array after deletion:");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
OUTPUT:

Enter number of elements: 3
Enter 3 elements:
4
5
6
Enter position to delete at position:2 
Array after deletion: 4  6

    


4)insertion of an element in the array.
    
#include <stdio.h>

int main() {
    int n, newelement, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

        int arr[n]; 
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
}
  printf("Enter position to insert: ");
    scanf("%d", &pos);
   if(pos < 1 || pos > n + 1) {
        printf("Invalid position!");
        return 1;
    }

    printf("Enter new element: ");
    scanf("%d", &newelement);
  for(int i = n; i >= pos; i--){
        arr[i] = arr[i - 1];
}
    arr[pos - 1] = newelement;
    n++; 

    printf("Array after insertion at position %d:\n", pos);
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
}
    return 0;
}
OUTPUT:
Enter number of elements: 5
Enter 5 elements:
2 5 9 23 55
Enter position to insert: 1
Enter new element: 56
Array after insertion at position 1:
56 2 5 9 23 55 
