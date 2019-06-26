#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Local Variable list
    int numberOfCommands;
    int indexNumber;
    
    cin >> numberOfCommands;
    
    string commands[numberOfCommands];
    
    // Now accept all the commands.
    for(indexNumber = 0; indexNumber < numberOfCommands; indexNumber++)
    {
        getline(cin, commands[indexNumber]);
        cout << indexNumber<< endl;
    }
}
