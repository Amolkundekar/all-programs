#include <stdio.h>

struct product
{
    char name[10];
    char id[10];
    float price;
    float gst;
};

void readfile(FILE *fp, struct product p[5])
{
    for (int i = 0; i < 5; i++)
    {
        fscanf(fp, "\n%s\t\t%s\t\t%f\t\t%f", p[i].name, p[i].id, &p[i].price, &p[i].gst);
    }
}

void writefile(FILE *fp, struct product p[15])
{
    for (int i = 0; i < 5; i++)
    {
        fprintf(fp, "\n%s\t\t%s\t\t%f\t\t%f", p[i].name, p[i].id, &p[i].price, &p[i].gst);
    }
}

int main()
{
    FILE *fp;
    struct product p[15];

    fp = fopen("product.txt", "r+");
    if (fp == NULL)
    {
        printf("file not opened\n");
    }
    else
    {
        printf("file opened\n");
        readfile(fp, p);
        for (int i = 0; i < 5; i++)
        {
            printf("%s\t%s\t%f\t%f\n", p[i].name, p[i].id, p[i].price, p[i].gst);
        }

        fclose(fp);
    }



    return 0;
}