#include <iostream>
using namespace std;
// Butterfly pattern
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
            cout << "*";
        }
        
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "    ";
            
        }
        for (int j = 0; j < i + 1; j++)
            {
                cout << " ";
                cout << "*";
            }
        
        cout << endl;
    }
    // bottom
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
            cout << "*";
        }
        cout << endl;
        
    }

    return 0;
}