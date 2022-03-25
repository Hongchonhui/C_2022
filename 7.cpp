#include <iostream>
using namespace std;

class Bucket 
{
        
public:
    double volume;
    double used;
    Bucket (int a, int b) {volume = a, used = b;}
    

    
    void flush()
    {
        used = 0;
        
    }
    
    float fill(float c)
    {   
        
        float rest = c - (volume - used); 
        used = used + c;   
        
        if (used >= volume) {
            used = volume;
        } 
        if (rest <= 0)
        {
            rest = 0;
        }
        return rest;    
        
        
    }
private:

    
};


int main()
{

     Bucket test_01(12, 3);
     cout << "1) " << test_01.volume << ", " << test_01.used << "\n";

     int rest = test_01.fill(14);
     cout << "2) " << test_01.used << ", " << rest << "\n";

     test_01.flush();
     rest = test_01.fill(8);
     cout << "3) " << test_01.used << ", " << rest << "\n";
    
    
    
    return 0;
}
