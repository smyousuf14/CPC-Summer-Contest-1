#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Local Variable list
    int numberOfCommands;
    int indexNumber;
    string checkValue;
    
    cin >> numberOfCommands;
    
    string commands[numberOfCommands];
    
    // Clear the input and move to the next line.
    cin.clear();
    cin.ignore(10000, '\n');
    
    // Now accept all the commands.
    for(indexNumber = 0; indexNumber < numberOfCommands; indexNumber++)
    {
        getline(cin, commands[indexNumber]);
    }
    
    // Now check each input and perform appropriate action.
    for(indexNumber = 0; indexNumber < numberOfCommands; indexNumber++)
    {
        checkValue = commands[indexNumber].substr(0, 9);
        
        // Check the value.
        if(checkValue == "Simon says")
        {
            cout << commands[indexNumber].substr(10, commands[indexNumber].length());
        }
    }
    
    return 0;
}
