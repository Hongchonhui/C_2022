#include <iostream>

using namespace std;

int main()
{
    int a;
    float b;
    double c;
    long d;
    float s, v, e, f;
    cin >> a >> b >> c>> d;
    s = a + b;
    v = c / d;
    e = b * c;
    f = a - d;
    cout << "sum=" << s << endl;
    cout << "division=" << v << endl;
    cout << "multi=" << e << endl;
    cout << "difference=" << f << endl;
    return 0;
}
