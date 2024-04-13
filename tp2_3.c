#include<stdio.h>
#include<stdlib.h>
#define N 5
#define M 7

int main()
{
    int i,j;
    int mt[N][M], *pmt[N];

    for(i = 0;i<N; i++)
    {
        pmt[i] = &mt[i][0];   
    }
    int **qmt=pmt;
    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
            pmt[i][j]=1+rand()%100;
            printf("%1f", pmt[i][j]);
        }
        printf("\n");
    }

    return 0;
}