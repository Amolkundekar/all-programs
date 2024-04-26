// #include <stdio.h>

// struct product
// {
//     char name[10];
//     char id[10];
//     float price;
//     float gst;
// };

// void readfile(FILE *fp, struct product p[5])
// {
//     for (int i = 0; i < 5; i++)
//     {
//         fscanf(fp, "\n%s\t\t%s\t\t%f\t\t%f", p[i].name, p[i].id, &p[i].price, &p[i].gst);
//     }
// }

// void writefile(FILE *fp, struct product p[15])
// {
//     for (int i = 0; i < 5; i++)
//     {
//         fprintf(fp, "\n%s\t\t%s\t\t%f\t\t%f", p[i].name, p[i].id, &p[i].price, &p[i].gst);
//     }
// }

// int main()
// {
//     FILE *fp;
//     struct product p[15];

//     fp = fopen("product.txt", "r+");
//     if (fp == NULL)
//     {
//         printf("file not opened\n");
//     }
//     else
//     {
//         printf("file opened\n");
//         readfile(fp, p);
//         for (int i = 0; i < 5; i++)
//         {
//             printf("%s\t%s\t%f\t%f\n", p[i].name, p[i].id, p[i].price, p[i].gst);
//         }

//         fclose(fp);
//     }



//     return 0;
// }


#include <stdio.h>

struct product{
    char pname[20];
    char pid[20];
    int price;
    int gst;
};

int main()
{
    FILE *fp;
    struct product p[10];
    int n;
    
    printf("how many products you want to store\nAt max 10 allowed\n");
    scanf("%d", &n);

    for(int j = 0; j<n; j++)
    {
        printf("enter product name, product id, price and gst\n");
        scanf("%s%s%d%d", &p[j].pname, &p[j].pid, &p[j].price, &p[j].gst);
    }

    fp = fopen("s.txt", "a");

    fprintf(fp, "%s\t%s\t*%s\t*%s", "product name", "product id", "price", "gst");
    if(fp == NULL)
    {
        printf("file not created\n");
    }

    else
    {
        for(int i = 0; i<(n); i++)
        {
            fprintf(fp, "\n%s\t%s\t%d\t%d", p[i].pname, p[i].pid, p[i].price, p[i].gst);
            printf("data written successfully\n");
        }
    }


    return 0;
}