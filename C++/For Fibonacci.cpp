#include <iostream>

using namespace std;

int main()
{
    // f(n) = f(1) + f(2)
    
    int n;
    int fn;
    int fn1;
    int fn2;
    
    cout << "Program Deret Fibonacci \n";
    cout << "Masukan nilai ke-n: ";
    cin >> n;
    
    fn1=0;
    fn2=1;
    cout << fn1 << " ";
    cout << fn2 << " ";
    
    for(int i=1; i<=n; i++){
        fn=fn1+fn2;
        fn1=fn2;
        fn2=fn;
        cout << fn << " "; 
    }
    printf("\n");
    
    system("pause");
    return 0;
}
