#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    const float PI = 3.14;
    float l;
    float r;
    float s; // Введення змінних для обчислення площі
    printf("Enter the lenght of the circle: ");
    scanf_s("%f", &l);
    r = l / (2 * PI); // Розрахунок радіуса
    s = PI * pow(r, 2); // Розрахунок площі
    printf("S = ", s); // Виведення площі до консолі
    system("pause");
    return 0;
}
