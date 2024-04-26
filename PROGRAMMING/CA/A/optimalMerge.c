#include <math.h>
#include <stdio.h>
void sort(int file[], int n)
{
  for(int i = 0; i< n;i++)
  {
    for(int j= i+1; j<n; j++)
    {
      if(file[i]>file[j])
      {
        int t;
        t = file[i];
        file[i]= file[j];
        file[j]= t;
      }
    }
  }
}
int optimal(int file[], int n)
{
  int i = 0, count = 0;
  int fs, ss, t;
  while (n > 1)
  {
    sort(file, n);
    fs = file[0];
    ss = file[1];
    t = fs + ss;
    count += t;
    file[0] = t;
    for (i = 1; i < n - 1; i++)
    {
      file[i] = file[i + 1];
    }
    n--;
  }
  return count;
}

int main()
{
  int i, n, file[50];
  printf("Enter the no of files: ");
  scanf("%d", &n);
  printf("Enter the sizes of the files:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &file[i]);
  }

  printf("Minimum computation= %d", optimal(file, n));
  
  return 0;
}
