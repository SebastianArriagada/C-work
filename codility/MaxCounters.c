

#include <stdio.h>

struct Results
{
    int *C;
    int L; // Length of the array
};

struct Results solution(int N, int A[], int M)
{
    struct Results result;
    // write your code in C99 (gcc 6.2.0)

    int *arr;
    arr = calloc(N, sizeof(int));
    int maxNum = 0;
    int token = 0;

    for (int i = 0; i < M; i++)
    {
        token = A[i] - 1;

        if (token < N)
        {
            arr[token] += 1;
        }

        else
        {
            for (int j = 0; j < N; j++)
            {
                arr[j] = maxNum;
            }
        }

        if (arr[token] > maxNum)
        {
            maxNum += 1;
        }
    }

    result.L = N;
    result.C = &arr[0];

    return result;
}

int main()
{
    struct Results res;

    int array[] = {3, 1, 2, 6, 1, 4, 4};

    res = solution(5, array, 6);

    for (int j = 0; j < 10; j++)
    {
        printf("%i ", (res.C[j]));
    }

    printf("\n");

    free(res.C);
    return 1;
}

/*

Correctness: 100%
Performance: 60%
Total score: 77%

Example tests

example test ✔OK

expand allCorrectness tests

all max_counter operations ✔OK
only one counter✔OK
small random test, 6 max_counter operations ✔OK
small random test, 10 max_counter operations ✔OK

expand allPerformance tests

medium random test, 50 max_counter operations ✔OK
medium random test, 500 max_counter operations ✔OK
large random test, 2120 max_counter operations ✔OK
large random test, 10000 max_counter operations ✘TIMEOUT ERROR
all max_counter operations ✘TIMEOUT ERROR


*/