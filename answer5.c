#include <stdio.h> 

int main() { 
    int numb, count = 0, summ = 0; // Объявляем переменные и приравниваем к нулю
    scanf("%d", &numb); // Считываем первое число

    while(numb != 0) { // Запускаем цикл, который будет выполняться, пока не будет введено число 0
        summ += numb; // Добавляем считанное число к сумме
        count++; // Увеличиваем количество чисел на 1
        scanf("%d", &numb); // Считываем следующее число
    }

    printf("%f", (float)summ/count); // Выводим среднее арифметическое чисел в последовательности

    return 0; 
}
