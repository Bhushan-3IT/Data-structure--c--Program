//1) Simple selection sort

#include <stdio.h>

int main() {
int n;
    scanf("%d",&n);
   int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
}
   for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf(" Sorted array :");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
OUTPUT:  6
         23 11 5 78 2 99
         Sorted array :2 5 11 23 78 99
  
  

//2)Advanced Selection sort 

  #include<stdio.h>
int main() {
    int n,min;
    scanf("%d",&n);
   int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
for(int i=0;i<n;i++){
    min=i;
    for(int j=i+1;j<n;j++){
        if(arr[min]>arr[j]){
            min=j;
        }
    }
    int temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
}
for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
}
return 0;
}
OUTPUT:
6
23 2 3 64 8 11
2  3  8  11  23  64
  


 // 3)Bubble sort

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
   int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}

     for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }

    return 0;
}

OUTPUT:
5
5 3 2 7 4
2  3  4  5  7

  

//  4)simple insertion sort

  #include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
 for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
     for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            if (arr[j] < arr[j - 1]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            } else {
                break; }
        }
    }
    printf("Sorted array:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
OUTPUT:
5
21 45 4 2 11
Sorted array:2 4 11 21 45

 
  
  //5)advanced insertion sort

  #include <stdio.h>
int main() {
    int n;
   scanf("%d",&n);
   int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);}
        
    for(int i = 1; i < n; i++) {
        int key = arr[i];       
        int j = i - 1;
       while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; 
            j--;
        }
        arr[j + 1] = key; 
    }
 printf("Sorted array:");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
Output:
6
12 4 6 8 11 2
Sorted array:2 4 6 8 11 12





    

