#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h> 
int main() {

    setlocale(LC_ALL, ".UTF8");

    int X, S, L;
    int linear_meters, total_cost;

    printf("Введите стоимость погонного метра (X): ");
    scanf("%d", &X);
    printf("Введите общую площадь парусов в м2 (S): ");
    scanf("%d", &S);
    printf("Введите ширину ткани в рулоне в см (L): ");
    scanf("%d", &L);

    linear_meters = (S * 100 + L - 1) / L;
    total_cost = linear_meters * X;

    printf("\nНеобходимо погонных метров ткани: %d м\n", linear_meters);
    printf("Грей заплатил за ткань: %d золотых\n", total_cost);

    return 0;
}