#include <stdio.h>




struct complex {
        double real;
        double imaginary;
};

struct complex make_complex(double y, double x);
struct complex add_complex(struct complex y, struct complex x);

int main(void) {

   
    struct complex c1, c2, c3;
    struct complex d2 = make_complex(2.0, 3.0);
    struct complex d3 = make_complex(3.0, 2.0);
    printf("%.2f %.2f\n", d2.real, d2.imaginary);
    printf("%.2f %.2f\n", d3.real, d3.imaginary);
    struct complex d4 = add_complex(d2, d3);
    printf("%.2f %.2f", d4.real, d4.imaginary);



    return 0;
}

struct complex make_complex(double y, double x) {
    return (struct complex){y, x};

}

struct complex add_complex(struct complex y, struct complex x) {
    struct complex returnComplex;
    returnComplex.real = y.real + x.real;
    returnComplex.imaginary = y.imaginary + x.imaginary;

    return returnComplex;
}