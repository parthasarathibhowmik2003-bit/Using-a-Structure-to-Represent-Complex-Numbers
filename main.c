#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

Complex add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

void display(Complex c, const char *label) {
    if (c.imag >= 0)
        printf("%s = %.2f + %.2fi\n", label, c.real, c.imag);
    else
        printf("%s = %.2f - %.2fi\n", label, c.real, -c.imag);
}

int main() {
    Complex c1, c2, sum;

    printf("Enter first complex number:\n");
    printf("Real: ");      scanf("%f", &c1.real);
    printf("Imaginary: "); scanf("%f", &c1.imag);

    printf("\nEnter second complex number:\n");
    printf("Real: ");      scanf("%f", &c2.real);
    printf("Imaginary: "); scanf("%f", &c2.imag);

    sum = add(c1, c2);

    printf("\n");
    display(c1,  "  c1");
    display(c2,  "  c2");
    printf("  ----------------\n");
    display(sum, " Sum");

    return 0;
}
```

**Sample Output:**
```
Enter first complex number:
Real: 3
Imaginary: -5

Enter second complex number:
Real: 1
Imaginary: 2

  c1 = 3.00 - 5.00i
  c2 = 1.00 + 2.00i
  ----------------
 Sum = 4.00 - 3.00i
