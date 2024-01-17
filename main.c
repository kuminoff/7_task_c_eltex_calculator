#include <stdio.h>
#include "libcalc.h"

int main() {
    int choice = 0;
    int num1, num2, result;
    do {
        printf("\nВыберите операцию:\n");
        printf("1) Сложение\n");
        printf("2) Вычитание\n");
        printf("3) Умножение\n");
        printf("4) Деление\n");
        printf("5) Выход\n");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("\nВведите первое число: ");
                scanf("%d", &num1);
                printf("\nВведите второе число: ");
                scanf("%d", &num2);
                result= (num1, num2);
                result = addition(num1, num2);
                printf("\nРезультат: %d\n", result);
                break;
            case 2:
                printf("\nВведите первое число: ");                             
                scanf("%d", &num1);                                             
                printf("\nВведите второе число: ");                             
                scanf("%d", &num2);       
                result = subtraction(num1, num2); 
                printf("\nРезультат: %d\n", result);
                break; 
            case 3:
                printf("\nВведите первое число: ");
                scanf("%d", &num1);
                printf("\nВведите второе число: ");
                scanf("%d", &num2);       
                result = multiplication(num1, num2);
                printf("\nРезультат: %d\n", result);
                break;
            case 4:        
                printf("\nВведите первое число: ");                             
                scanf("%d", &num1);                                             
                printf("\nВведите второе число: ");                             
                scanf("%d", &num2);       
                result = division(num1, num2);
                printf("\nРезультат: %d\n", result);
                break; 
            case 5:
                printf("Программа завершена.\n");
                break;
            default:
                printf("Неправильный выбор операции.\n");
        }
    } while (choice != 5);
    
    return 0;
}

