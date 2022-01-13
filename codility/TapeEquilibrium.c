int solution(int A[], int N) {
    int actualDiff = 0;
    int minDiff = 2000;
    int sum1 = 0;
    int sum2 = 0;
    int total = 0;

    for ( int i = 0; i < N; i++){

        total += A[i];
    }

    for ( int i = 1; i < N; i++){
        sum1 += A[i - 1];
        sum2 = total - sum1;
        actualDiff = abs(sum1 - sum2);

        if (actualDiff < minDiff){
            minDiff = actualDiff;
        }
    }

    return minDiff;
}

/*
Detected time complexity:O(N)

example test ✔OK

Correctness tests

two elements ✔OK
simple test with positive numbers, length = 5 ✔OK
simple test with negative numbers, length = 5 ✔OK
only one element on one of the sides ✔OK
random small, length = 100 ✔OK
range sequence, length = ~1,000 ✔OK

allPerformance tests

random medium, numbers from 0 to 100, length = ~10,000 ✔OK
random medium, numbers from -1,000 to 50, length = ~10,000 ✔OK
large sequence, numbers from -1 to 1, length = ~100,000 ✔OK
random large, length = ~100,000 ✔OK
large sequence, length = ~100,000 ✔OK
large test with maximal and minimal values, length = ~100,000 ✔OK
*/