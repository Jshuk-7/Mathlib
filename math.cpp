#include "./math.hpp"

int absolute(int x)
{
    if (x < 0)
    {
        return -x;
    }
    return x;
}

float absolute(float x)
{
    if (x < 0)
    {
        return -x;
    }
    return x;
}

double absolute(double x)
{
    if (x < 0)
    {
        return -x;
    }
    return x;
}

int power(int base, int power)
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