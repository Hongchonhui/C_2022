#include <iostream>
using namespace std;

class CreditCard 
{
        
public:
    int Number;
    float Balance;
    CreditCard (int a, float b) {Number = a, Balance = b;}
    

    
    void Put(float c)
    {
        Balance += c;
        
    }
    
    void Take(float d)
    {
        Balance -= d;
        
    }
private:

    
};


int main()
{
    CreditCard firstCC(1234, 50);
    firstCC.Put(200);
    cout << firstCC.Balance << endl;
    firstCC.Take(100);
    cout << firstCC.Balance << endl;
    
    return 0;
}
