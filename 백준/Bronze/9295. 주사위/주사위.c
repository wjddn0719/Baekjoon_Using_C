#include <stdio.h>

int main(){
    int N, i, A,B;
    scanf("%d", &N);
    for(i=1; i<=N; i++){
        scanf("%d %d", &A, &B);
        printf("Case %d: %d\n", i, A+B);
    }
    return 0;
}