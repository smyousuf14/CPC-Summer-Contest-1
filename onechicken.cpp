#include <iostream>

using namespace std;

int main()
{
    int n;
    int m;
    int output;
    string piece;
    
    cin >> n >> m;
    
    output = m - n;
    
    if(output == 1)
    {
        piece = "piece";
    }
    else
    {
        piece = "pieces";
    }
    
    // Print out the result
    if(n > 1000)
    {
        // Nothing
    }
    else
    if(m > 1000)
    {
        // Nothing
    }
    if(output > 0)
    {
        cout << "Dr. Chaz will have " << output << " " << piece << " of chicken left over!";    
    }
    else
    if(output < 0)
    {
        cout << "Dr. Chaz needs " << -output << " " << piece << " more pieces of chicken!";
    }
    
}
