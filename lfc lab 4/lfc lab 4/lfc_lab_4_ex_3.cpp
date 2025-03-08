//#include <iostream>
//#include <string>
//
//using namespace std;
//
//enum Stari { Q1, Q2 };
//
//class Masina_Mealy {
//private:
//    Stari stari_curente;
//
//public:
//    Masina_Mealy() {
//        stari_curente = Q1;
//    }
//
//    void procesare_input(string input) {
//        for (char c : input) {
//            if (c == 'X') {
//                if (stari_curente == Q1) {
//                    cout << "O1 ";
//                    stari_curente = Q2;
//                }
//                else {
//                    cout << "O2 ";
//                    stari_curente = Q1;
//                }
//            }
//            else if (c == 'Y') {
//                if (stari_curente == Q1) {
//                    cout << "O1 ";
//                }
//                else {
//                    cout << "O2 ";
//                }
//            }
//            else {
//                cout << "\ncaracter invalid: " << c << endl;
//            }
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    Masina_Mealy MM;
//    string input;
//
//    cout << "introdu un sir de intrare (X sau Y): ";
//    cin >> input;
//
//    cout << "output: ";
//    MM.procesare_input(input);
//
//    return 0;
//}
