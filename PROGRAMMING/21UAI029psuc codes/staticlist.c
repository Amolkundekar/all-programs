#include<stdio.h>
void display(int arr[20], int last_position)
{
	int i;
	for(i=0; i<last_position; i++)
	 {
	 printf("%d\n", arr[i]);
	 }
}
void insert(int arr[20], int position, int element, int* last_position, int max_size)
{
		int i;
 if(*last_position==max_size)
  {
 	printf("list is full");
  }
 else
  {
  	for(i=*last_position; i >= position; i--)
	{

	arr[i+1]=arr[i];
	}

 	arr[position]=element;
	*last_position = *last_position +1;
  }
}

int delete(int arr[20], int position, int* last_position)
{
	int i;
 if(*last_position == -1)
	{
	 printf("list is empty!!!!\n");
	 
	}

 else
	{
	 if(*last_position <= position)
		{
		  printf("enter valid position");
		}

	 else
		{
		 int temp;
		 temp = arr[position];
   		 for( i = position ; i<=*last_position; i++)
		  {
			arr[i] = arr[i+1];
			
		  }
			
		 *last_position = *last_position -1;
		  return temp;
		}
		
	}

}

int search(int arr[20], int element, int last_position)
{
  int i;
  
  for(i = 0; i < last_position; i++)
  {
   if(arr[i] == element)
	{
          printf("your element is at index:%d\n", i);
	}
      else if(arr[i] != element)
	{
 	   printf("your element is not found at index:%d\n", i);
	}
  }
  return i;

}

int se(int arr[20], int element, int last_position)
{
  int i;
  
  for(i = 0; i < last_position; i++)
  {
   if(arr[i] == element)
	{
          printf("your element is at index:%d\n", i);
	}
      
  }
  return i;

}



int main()
{
 int arr[20]={1,2,3,4,5};
 int max_size=20;
 int last_position=5;
 int element , position;
 int choice;
 int temp;
 int i;
printf("\n");
printf("default list\n");
for( i =0; i<5; i++)
{
 printf(" %d\n", arr[i]);
}
printf("\n\n");
while(choice != 4)
{
 printf(" enter your choice\n insert= 1 \n delete= 2\n search= 3\n exit= 4\n");
 scanf("%d", &choice);

 switch(choice)
{
 case 1:
 printf("enter position\n");
 scanf("%d", &position);
 printf("enter element\n");
 scanf("%d", &element);
 insert(arr, position, element, &last_position, max_size);
 break;
 
 case 2:
 printf("enter position\n");
 scanf("%d", &position);

 temp = delete(arr, position, &last_position);
 printf("deleted element is: %d\n", temp);
 break;

 case 3:
 printf("enter element\n");
 scanf("%d", &element);
 search(arr, element, last_position);
 break;
 
 case 4:
 printf("exiting\n");
 break;
}
}
printf("\n\n");
display(arr, last_position);
printf("last = %d\n", last_position);
return 0;
} 
