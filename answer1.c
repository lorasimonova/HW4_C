#include <stdio.h>

int main() {
    int month, year; //Объявляем переменные "месяц" и "число"

    scanf("%d %d", &month, &year); //Считываем введенные данные
    int days; // Используем условные операторы для определения количества дней в заданном месяце
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            days = 29; //В высокосный год февраль содержит 29 дней
        } else {
            days = 28; //В обычный год февраль содержит 28 дней
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30; //Апрель, июнь, сентябрь, ноябрь содержат 30 дней
    } else {
        days = 31; //В остальных случаях месяц содержит 31 день
    }
    printf("%d\n", days); //Выводим количество дней в заданном месяце
    return 0;
}
