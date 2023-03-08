#include <stdio.h>
int sop_pow(int base, int exp);
int sop_pow_accum(int base, int exp, int accum);
int naive_pow(int base, int exp);

int main() {
    printf("%d\n", sop_pow(5,10));
    printf("%d", naive_pow(5,10));
    return 0;
}
int sop_pow(int base, int exp) {
    return sop_pow_accum(base, exp, 1);
}

int sop_pow_accum(int base, int exp, int accum) {
    if (exp > 0)
        return sop_pow_accum(base, exp - 1, accum * base);
    else
        return accum;
}

 int naive_pow(int base, int exp){
    if (exp == 1){
        return base;
    }
    else{
        return base * naive_pow(base, exp-1);
    }
 }