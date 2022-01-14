int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int solution(int A[], int N)
{
    // write your code in C99 (gcc 6.2.0)

    qsort(A, N, sizeof(int), cmpfunc);

    if (N == A[N - 1])
    {

        for (int i = 0; i < (N - 1); i++)
        {
            if (A[i] == A[i + 1])
            {
                return 0;
            }
        }

        return 1;
    }
    else
    {
        return 0;
    }
}

/*


Task Score
100%
Correctness
100%
Performance
100%

Detected time complexity:
O(N) or O(N * log(N))
expand allExample tests
▶example1
the first example test✔OK
▶example2
the second example test✔OK
expand allCorrectness tests
▶extreme_min_max
single element with minimal/maximal value✔OK
▶single
single element✔OK
▶double
two elements✔OK
▶antiSum1
total sum is correct, but it is not a permutation, N <= 10✔OK
▶small_permutation
permutation + one element occurs twice, N = ~100✔OK
▶permutations_of_ranges
permutations of sets like [2..100] for which the anwsers should be false✔OK
expand allPerformance tests
▶medium_permutation
permutation + few elements occur twice, N = ~10,000✔OK
▶antiSum2
total sum is correct, but it is not a permutation, N = ~100,000✔OK
▶large_not_permutation
permutation + one element occurs three times, N = ~100,000✔OK
▶large_range
sequence 1, 2, ..., N, N = ~100,000✔OK
▶extreme_values
all the same values, N = ~100,000✔OK
▶various_permutations
all sequences are permutations✔OK

*/