#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    // Local Variable
    int k;
    string yourAnswers;
    string friendAnswers;
    bool isSame = false;
    int sameNumber = 0;
    int maxRight;
    
    
    // Accept input from the user.
    cin >> k;
    cin >> yourAnswers;
    cin >> friendAnswers;
    
    int indexNumber; 
    int indexNumber2;
    for(indexNumber =0; indexNumber < yourAnswers.length(); indexNumber++)
    {
        for(indexNumber2 = 0; indexNumber2 < friendAnswers.length(); indexNumber2++)
        {
            if(yourAnswers.substr(indexNumber) == friendAnswers.substr(indexNumber2))
            {
                isSame = true;
                sameNumber++;
            }
            
        }
    }
    
    // now determine the max number of questions you got right
    if(isSame)
    {
        maxRight = yourAnswers.length() - (sameNumber - k);
    }
    else
    {
        maxRight = yourAnswers.length() - k;
    }
    
    cout << maxRight << endl;
}
