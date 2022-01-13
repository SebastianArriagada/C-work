
#include <math.h>

int solution(int X, int Y, int D)
{
    double jumps = (Y - X) / (D * 1.0);

    return ceil(jumps);
}
