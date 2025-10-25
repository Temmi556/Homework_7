#include <stdio.h>

int main() {
    int month;
    int visokos; 
    int days;

    printf("Введите номер месяца (1–12): ");
    scanf("%d", &month);

    printf("Год високосный? (1 — да, 0 — нет): ");
    scanf("%d", &visokos);

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            if (visokos == 1)
                days = 29;
            else
                days = 28;
            break;
        default:
            printf("Ошибка: номера месяца %d не существует.\n", month);
            return 1;
    }

    printf("В месяце %d — %d дней.\n", month, days);
    return 0;
}
