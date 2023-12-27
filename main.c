/*  Ishika Singh Chauhan    -   20070123020 - A2
    Pinakci Kathotia        -   20070123035 - A2
    Namrata Makhija         -   20070123078 - B1    */
#include <stdio.h> 
#include <math.h> 

void squares (int x1)                           // function prototype with formal parameter in function defintion
{
    int sq;
    sq = x1 * x1;
    printf("%d * %d = %d \n", x1, x1, sq);
    
    if(x1>0)
    {
        double sqt;
        sqt = sqrt((double) x1);              //explicit conversion to float
        printf("Square Root (√) %d = %1f \n", x1, sqt);
    }
    else 
    {
        printf("Square Root (√) %d = Complex Number \n", x1);
    }
}

void cubes (int x1)
{
    int cu;
    cu = x1 * x1 * x1;
    printf("%d * %d * %d = %d \n", x1, x1, x1, cu);

    double cbt;
    cbt = cbrt((double) x1);              //explicit conversion to float
    printf("Cube Root (∛) %d = %1f \n", x1, cbt);
}

void fact (int x1)
{
    int fct = 1, i;
    if (x1 >= 1)
    {
        for (i=1; i<=x1; i++)
        {
            fct *= i;
        }
        printf("%d! = %d \n", x1, fct);
    }
    else
    {
        printf("%d! = not possible \n", x1);
    }
}

void smn1 (int x1)
{
    int sum = 0, i;
    if (x1 > 0)
    {
        for (i=0; i<=x1; i++)
        {
            sum += i;
        }
        printf("Summation (Σ) %d = %d \n", x1, sum);
    }
    else
    {
        printf("Summation (Σ) %d = not possible \n", x1);
    }
}

void pnc1 (int x1)
{
    int fct = 1, i;
    if (x1 >= 1)
    {
        for (i=1; i<=x1; i++)
        {
            fct *= i;
        }

        printf("%dC0 = 1 \n", x1);
        printf("%dC1 = %d \n", x1, x1);
        printf("%dC%d = 1 \n", x1, x1);
        printf("%dP0 = 1 \n", x1);
        printf("%dP1 = %d \n", x1, x1);
        printf("%dP%d = %d \n", x1, x1, fct);
    }
    else
    {
        printf("%dC0 = not possible \n", x1);
        printf("%dC1 = not possible \n", x1);
        printf("%dC%d = not possible \n", x1, x1);
        printf("%dP0 = not possible \n", x1);
        printf("%dP1 = not possible \n", x1);
        printf("%dP%d = not possible \n", x1, x1);
    }   
}

void add (int x1, int x2)
{
    int sum;
    sum = x1 + x2;
    printf("%d + %d = %d \n", x1, x2, sum);
}

void sub (int x1, int x2)
{
    int diff1, diff2;
    diff1 = x1 - x2;
    printf("%d - %d = %d \n", x1, x2, diff1);
    diff2 = x2 - x1;
    printf("%d - %d = %d \n", x2, x1, diff2);
}

void mul (int x1, int x2)
{
    int pro;
    pro = x1 * x2;
    printf("%d * %d = %d \n", x1, x2, pro);
}

void div (int x1, int x2)
{
    float divi1, divi2;
    divi1 = (float) x1 / (float) x2;          //explicit conversion to float
    printf("%d / %d = %1f \n", x1, x2, divi1);
    divi2 = (float) x2 / (float) x1;          //explicit conversion to float
    printf("%d / %d = %1f \n", x2, x1, divi2);
}

void smn2 (int x1, int x2)
{
    int sum = 0, i;
    if (x1 < x2)
    {
        for (i=x1; i<=x2; i++)
        {
            sum += i;
        }
        printf("Summation (Σ) %d to %d = %d \n", x1, x2, sum);
    }
    else if (x1 > x2)
    {
        for (i=x2; i<=x1; i++)
        {
            sum += i;
        }
        printf("Summation (Σ) %d to %d = %d \n", x2, x1, sum);
    }
}

void pnc2 (int x1, int x2)
{
    double ncr, npr;
    int n = 1, r = 1, nr = 1, i, diff = x1-x2;

    if (x1 >= 1 && x2 >= 1)
    {
        for (i=1; i<=x1; i++)
        {
            n *= i;
        }

        for (i=1; i<=x2; i++)
        {
            r *= i;
        }

        if (diff>0)
        {
            for (i=1; i<=diff; i++)
            {
                nr *= i;
            }   
            ncr = (double) n / ( (double) r * (double) nr );
            npr = (double) n / (double) r;
            printf("%dC%d = %1f \n", x1, x2, ncr);
            printf("%dP%d = %1f \n", x1, x2, npr);

            printf("%dC0 = 1 \n", x1);
            printf("%dC1 = %d \n", x1, x1);
            printf("%dC%d = 1 \n", x1, x1);
            printf("%dP0 = 1 \n", x1);
            printf("%dP1 = %d \n", x1, x1);
            printf("%dP%d = %d \n", x1, x1, n);

            printf("%dC0 = 1 \n", x2);
            printf("%dC1 = %d \n", x2, x2);
            printf("%dC%d = 1 \n", x2, x2);
            printf("%dP0 = 1 \n", x2);
            printf("%dP1 = %d \n", x2, x2);
            printf("%dP%d = %d \n", x2, x2, r);
        }
        else if (diff<0)
        {
            printf("%dC%d = not possible \n", x1, x2);
            printf("%dP%d = not possible \n", x1, x2);

            printf("%dC0 = 1 \n", x1);
            printf("%dC1 = %d \n", x1, x1);
            printf("%dC%d = 1 \n", x1, x1);
            printf("%dP0 = 1 \n", x1);
            printf("%dP1 = %d \n", x1, x1);
            printf("%dP%d = %d \n", x1, x1, n);

            printf("%dC0 = 1 \n", x2);
            printf("%dC1 = %d \n", x2, x2);
            printf("%dC%d = 1 \n", x2, x2);
            printf("%dP0 = 1 \n", x2);
            printf("%dP1 = %d \n", x2, x2);
            printf("%dP%d = %d \n", x2, x2, r);
        }
    }
    else if  (x1 < 1)
    {
        printf("%d! = not possible \n", x1);
    }
    else if  (x2 < 1)
    {
        printf("%d! = not possible \n", x2);
    }

    
}

int main()
{
    int choice, n1, n2;

    printf ("How many numbers would you like to enter: 1 or 2 \n");
    scanf ("%d", &choice);

    if (choice == 1)
    {   
        printf ("Enter the number \n");
        scanf ("%d", &n1);

        squares(n1);                            // argument or actual parameter in function call statement
        cubes(n1);
        smn1(n1);
        fact(n1);
        pnc1(n1);
    }

    else if (choice == 2)
    {   
        printf ("Enter the first number \n");
        scanf ("%d", &n1);
        printf ("Enter the second number \n");
        scanf ("%d", &n2);

        add(n1, n2);
        sub(n1, n2);
        mul(n1, n2);
        div(n1, n2);
        smn2(n1, n2);
        pnc2(n1,n2);
    }
    return 0;
}