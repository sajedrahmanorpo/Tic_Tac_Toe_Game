#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    char *section[] = {"Padma", "Meghna", "Jamuna", "Teesta", "Surma"};

    while(n--){
        long long roll;
        scanf("%lld", &roll);
        printf("%s\n", section[(roll - 1) % 5]);
}
    return 0;
}