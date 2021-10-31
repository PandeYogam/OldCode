#include <iostream>
  
using namespace std;
  
int main() {
    int i,j,n;
 
    cout << "Masukkan nilai N: ";
    cin >> n;
 
    for (i=1;i<=n;i++) {
        for (j=i;j<n;j++) {
            cout << " "; // segitiga kiri
        }
         
        for (j=1;j<=i;j++) {
            cout << "*"; // segitiga kanan
        }
        cout << endl;
    }
  
    return 0;
}
