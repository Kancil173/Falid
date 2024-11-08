// muhammad falid faqqy
#include <iostream>
using namespace std;
int main() {
    int arr[5]={10, 20, 30, 40, 50};
    
    cout<<"Elemen-elemen dalam array:" <<endl;
    for (int i=0; i<5;i++){
        cout<<"arr["<<i<<"]=" <<arr[i] <<endl;
}

    arr[2]=35;
    
    cout<<"\nSetelah mengubah nilai elemen ke-3:"<<endl;
    for (int i=0; i<5;i++){
        cout<<"arr["<<i<<"]=" <<arr[i] <<endl;
    }
    return 0;
}