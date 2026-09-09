#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int M, N, B; // M = taka, N = timeTable, B = totalBus;
        scanf("%d %d %d", &M, &N, &B);

        int minimumCost = -1; // minimum cost -1;
        int minimumTime = -1; // minimum time -1;

        for(int i = 0; i < B; i++){
            int r, t; // r = rent of a bus, t = time;
            scanf("%d %d", &r, &t);
        }

        if( r <= M && t <= N){
            
        }
    }
}