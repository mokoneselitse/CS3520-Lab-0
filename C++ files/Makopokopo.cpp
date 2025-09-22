#include <iostream>
using namespace std;

int main() {
    int litres;
    
    cout << "Enter quantity in litres: ";
    cin >> litres;
    
    int makokopo = litres / 20;      // 20L containers
    int remaining = litres % 20;     // Remaining litres
    
    cout << "Number of makokopo (20L): " << makokopo << endl;
    cout << "Remaining litres: " << remaining << endl;
    
    return 0;
}
