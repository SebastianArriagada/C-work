
int solution(int A[], int N)
{
    int missElement = 0;

    for (int i = 0; i <= (N + 1); i++)
    {
        missElement = missElement ^ i;

        if (i <= N)
        {
            missElement = missElement ^ A[i];
        }
    }
    return missElement;
}
