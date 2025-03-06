//#include <iostream>
//#include <string>
//using namespace std;
//
//enum Stare { q0, q1, q2, q3, q4 };  
//enum Input { C, T, A, H, OK };      
//
//class Automat_cafea {
//
//public:
//	Stare state;  // curenta
//    Automat_cafea() : state(q0) {}  // initial
//
//    Stare get_State() const {
//        return state;
//    }
//
//    void transition(Input input) {
//        switch (state) {
//        case q0:
//            switch (input) {
//            case C: state = q1; cout << "Ai selectat cafeaua.\n"; break;
//            case T: state = q2; cout << "Ai selectat ceaiul.\n"; break;
//            case A: state = q3; cout << "Ai selectat cappuccino.\n"; break;
//            case H: state = q4; cout << "Ai selectat ciocolata calda.\n"; break;
//            default: cout << "Comanda invalida!\n"; break;
//            }
//            break;
//
//        case q1:
//        case q2:
//        case q3:
//        case q4:
//            if (input == OK) {
//                state = q4;  
//                cout << "Comanda a fost finalizata.\n";
//            }
//            else {
//                cout << "Comanda invalida. Apasa OK pentru confirmare.\n";
//            }
//            break;
//
//        default:
//            cout << "Stare invalida.\n";
//        }
//    }
//
//    void reset() {
//        state = q0;
//        cout << "Automatul este acum in starea initiala. Alege o alta bautura.\n";
//    }
//
//    void starea_curenta() {
//        switch (state) {
//        case q0: cout << "Alege o bautura.\n"; break;
//        case q1: cout << "Ai selectat cafeaua.\n"; break;
//        case q2: cout << "Ai selectat ceaiul.\n"; break;
//        case q3: cout << "Ai selectat cappuccino.\n"; break;
//        case q4: cout << "Comanda este finalizata.\n"; break;
//        default: cout << "Stare invalida.\n"; break;
//        }
//    }
//};
//
//
//int main() {
//
//    Automat_cafea automat;
//    string input;
//
//
//    while (true) {
//        automat.starea_curenta();
//        cout << "Introdu o comanda: \n";
//        cout << "C pentru cafea \n";
//        cout << "T pentru ceai \n";
//        cout << "A pentru cappuccino \n";
//        cout << "H pentru ciocolata calda \n";
//        cout << "OK pentru confirmare \n";
//        cout << "exit pentru a incheia \n";
//        cin >> input;
//
//        if (input == "exit") {
//            break;
//        }
//
//        if (input == "C") {
//            automat.transition(C);
//        }
//        else if (input == "T") {
//            automat.transition(T);
//        }
//        else if (input == "A") {
//            automat.transition(A);
//        }
//        else if (input == "H") {
//            automat.transition(H);
//        }
//        else if (input == "OK") {
//            automat.transition(OK);
//        }
//        else {
//            cout << "Comanda invalida.\n";
//        }
//
//        if (automat.state == q4) {
//            automat.reset();
//        }
//    }
//
//    return 0;
//}
