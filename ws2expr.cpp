#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c,d,A,B,C,D,E;
    a = 1,b = 1,c = 5,d = 1;
    A = 3 * (a / 5.0)+(1/b);
    B = ((3*a)+(5*b))/(2+c);
    C = (2.0/7.0)*((pow(4,3+c))-(5*d));
    D = sqrt(((2+(8*b))/a));
    E = cbrt((pow(b,2)-(4*d)));
    printf("4.1\n");
    printf("A = %.2f\nB = %.2f\nC = %.2f\nD = %.2f\nE = %.2f\n", A,B,C,D,E);

    a = 9,b = 2,c = 0,d = 1;
    A = 3 * (a / 5.0)+(1/b);
    B = ((3*a)+(5*b))/(2+c);
    C = (2.0/7.0)*((pow(4,3+c))-(5*d));
    D = sqrt(((2+(8*b))/a));
    E = cbrt((pow(b,2)-(4*d)));
    printf("4.2\n");
    printf("A = %.2f\nB = %.2f\nC = %.2f\nD = %.2f\nE = %.2f\n", A,B,C,D,E);

    a = 0,b = 3,c = 3,d = 3;
    A = 3 * (a / 5.0)+(1/b);
    B = ((3*a)+(5*b))/(2+c);
    C = (2.0/7.0)*((pow(4,3+c))-(5*d));
    D = sqrt(((2+(8*b))/a));
    E = cbrt((pow(b,2)-(4*d)));
    printf("4.3\n");
    printf("A = %.2f\nB = %.2f\nC = %.2f\nD = %.2f\nE = %.2f\n", A,B,C,D,E);
    return 0;
}