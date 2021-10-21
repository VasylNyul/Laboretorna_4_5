
#include <iostream>
#include <iomanip>
#include <time.h>
#include <cmath>
using namespace std;
int main()
{
    double x, y, R = 0.0;
    srand((unsigned) time(NULL));
    for (int i=0; i<10; i++)
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;
        cout << "R = "; cin >> R;
     
        if ( (((pow(x+R, 2) + pow(y-R, 2)) <= R*R) || ( y<=0 && y>=-R && x>=0 && x<=2*R)) )
           cout << "yes" << endl;
           
           else
           cout << "no" << endl;
    }
   cout << endl << fixed;

  for (int i=0; i<10; i++)
  {
        x = 6.*rand()/RAND_MAX - 3;
        y = 6.*rand()/RAND_MAX - 3;
        R = 6.*rand()/RAND_MAX - 3;
   if ( (((pow(x+R, 2) + pow(y-R, 2)) <= R*R) || ( y<=0 && y>=-R && x>=0 && x<=2*R)) )

       cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "yes" << endl;
      
      else
       cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "no" << endl;
  }
return 0;
    
}
