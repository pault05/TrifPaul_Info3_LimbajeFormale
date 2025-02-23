//#include <iostream>
//#include <map>
//#include <vector>
//
//using namespace std;
//
////stari posibile
//enum Stare { q0, q1, q2, q3 };
//
//// bazat pe oop
//class Finite_Automata {
//private:
//    map<pair<Stare, int>, Stare> tabel_tranzitie;
//    Stare stare_curenta;
//    Stare stare_finala = q3;
//
//public:
//    Finite_Automata() {
//        
//        tabel_tranzitie[{q0, 0}] = q1;
//        tabel_tranzitie[{q0, 1}] = q2;
//        tabel_tranzitie[{q1, 0}] = q1;
//        tabel_tranzitie[{q1, 1}] = q3;
//        tabel_tranzitie[{q2, 0}] = q3;
//        tabel_tranzitie[{q2, 1}] = q2;
//        tabel_tranzitie[{q3, 0}] = q3;
//        tabel_tranzitie[{q3, 1}] = q3;
//
//        stare_curenta = q0;
//    }
//
//    //input
//    void procesare_input(vector<int> input) {
//        for (int simbol : input) {
//            stare_curenta = tabel_tranzitie[{stare_curenta, simbol}];
//            cout << "Tranzitie: " << simbol << " -> Stare curenta: q" << stare_curenta << endl;
//        }
//    }
//
//    // final?
//    bool e_acceptat() {
//        return stare_curenta == stare_finala;
//    }
//};
//
//int main() {
//    Finite_Automata FA;
//
//   // vector pt input
//    vector<int> input = { 1, 1, 0, 1 };
//
//    FA.procesare_input(input);
//
//    if (FA.e_acceptat()) {
//        cout << "este in q3 => accept" << endl;
//    }
//    else {
//        cout << "nu e in q3 => respins" << endl;
//    }
//
//    return 0;
//}
