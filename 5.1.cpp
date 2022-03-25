#include <iostream>
#include <cmath>
using namespace std;

double SquaredSum(double p, double q) {
  double w;
  w = pow ((p + q), 2);
  return w;
  
}
 
int main()
{
    double a, b, c, d;
    cout << "первая дробь:"<<endl;
    cin >> a >> b;
    cout << "вторая дробь:"<<endl;
    cin >> c >> d;
    
    double e, f;
    e = a / b;
    f = c / d;
    cout << SquaredSum(e, f) << endl;
     
    return 0;
}
