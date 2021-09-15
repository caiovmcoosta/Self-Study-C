#include <stdio.h>
#include <conio.h>
 
int main() {
 
    char nome[30];
    double vend, sal; 
    
    scanf("%s", &nome);
    scanf("%lf", &sal);
    scanf("%lf", &vend);
    
    vend = vend * 0.15;
    sal = sal + vend;
    
    printf("TOTAL = R$ %.2f\n", sal);
    
    return 0;
}
