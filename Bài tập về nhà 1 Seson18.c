#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};
int main() {
    struct Student student1;
    strcpy(student1.name, "Ho Khanh Linh");
    student1.age = 18;
    strcpy(student1.phoneNumber, "123456789");

    printf("Thong tin sinh vien:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Phone Number: %s\n", student1.phoneNumber);

    return 0;
}
