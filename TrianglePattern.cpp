#include <iostream>
using namespace std;
 
// Function to demonstrate printing pattern
void triangle(int n)
{
    int i, j, k = n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j >= k)
                cout << "* ";
            else
                cout << " ";
        }
        k--;
        cout << "\n";
    }
}
 
// Driver Code
int main()
{
    int n = 5;
    triangle(n);
    return 0;
}
