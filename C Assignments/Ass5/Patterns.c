#include <stdio.h>

void Q1();
void Q2();
void Q3();
void Q4();
void Q5();
void Q6();
void Q7();
void Q8();
void Q9();
void Q10();
void Q11();
void Q12();
void Q13();
void Q14();
void Q15();
void Q16();
void Q17();
void Q18();
void Q19();
void Q20();
void Q21();
void Q22();
void Q23();
void Q24();
void Q25();
void Q26();
void Q27();
void Q28();
void Q29();
void Q30();
void Q31();

int main()
{

    // Q1();
    // Q2();
    // Q3();
    // Q4();
    // Q5();
    // Q6();
    // Q7();
    // Q8();
    // Q9();
    // Q10();
    // Q11();
    // Q12();
    // Q13();
    // Q14();
    // Q15();
    // Q16();
    // Q17();
    // Q18();
    // Q19();
    // Q20();
    // Q21();
    // Q22();
    // Q23();
    // Q24();
    // Q25();
    Q26();
    // Q27();
    // Q28();
    // Q29();
    // Q30();
    // Q31();

    return 0;
}

void Q1()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
}

void Q2()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
    }
}

void Q3()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i <= n - 1; i++)
    {
        printf("%c \n", ('A' + i));
    }
}

void Q4()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void Q5()
{

    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {

        for (int j = 1; j <= num; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

void Q6()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%c", j + 64);
        }
        printf("\n");
    }
}

void Q7()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void Q8()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j < i + 1; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

void Q9()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            printf("%c", ('A' + j));
        }
        printf("\n");
    }
}

void Q10()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n; j++)
        {
            if (i+j > n ) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void Q11()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {

        for (int j = n; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
}

void Q12()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= n - i; k++)
        {
            printf("  ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("%c", 'A' + j);

            if (j != i)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void Q13()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j <= n - i)
            {
                printf(" ");
            }
            else if (j >= n - i + 1 && j <= n + i - 1)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}

void Q14()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = n - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 1; k < 2 * i; k++)
        {
            printf(" %d", k);
        }
        printf("\n");
    }
}

void Q15()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = n - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * i - 1; k++)
        {
            printf("%c", ('A' + k));
        }
        printf("\n");
    }
}

void Q16()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            if (i + j <= n + 1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void Q17()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

void Q18()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            printf(" %c", ('A' + j));
        }
        printf("\n");
    }
}

void Q19()
{

    int n;
    int count = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf(" %d", count);
            count++;
        }

        printf("\n");
    }
}

void Q20()
{

    int n;
    int count = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%c ", 'A' + count);
            count++;
        }
        printf("\n");
    }
}

void Q21()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j >= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void Q22()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int count = 1;

        for (int j = 1; j <= n; j++)
        {
            if (j >= i)
            {
                printf("%d", count++);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void Q23()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int count = 1;

        for (int j = 1; j <= n; j++)
        {
            if (j >= i)
            {
                printf("%c", 64 + count++);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void Q24()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j <= i)
            {
                printf("%d", ++count);
            }
            else
            {
                printf("%d", --count);
            }
        }
        printf("\n");
    }
}

void Q25()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j <= i)
            {
                printf("%c", ++count + 64);
            }
            else if (count > 0 && i + j >= n)
            {
                printf("%c", --count + 64);
            }
        }
        printf("\n");
    }
}

void Q26()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= 2 * n - i; j++)
        {
            if (j >= i && i + j <= 2 * n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void Q27()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int count = 1;

        for (int j = 1; j <= 2 * n - i; j++)
        {
            if (j >= i && i + j <= 2 * n)
            {
                printf("%d", count++);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void Q28()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int count = 1;

        for (int j = 1; j <= 2 * n - i; j++)
        {
            if (j >= i && i + j <= 2 * n)
            {
                printf("%c", count++ + 64);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void Q29()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 2*n - 1; i++) {
        
        for (int j = 1; j <= 2*n - 1; j++) {
            
            if (i + j <= n || j - i >=n || i + j >= 3*n || i - j >= n) {
                printf(" ");

            }
            else {
                printf("*");
            }
        }
        printf("\n");
    } 
}

void Q30()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 2*n - 1; i++) {
        
        int count = 0;
        
        for (int j = 1; j <= 2*n - 1; j++) {
            
            if (i + j <= n || j - i >=n || i + j >= 3*n || i - j >= n) {
                printf(" ");

            }
            else {
                if (j <= n) {
                    printf("%c", 64 + (++count));
                }
                else {
                    printf("%c", 64 + (--count));
                }
            }
        }
        printf("\n");
    } 
}

void Q31()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
