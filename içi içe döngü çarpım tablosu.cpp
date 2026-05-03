// iç içe döngü yapýsý ile çarpým tablosunu gerçekleþtiren c kodu

#include <stdio.h>

int main() {
    int i, j;

    // 1'den 10'a kadar olan sayýlarýn çarpým tablosunu oluþturuyoruz. 10 dan küçük olduðu sürece 100 yaparsak 100 sayýnýn çarpým tablosunu yazar
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n"); // her satýrýn sonunda bir boþluk býrakýyoruz
    }

    return 0;
}

