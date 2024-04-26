#include <stdio.h>
#include<math.h>
int main()
{
    signed int a, b, c, d;
    signed int e, f;
    int p= -3;
    printf("%d", p);
    // accepting coordinates of point 1
    printf("enter co-ordinates of point P (rotating point):\n");
    scanf("%u", &a);
    scanf("%u", &b);
    // accepting coordinates of point 2
    printf("enter co-ordinates of point Q (fixed point):\n");
    scanf("%u", &c);
    scanf("%u", &d);
    // calculating coordinates of new point

    e = -a + (c+c);
    f = -b + (d+d);

    printf("new co-ordinates are %d  %d", e, f);
    return 0;
}