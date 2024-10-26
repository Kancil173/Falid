#include <iostream>
using namespace std;

  int main() {
    cout << "Bilangan" << endl;
    cout << "Ganjil : ";
    
    for (int i = 1; i <= 35; i += 2) {  
        cout << i << " ";
    }
    cout << endl << "Genap  : ";
    
    int j =2;
    while (j <= 34) {
        cout << j << " ";
        j += 2;
    }
    cout<<"---------------------------";

    
    return 0;
}