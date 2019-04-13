#include<stdio.h>
#include<conio.h>

void bubble_sort(int[], int);

void main() {
   int arr[30], num, i;

   printf("\nEnter no of elements :");
   scanf("%d", &num);

   printf("\nEnter array elements :");
   for (i = 0; i < num; i++)
      scanf("%d", &arr[i]);

   bubble_sort(arr, num);
   getch();
}

void bubble_sort(int arr[], int num) {
   int i, j, k, temp;

   printf("\nUnsorted Data:");
   for (k = 0; k < num; k++) {
      printf("%5d", arr[k]);
   }

   for (i = 1; i < num; i++) {
      for (j = 0; j < num - 1; j++) {
         if (arr[j] > arr[j + 1]) {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
         }
      }

      printf("\nAfter pass %d : ", i);
      for (k = 0; k < num; k++) {
         printf("%5d", arr[k]);
      }
   }
}
