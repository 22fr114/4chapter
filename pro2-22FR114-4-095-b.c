#include <stdio.h>
#include <math.h>

int main() {
    double r;
    double rad,cosv,sinv;
    scanf("%lf", &r);

     rad = r * M_PI / 180.0;

     cosv = cos(rad);
     sinv = sin(rad);

    printf(" %f  %f \n", cosv, -sinv);
    printf(" %f  %f \n", sinv, cosv);

    return 0;
}
