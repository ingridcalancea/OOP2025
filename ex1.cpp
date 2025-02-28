#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int conversie_numar(char sir[]) {
    int r = 0, i = 0;

    while (sir[i] >= '0' && sir[i] <= '9') {
        r = r * 10 + (sir[i] - '0');
        i++;
    }

    return r;
}

int main() {
    FILE* fisier = fopen("in.txt", "r");
    if (fisier == NULL) {
        printf("nu se poate deschide fisierul\n");
        return 1;
    }

    char numar[256];
    int suma = 0;
    while (fgets(numar, sizeof(numar), fisier)) {
        suma += conversie_numar(numar);
    }

    printf("suma= %d\n", suma);

    fclose(fisier);
    return 0;
}
