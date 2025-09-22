#include <iostream>
#include <string>
using namespace std;

int main() {
    int dayNumber;
    string days[] = {
        "Mantaha",  // Monday (1)
        "Labobeli",     // Tuesday (2)
        "Laboraro",     // Wednesday (3)
        "Labone",       // Thursday (4)
        "Labohlano",    // Friday (5)
        "Moqebelo",     // Saturday (6)
        "Sontaha"       // Sunday (7)
    };
    
    cout << "Enter a number (1-7): ";
    cin >> dayNumber;
    
    if (dayNumber < 1 || dayNumber > 7) {
        cout << "Error: Invalid input. Please enter 1-7." << endl;
    } else {
        cout << days[dayNumber - 1] << endl;
    }
    
    return 0;
}
