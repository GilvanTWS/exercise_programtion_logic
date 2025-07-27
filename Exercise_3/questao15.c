#include <stdio.h>
#include <string.h>

int main() {
    char menor[20], maior[20];

    printf("Digite o número menor (menos dígitos): ");
    scanf("%s", menor);

    printf("Digite o número maior: ");
    scanf("%s", maior);

    if (strstr(maior, menor) != NULL) {
        printf("%s é subnúmero de %s\n", menor, maior);
    } else {
        printf("%s não é subnúmero de %s\n", menor, maior);
    }

    return 0;
}
