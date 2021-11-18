#include <stdio.h>
#include <math.h>

struct point
{
    float x;
    float y;
} C1;

int main(void)
{
    C1.x = 10;
    C1.y = 5;
    struct point C2 = {4, 2};

    float distance = sqrt(pow((C1.x - C2.x), 2) + pow((C1.y - C2.y), 2));

    printf("Distance = %.2f", distance);

    return 0;
}