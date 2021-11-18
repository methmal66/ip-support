#include <math.h>
#include <assert.h>
#include <stdio.h>

double calculate(double, double, double);
void test();

int main(int argc, char const *argv[])
{
    test();
}

double calculate(double u, double a, double t)
{
    float dist = u * t + 0.5 * a * t * t;
    return dist;
}

void test()
{
    assert(fabs(750.0 - calculate(25.0, 10.0, 10.0)) < 0.01);
    assert(fabs(2000.0 - calculate(50.0, 5.0, 20.0)) < 0.01);
    assert(fabs(812.5 - calculate(100.0, 25.0, 5.0)) < 0.01);
    printf("Tests passed!\n");
}