#include <iostream>
using namespace std;
int main()
{
    int numRows;
    cout << "Enter the number of rows for the pattern: ";
    cin >> numRows;

    for (int i = 1; i <= numRows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
