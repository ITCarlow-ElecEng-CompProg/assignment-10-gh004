/** 555 Timer Astable Multivibrator Calculations
    Gearoid Hanrahan
    C00108964
 */


/**pre processor directives */
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void timer(double R1,double R2,double C1, double *fO, double *D);

/**main function */
int main(void)
{
    double r1=0, r2=0,c1=0,fO=0, D=0;
    double *fO_ptr,*D_ptr;

    fO_ptr = &fO;
    D_ptr = &D;

    cout << "555 Timer " << endl;

    //While loop ensures all values entered are greater than 0
        while (r1 <= 0)
    {
        cout << "Enter a value for R1: ";
        cin >> r1;
    }
        while (r2 <= 0)
    {
        cout << "Enter a value for R2: ";
        cin >> r2;
    }
        while (c1 <= 0)
    {
        cout << "Enter a value for c1: ";
        cin >> c1;
    }
    //Returns value from outside function
    timer(r1,r2,c1,fO_ptr,D_ptr);

    cout << "\n Output Frequency:\t" << *fO_ptr << "hertz" << endl;
    cout << "\n Duty Cycle:      \t" << *D_ptr << "%" << endl;


    return 0;

}

//555 timer function containing sums
void timer(double R1,double R2,double C1, double *fO, double *D)
    {
    *fO = 1.44/ ((R1+(2*R2))*C1);

    *D = (R1+R2)/( R1+(2*R2))*100 ;

    return ;
    }
