#include <stdio.h>
#include <string.h>

int cmp_cuv(char cuv1[100], char cuv2[100]) {
    int l1 = strlen(cuv1);
    int l2 = strlen(cuv2);

    if (l1 != l2) {
        return l2 - l1;
    }
    return strcmp(cuv1, cuv2);
}

int main() {
    char prop[1000];
    char cuvinte[100][100];
    int n = 0;

    scanf("%[^\n]%*c", prop);

    char* p = strtok(prop, " ");
    while (p != NULL) {
        strcpy(cuvinte[n], p);
        n++;
        p = strtok(NULL, " ");
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (cmp_cuv(cuvinte[j], cuvinte[j + 1]) > 0) {
                char aux[100];
                strcpy(aux, cuvinte[j]);
                strcpy(cuvinte[j], cuvinte[j + 1]);
                strcpy(cuvinte[j + 1], aux);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s\n", cuvinte[i]);
    }

    return 0;
}
