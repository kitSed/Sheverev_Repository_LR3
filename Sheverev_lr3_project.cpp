#include <iostream>
#include <cmath>
#include <string> 
#include <algorithm>
#include <ctime>

int A;
int B;
int C;
int D;
int X1;
int X2;

void coofitient_a_of_the_quadratic_equation()
{

}

void coofitient_b_of_the_quadratic_equation()
{

}

void coofitient_c_of_the_quadratic_equation()
{

}

void calculation_of_discriminant()
{

}

void calculating_the_roots_of_the_equation()
{

}


int main()
{
    int c;
    for (;;)
    {
    
    cout << "\nTask 1. Enter the coofitient A of quadratic equation\n";
    cout << "\nTask 2. Enter the coofitient B of quadratic equation\n";
    cout << "\nTask 3. Enter the coofitient C of quadratic equation\n";
    cout << "\nTask 4. Calculate the discriminant of quadratic equation\n";
    cout << "\nTask 5. Calculate the roots of quadratic equation\n";
    cout << "\nPlease enter the number of the desired function or 0 if u want to close the app:\n";
    c = pr_int("\nEnter the number from 0 to 5\n",0,6);
     switch (c)
        {
      
        case 1:
            coofitient_a_of_the_quadratic_equation();
            break;
        case 2:
            coofitient_b_of_the_quadratic_equation();
            break;
        case 3:
            coofitient_c_of_the_quadratic_equation();
            break;
        case 4:
            calculation_of_discriminant();
            break;
        case 5:
            calculating_the_roots_of_the_equation();
            break;
        case 0:
            return 0;
        }
    }
}