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
    
    void fill()
    {
        if(volume == used)
        {
            cout << 0 << endl;
        }
        else {
            cout << "Разница:" << volume - used << endl;
            used = volume;
            cout << "Bедро заполнилось" << endl;
            
        }
        
    }
private:

    
};


int main()
{
    Bucket firstBucket(10, 5);
    // firstBucket.volume = 10;
    // firstBucket.used = 5;
    firstBucket.flush();
    cout << "В ведре " << firstBucket.used << "литр осталось" << endl;

    
    Bucket secondBucket(10, 10);
    // secondBucket.volume = 10;
    // secondBucket.used = 10;
    secondBucket.fill();
    
    Bucket thirdBucket(10, 8);
    // thirdBucket.volume = 10;
    // thirdBucket.used = 8;
    thirdBucket.fill();
    
    
    
    return 0;
}
