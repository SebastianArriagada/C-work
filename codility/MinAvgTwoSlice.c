int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int AbsolutePosition = -1 ;
    double absoluteAvg = 20001.0;
    double actualSum = 0.0;
    double actualAvg = 0.0;
    double prevAvg = 20001.0;
    for ( int i = 0; i < (N-1) ; i++){
        
        for ( int j = 0; j < (N - i) ; j++){
            
            if (j == 0){
                actualSum += (A[i+j] * 1.0);
    
                continue;
            }
            actualSum += (A[i+j] * 1.0);
            actualAvg = actualSum / (( j + 1));

            
            if (prevAvg < actualAvg) {
                prevAvg = actualAvg;
                break;
            }
            else {
            prevAvg = actualAvg;
            }
        }

        if (prevAvg < absoluteAvg) {
        absoluteAvg = prevAvg;
        AbsolutePosition = i;
        }
        prevAvg = 2000001.0;
        actualSum = 0.0;

    }

    return AbsolutePosition;

}

/*
Task Score
40%
Correctness
80%
Performance

Example tests
▶example
example test✔OK
expand allCorrectness tests
▶double_quadruple
two or four elements✔OK
▶simple1
simple test, the best slice has length 3✔OK
▶simple2
simple test, the best slice has length 3✔OK
▶small_random
random, length = 100✘WRONG ANSWER
got 97 expected 17
1.0.001 sWRONG ANSWER, got 97 expected 17
▶medium_range
increasing, decreasing (legth = ~100) and small functional✔OK
expand allPerformance tests
▶medium_random
random, N = ~700✘WRONG ANSWER
got 175 expected 90
▶large_ones
numbers from -1 to 1, N = ~100,000✘WRONG ANSWER
got 13866 expected 0
▶large_random
random, N = ~100,000✘WRONG ANSWER
got 96062 expected 46034
▶extreme_values
all maximal values, N = ~100,000✘TIMEOUT ERROR
Killed. Hard limit reached: 6.000 sec.
▶large_sequence
many seqeneces, N = ~100,000✘WRONG ANSWER
got 99983 expected 3


*/