#include <iostream>
using namespace std;

class Creditcard 
{
        
public:
    double Number;
    double Balance;
       
    
    Creditcard (int a, float b) {Number = a, Balance = b;}
    
};    
    Creditcard operator + (Creditcard C1, Creditcard &C2)
{
    
    Creditcard C3(C1.Number, C1.Balance + C2.Balance);
    C2.Balance = 0;
    return C3;     
}

    




int main()
    {

    Creditcard C1(7896, 200);
    Creditcard C2(1252, 50);
    C1 = C1 + C2; 
    cout << C1.Balance << " : " << C2.Balance << endl;
     

    C2 = C2 + C1;
    cout << C1.Balance << " : " << C2.Balance;
    
    return 0;
}
