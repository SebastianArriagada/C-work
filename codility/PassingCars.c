int solution(int A[], int N)
{

    int par = 0;
    int count = 0;

    for (int i = 0; i < N; i++)
    {

        if (A[i] == 0)
        {
            par += 1;
        }
        else if (par > 0)
        {
            count += par;
        }

        if (count > 1000000000)
            return -1;
    }

    return count;
}

/*

Task Score
100%
Correctness
100%
Performance

Detected time complexity:
O(N)
expand allExample tests
▶example
example test✔OK
expand allCorrectness tests
▶single
single element✔OK
▶double
two elements✔OK
▶simple
simple test✔OK
▶small_random
random, length = 100✔OK
▶small_random2
random, length = 1000✔OK
expand allPerformance tests
▶medium_random
random, length = ~10,000✔OK
▶large_random
random, length = ~100,000✔OK
▶large_big_answer
0..01..1, length = ~100,000✔OK
▶large_alternate
0101..01, length = ~100,000✔OK
▶large_extreme
large test with all 1s/0s, length = ~100,000✔OK

*/