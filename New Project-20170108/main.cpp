#include <iostream>

using namespace std;

int main()
{
    int ar[5] = {10, 2, 1, 16, 20};
    int i;
    int sum;
    
    for (i = 0; i< 5; i++) {
        cout << ar[i];
        if (ar[i] % 2 == 0) {
            cout << " -chetno";
            sum = sum + ar[i];
        } else {
            cout << " -nechetno";
        }
        cout << endl;
        cout << "Sumata na chetnite chisla e " << sum << endl;
    }
   
   return 1;
}

