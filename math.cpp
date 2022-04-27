#include "./math.hpp"

int abs(int x)
{
    if (x < 0)
    {
        return -x;
    }
    return x;
}

float abs(float x)
{
    if (x < 0)
    {
        return -x;
    }
    return x;
}

double abs(double x)
{
    if (x < 0)
    {
        return -x;
    }
    return x;
}

int pow(int base, int power)
{
    int result;

    for (int i = 1; i <= power; i++)
    {
        if (i == 1)
        {
            result = 1;
        }
        result *= base;
    }
    return result;
}