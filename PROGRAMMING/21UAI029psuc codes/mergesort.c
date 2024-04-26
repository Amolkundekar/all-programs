#include <stdio.h>
void merge(int [], int , int , int );
void mergesort(int list[10], int si, int ei)
{
  if (si < ei)
  {
    int mid = (si + ei) / 2;
    mergesort(list, si, mid);
    mergesort(list, mid + 1, ei);
    merge(list, si, mid, ei);
  }
}

void merge(int list[10], int si, int mid, int ei)
{
  int temp[10];
  int i = si, j = mid + 1, k = si;

  while ((i <= mid) && (j <= ei))
  {
    if (list[i] < list[j])
    {
      temp[k] = list[i];
      i++;
      k++;
    }

    else
    {
      temp[k] = list[j];
      j++;
      k++;
    }
  }

  while (i <= mid)
  {
    temp[k] = list[i];
    k++;
    i++;
  }

  while (j <= ei)
  {
    temp[k] = list[j];
    k++;
    j++;
  }

  for (k = si; k <= ei; k++)
  {
    list[k] = temp[k];
  }

  
}

int main()
{
  int list[10];
  int SI = 0, EI = 9;

  printf("enter the 10 elements to the list\n");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d\n", &list[i]);
  }

  printf("\n\n");

  mergesort(list, SI, EI);
  for (int i = 0; i < 10; i++)

  {
    printf("%d\t", list[i]);
  }
}
