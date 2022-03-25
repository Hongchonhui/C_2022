#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    int s = 0;
    while (i < 1000)
    {
        if (i % 4 == 1) {
           cout << i << endl;
            }
            
        if (i % 7 == 0) {
           s += i;
       }  

       ++i;
       
    }
    cout << "sum=" << s << endl;
    return 0;
}
