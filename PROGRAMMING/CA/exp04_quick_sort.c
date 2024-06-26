#include <stdio.h>
#include<time.h>

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}


int partition(int array[], int low, int high) {
  int pivot = array[high];
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}
void quickSort(int array[], int low, int high) {
  if (low < high) {
     int pi = partition(array, low, high);
   quickSort(array, low, pi - 1);
     quickSort(array, pi + 1, high);
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[100];

  int n;
   printf("Give the siz of array\n");
   scanf("%d",&n);
  printf("Give the nos\n");
  for(int i=0;i<n;i++){

  scanf("%d",&data[i]);

  }

  printf("Unsorted Array\n");
  printArray(data, n);
  	clock_t time;
  	time=clock();
  quickSort(data, 0, n - 1);
  time=clock()-time;
  double time_taken =((double) time)/CLOCKS_PER_SEC;


   printf("Sorted array in ascending order: \n");
  printArray(data, n);
  printf("The total time required is %f",time_taken);
}
