#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string returnInput;
    
    cout << "Enter an input:" << endl;
    cin >> returnInput;
    
    for (int i = 0; i < returnInput.length(); i++)
    {
        if (i % 2 != 0)
        {
            returnInput[i] = toupper(returnInput[i]);
        }
    }
    cout << "Returned input:\n" << returnInput << endl;
}
