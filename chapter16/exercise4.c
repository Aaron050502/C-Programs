#include <stdio.h>




typedef struct {
        double real;
        double imaginary;
} Complex;

Complex make_complex(double y, double x);
Complex add_complex(Complex y, Complex x);

int main(void) {

   
    Complex c1, c2, c3;
    Complex d2 = make_complex(2.0, 3.0);
    Complex d3 = make_complex(3.0, 2.0);
    printf("%.2f %.2f\n", d2.real, d2.imaginary);
    printf("%.2f %.2f\n", d3.real, d3.imaginary);
    Complex d4 = add_complex(d2, d3);
    printf("%.2f %.2f", d4.real, d4.imaginary);



    return 0;
}

Complex make_complex(double y, double x) {
    Complex d = {y, x};
    return d;
}

Complex add_complex(Complex y, Complex x) {
    Complex returnComplex;
    returnComplex.real = y.real + x.real;
    returnComplex.imaginary = y.imaginary + x.imaginary;

    return returnComplex;
}