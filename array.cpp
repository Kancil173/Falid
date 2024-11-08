// muhammad falid faqqy
#include <iostream>
using namespace std;
int main() {
    int arr[10] = {80, 76, 87, 10, 67, 90, 77, 54, 9, 32};
    
    cout<<"Datta dalam array:" <<endl;
    for(int i = 0; i<10; i++){
        cout<<"Elemen ke-" <<(i+1)<<":"<<arr[i]<<endl;
    }

    return 0;
}