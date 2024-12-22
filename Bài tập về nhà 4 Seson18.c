#include <stdio.h>

int main() {
    char name[50];
    int age;
    float height;
    printf("Nhap ten cua ban: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Nhap tuoi cua ban: ");
    scanf("%d", &age);

    printf("Nhap chieu cao cua ban (m): ");
    scanf("%f", &height);

    printf("\nThong tin cua ban:\n");
    printf("Ten: %s\n", name);
    printf("Tuoi: %d\n", age);
    printf("Chieu cao: %.2f m\n", height);

    return 0;
}
