#include <iostream>

using namespace std;


    bool isValidVaccinationCode(string code) {
        if (code.length() != 12) {
            return false;
        }
        
        for (int i = 0; i < 3; i++) {
            if(!isupper(code[i])) {
                return false;
            }
        }
        
        for (int i = 3; i < 12; i++) {
            if (!isdigit(code[i])) {
                return false;
            }
        }
        
        return true;
    }

    int main() {
        string code;

        cin >> code;
    
        if (isValidVaccinationCode(code)) {
            cout << "Right Vaccination Code" << endl;
        } else {
            cout << "Wrong Vaccination Code" << endl;
        }
    
        return 0;
    }
