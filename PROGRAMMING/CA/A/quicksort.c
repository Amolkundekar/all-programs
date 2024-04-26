 #include<stdio.h> 
int partition(int [],int ,int );

//this function perform quick sort operation 
void quick_sort(int list[],int si,int ei)
{
    int j;
    if(si<ei)
    {
        j=partition(list,si,ei);
        quick_sort(list,si,j);
        quick_sort(list,j+1,ei);
    }
}

//this function is used for partion
 int partition(int list[],int si,int ei)
{
    int i,j,pivot,temp;
    i=si;
    j=ei;
    pivot=list[si];
    while(i<j)
    {
        while(list[i]<=pivot)
        {
          i++;
        }
        while(list[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            temp=list[i];
            list[i]=list[j];
            list[j]=temp;
        }

    }
    list[si]=list[j];
    list[j]=pivot;
    return j;

}
int main()
{
    int si,ei,size,i;
    printf("enter the size of the array\n");
    scanf("%d", &size);
    int list[size];
    printf("enter the elements to the list\n");
    for(i=0;i<size ;i++)
    {
        scanf("%d",&list[i]);
    }
     quick_sort( list,0, size-1);
     for(i=0;i<size;i++)
    {
        printf("\n%d",list[i]);
    }

}