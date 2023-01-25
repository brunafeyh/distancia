#include<stdio.h>
#include<math.h>

int main()
{
    double x1, x2, y1, y2, distancia1, distanciaf;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    distancia1 = pow(x2-x1,2) + pow(y2-y1,2);
    distanciaf = sqrt(distancia1);
    printf("%.4lf\n", distanciaf);

    return 0;
}

