#include <stdio.h>
#include <math.h>

double cal(double x) {
    double dis = fabs(x);
    double ra = sqrt(1 - dis * dis); 
    return ra;
}

int main() {
    double x = 0.5;
    
    double ra = cal(x);
    
    printf("%f\n", ra);
    
    return 0;
}
