#include <stdio.h>
 
int main() {
 
    double raio, volume, pi=3.14159;
    double quatrotercos;
    scanf("%lf", &raio);
    
    quatrotercos = 4.0/3;
    raio = raio * raio * raio;
    volume = quatrotercos * pi * raio;
    
    printf("VOLUME = %.3lf\n", volume);
    
    return 0;
} 
