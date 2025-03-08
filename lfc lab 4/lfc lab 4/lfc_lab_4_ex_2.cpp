//#include <iostream>
//#include <string>
//
//using namespace std;
//
//enum Stare { S1, S2 };
//
//class Masina_Moore {
//private:
//    Stare stare_curenta;
//
//public:
//    Masina_Moore() {
//        stare_curenta = S1;  
//    }
//
//    void tranzitie(char input) {
//        switch (stare_curenta) {
//        case S1:
//            if (input == 'A') {
//                stare_curenta = S1;
//            }
//            else if (input == 'B') {
//                stare_curenta = S2;
//            }
//            break;
//
//        case S2:
//            if (input == 'A') {
//                stare_curenta = S1;
//            }
//            else if (input == 'B') {
//                stare_curenta = S2;
//            }
//            break;
//        }
//    }
//
//    void output() {
//        if (stare_curenta == S1) {
//            cout << "Output: O1" << endl;
//        }
//        else {
//            cout << "Output: O2" << endl;
//        }
//    }
//
//    void procesare_input(const string& input_secventa) {
//        for (char input : input_secventa) {
//            tranzitie(input);
//            output();
//        }
//    }
//};
//
//int main() {
//    Masina_Moore MM;
//    string sec_input;
//
//    cout << "introdu secventa de intrare (a sau b): ";
//    cin >> sec_input;
//
//    MM.procesare_input(sec_input);
//
//    return 0;
//}
