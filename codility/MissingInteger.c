int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int singleNumber(int num)
{
    if (num <= 0)
    {
        return 1;
    }
    else if (num == 1)
    {
        return 2;
    }
    else
    {
        return 1;
    }
}

int solution(int A[], int N)
{
    // write your code in C99 (gcc 6.2.0)

    if (N == 1)
    {
        return singleNumber(A[N]);
    }

    qsort(A, N, sizeof(int), cmpfunc);

    if (A[N - 1] <= 0)
    {
        return 1;
    }

    if (A[0] > 1)
    {
        return 1;
    }

    int num1;
    int num2;

    for (int i = 0; i < (N - 1); i++)
    {
        num1 = A[i];
        num2 = A[i + 1];

        if (num1 == num2 || (num1 <= 0 && num2 <= 0))
        {
            continue;
        }

        if (num1 <= 0 && num2 >= 1)
        {
            if ((i + 1) == (N - 1))
            {
                return singleNumber(num2);
            }
            continue;
        }

        if ((num2 - num1) > 1)
        {
            return (num1 + 1);
        }
    }

    return (A[N - 1] + 1);
}

// 100% performance
// 80% correctness
// 88% Total score

/*
[-1,-1,1]
[-1,-1,3]
[-1,-1,0]
[-1,-1,1,1]
[-1,-1,1,3]


*/