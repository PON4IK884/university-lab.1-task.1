#include <math.h>
#include <stdio.h>

int main()
{
    float suma, znizhka, do_splaty;
    printf("Обчислення вартості покупки з урахуванням знижки\n Введіть суму покупки і натисніть <Enter>");
    scanf("%f", &suma);
    if (suma >=1000){
        znizhka=0.10;
        printf("Вам надається знижка в розмірі 10%%\n");
    }
    else {
        znizhka=0.0;
        printf("Знижка не надається\n");
    }
    do_splaty=suma*(1-znizhka);
    printf("Сума покупки з урахуванням знижки %g",do_splaty);
    return 0;
}
