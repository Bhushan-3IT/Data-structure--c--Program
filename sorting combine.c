#include <stdio.h>

int main() {
    int n, choice;

    printf("Enter your choice (1-Selection, 2-Advanced Selection, 3-Bubble, 4-Insertion, 5-Advanced Insertion): ");
    scanf("%d", &choice);

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    switch(choice) {
        case 1:
            for(int i = 0; i < n - 1; i++) {
                for(int j = i + 1; j < n; j++) {
                    if(arr[j] < arr[i]) {
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
            printf("Sorted array: ");
            break;

        case 2:
            for(int i = 0; i < n; i++) {
                int min = i;
                for(int j = i + 1; j < n; j++) {
                    if(arr[min] > arr[j]) {
                        min = j;
                    }
                }
                int temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            }
            printf("Sorted array: ");
            break;

        case 3:
            for(int i = 0; i < n - 1; i++) {
                for(int j = 0; j < n - i - 1; j++) {
                    if(arr[j] > arr[j + 1]) {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            printf("Sorted array: ");
            break;

        case 4:
            for(int i = 1; i < n; i++) {
                for(int j = i; j > 0; j--) {
                    if(arr[j] < arr[j - 1]) {
                        int temp = arr[j];
                        arr[j] = arr[j - 1];
                        arr[j - 1] = temp;
                    } else {
                        break;
                    }
                }
            }
            printf("Sorted array: ");
            break;

        case 5:
            for(int i = 1; i < n; i++) {
                int key = arr[i];
                int j = i - 1;
                while(j >= 0 && arr[j] > key) {
                    arr[j + 1] = arr[j];
                    j--;
                }
                arr[j + 1] = key;
            }
            printf("Sorted array: ");
            break;

        default:
            printf("Invalid choice");
            return 0;
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
