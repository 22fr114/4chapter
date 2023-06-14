#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979

double calCyl(double rad, double height) {
    double cyli = PI * rad * rad * height;
    return cyli;
}

double calSph(double sX, double eX, double in) {
  double x,rad1,rad2,height,cylin;
    double sph = 0;
    double dx;

    dx=(eX-sX)/in;
    
    for (x = sX; x < eX; x += dx) {
         rad1 = sqrt(1 - x * x);
         rad2 = sqrt(1 - (x + dx) * (x + dx));
         height = dx;
        
         cylin = calCyl((rad1 + rad2) / 2, height);
        sph += cylin;
    }
    
    return sph;
}

int main() {
    double sX = -1;
    double eX = 1;
    double dx = 10;
    
    double sph = calSph(sX, eX, dx);
    printf("%f\n", sph);
    
    return 0;
}
