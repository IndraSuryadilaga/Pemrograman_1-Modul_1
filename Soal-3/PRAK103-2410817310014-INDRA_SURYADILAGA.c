#include <stdio.h>

int main() {
    float a = 5, b = 6, x = 7, y = 8;
    
    printf("Variabel a bernilai %.0f\n",a);
    printf("Variabel b bernilai %.0f\n",b);
    printf("Variabel x bernilai %.0f\n",x);
    printf("Variabel y bernilai %.0f\n",y);
    printf("Jumlah a ditambah b dikali x dibagi y adalah %f\n", a+b*x/y);
    return 0;
}
