#include <stdio.h>
int main(){
    float AD, AB;
    scanf("%f %f", &AD, &AB);
    
    float area = (AD * AB) * 1/2;

    printf("%.1f", area);
    return 0;
}