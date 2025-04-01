#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 7
int main(){
    int i,j;
int mt[N][M];
int **p = (int**)malloc(N * sizeof(int*));
for(i = 0;i<N; i++){
    p[i] = (int*)malloc(M * sizeof(int));
    for(j = 0;j<M; j++)
    {
    p[i][j]=1+rand()%100;
    printf("%d ",p[i][j]);
    }
printf("\n");
}
return 0;
}

