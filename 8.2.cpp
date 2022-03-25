#include <iostream>
using namespace std;

class CreditCard 
{
        
public:
    double Number;
    double Balance;
    CreditCard (int a, float b) {Number = a, Balance = b;}
    

    

};

    void Transfer(CreditCard d, CreditCard e, float f)
    {
        if (d.Balance < f)
        {
            cout << "Недостаточный баланс!" << endl;
        }
        else if (d.Number == e.Number)
        {
            cout << "ошибка! Номера карт совпадают" << endl;
        }
        else cout << "Успешно. Остатки на картах: (1) " << d.Balance - f << ", (2) " << e.Balance + f << endl;
        
    }
    
int main()
{

    CreditCard Alpha(2345, 180);
    CreditCard Bravo(1732, 50);
    CreditCard Gamma(1732, 15);
    
    
    Transfer(Bravo, Alpha, 60);   // Недостаточный баланс!
    Transfer(Bravo, Gamma, 10);   // Ошибка! Номера карт совпадают
    Transfer(Bravo, Alpha, 30);   // Успешно. Остатки на картах: (1) 20, (2) 210
    
    return 0;
}
