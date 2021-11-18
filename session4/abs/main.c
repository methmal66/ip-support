#include <assert.h>
#include <math.h>
#include <stdio.h>

double use_pythagoras_theorem(double a, double b)
{
    return sqrt(pow(a, 2) + pow(b, 2));
}

void test_use_pythagoras_theorem()
{

    assert(fabs(use_pythagoras_theorem(3.0, 4.0) - 5.0) < 0.001);
    assert(fabs(use_pythagoras_theorem(5.0, 12.0) - 13.0) < 0.001);
    assert(fabs(use_pythagoras_theorem(8.0, 15.0) - 17.0) < 0.001);
    printf("\033[0;32m [PASS] \033[0m"); // display PASS in green color
    printf(
        "using pythagoras theorem to find the hypotenuse of a right triangle\n");
}

int main(int argc, char *argv[])
{
    test_use_pythagoras_theorem();
    return 0;
}