#include <iostream>

using namespace std;


int main()
{
    // Local Variable 
    int x;
    int y;
    int n;
    
    int xDivisible;
    int yDivisible;
    
    int currentN;
    
    
    cin >> x >> y >> n;
    
    
    for(currentN = 1; currentN <= n; currentN++)
    {
        // Set the divisible values
        xDivisible = currentN % x;
        yDivisible = currentN % y;
        
        
        if(xDivisible == 0 && yDivisible == 0)
        {
            cout << "FizzBuzz" << endl;
        }
        else
        if(xDivisible == 0 && yDivisible != 0)
        {
            cout << "Fizz" << endl;
        }
        else
        if(xDivisible != 0 && yDivisible == 0)
        {
            cout << "Buzz" << endl;
        }
        else
        {
            cout << currentN << endl;
        }
    }
}
