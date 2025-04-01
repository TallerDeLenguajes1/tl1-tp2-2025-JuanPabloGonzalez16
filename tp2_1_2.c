#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20
int main(){
    double vt[N];
    int i;
    double *p = vt;
    srand(time(NULL));
    for(i=0;i<N;i++){
        *(p + i) = 1 + rand()%100;
        printf("\n%.2f",*(p + i));
    }
    p -= i;
    return 0;
}