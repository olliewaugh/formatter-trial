#include <iostream>
using namespace std;

int main()
{
    for (int i=3; i<8; i++) cout << i*10 << " ";
    cout << "Making a change in red" << endl;
    cout << endl;
    cout << "And another red change" << endl;
    cout << "Making some trouble from the black branch" << endl;
    cout << "More and more changes" << endl;
    for (int i=0; i<10; i++)
    {
        cout << "Large amount of changes" << endl;
        cout << "More and more master lines" << endl;
        
        cout << "Even need master lines in between" << endl;
    }
    
    cout << "A large set of changes" << endl;
    
    int n = 100;
    for (int i=1; i<=n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " is a factor of " << n << endl;
        }
    }
    
    return 0;
}