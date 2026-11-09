#define _CRT_SECURE_NO_DEPRECATE
#include <stdlib.h>
#include <locale.h>
#include <stdio.h>   


int main()
{
    int n;      
    char c;    

    setlocale(LC_ALL, "RUS");

    printf("Введите количество символов: ");
    scanf("%d", &n);

    printf("Введите символ: ");
    scanf(" %c", &c);   

    for (int start = 1; start <= n; start++)
        putchar(c);

    printf("\n");

    return 0;
}
//*

int ex()
{
    int n;       
    int vybor;  
    char c;

    setlocale(LC_ALL, "Russian");

    printf("Введите количество символов: ");
    scanf("%d", &n);

    printf("Введите символ: ");
    scanf(" %c", &c);

    printf("Печатать + в начале (1) или в конце (2)? ");
    scanf("%d", &vybor);

    if (vybor == 1)
        printf("+");

    for (int start = 1; start <= n; start++)
        putchar(c);

    if (vybor == 2)
        printf("+");

    printf("\n");

    return 0;
}
//**
int ex2()
{
    int n;    
    char c1;  
    char c2;  

    setlocale(LC_ALL, "RUS");

    printf("Введите количество символов: ");
    scanf("%d", &n);

    printf("Введите первый символ: ");
    scanf(" %c", &c1);

    printf("Введите второй символ: ");
    scanf(" %c", &c2);

    for (int start = 1; start <= n; start++)
        if (start <= n / 2)
            putchar(c1);   
        else
            putchar(c2);   

    printf("\n");

    return 0;
}
//***
int ex3()
{
    int n;      
    char c;

    setlocale(LC_ALL, "RUS");

    printf("Введите количество символов: ");
    scanf("%d", &n);

    printf("Введите символ: ");
    scanf(" %c", &c);

    for (int start = 1; start <= n; start++)
        printf("%c!", c);

    printf("\n");

    return 0;
}


int main2()
{
    int n, m;    
    int s = 0;   
    int k = 0;   

    setlocale(LC_ALL, "RUS");

    printf("Введите m: ");
    scanf("%d", &m);

    printf("Введите n: ");
    scanf("%d", &n);

    
    for (int i = m; i >= n; i--)
    {
        s = s + i;                      
        printf("выполнено %d раз", ++k); 
    }

    printf("\nрезультат %d", s);

    return 0;
}

//А1

int main3()
{
    int n;   
    int p;    

    setlocale(LC_ALL, "RUS");

    
    printf("Введите степень n: ");
    scanf("%d", &n);

    
    p = 1;
    for (int i = 0; i <= n; i++)
    {
        
        printf("2^%d = %10d\n", i, p);
        p = p * 2;
    }

    p = p / 2;   

    // 4) конечный результат, преобразованный к K=1024 //
    if (p >= 1024)
        printf("Результат: %dK\n", p / 1024);
    else
        printf("Результат: %d\n", p);

    return 0;
}
//A1-5

int main4()
{
    int m;      
    int p;      
    float k;    

    setlocale(LC_ALL, "Russian");

    printf("Введите число m: ");
    scanf("%d", &m);

    p = 1;
    for (int i = 0; p <= m; i++)
    {
        if (p >= 1024)
        {
            k = p / 1024.0;                   
            printf("2^%d = %10.1fK\n", i, k);  
        }
        else
        {
            printf("2^%d = %10d\n", i, p);
        }
        p = p * 2;
    }

    return 0;
}
//задание 2
#include <math.h>     /* для fabs, log10 */

int main5()
{
    float a, b, h;   
    float x, y;

    setlocale(LC_ALL, "RUS");

    // 1) в приглашении выводим вычисляемую функцию //
    printf("Табулирование функции y = |lg x| - (x-2)^2\n");
    printf("Введите начало интервала: ");
    scanf("%f", &a);

    printf("Введите конец интервала: ");
    scanf("%f", &b);

    // 2) ввод шага табуляции //
    printf("Введите шаг табуляции: ");
    scanf("%f", &h);

    // 3) результаты в виде таблицы //
    printf("_________________\n");
    printf("|  x   |  f(x)  |\n");
    printf("_________________\n");

    for (x = a; x <= b; x = x + h)
    {
        y = fabs(log10(x)) - (x - 2) * (x - 2);   // формула варианта 12 //
        printf("|%6.2f |%8.3f |\n", x, y);
    }

    printf("_________________\n");

    return 0;
}

