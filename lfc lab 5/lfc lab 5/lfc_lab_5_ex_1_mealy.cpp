//#include <iostream>
//#include <string>
//using namespace std;
//
//class traffic_mealy {
//
//private:
//
//    string stare_curenta;
//
//public:
//
//    traffic_mealy() {
//        stare_curenta = "S0"; 
//    }
//
//    int tranzitii(int A, int B) {
//        string input = to_string(A) + to_string(B);
//        int output = 0;
//
//        if (stare_curenta == "S0") {
//            if (input == "00") {
//                stare_curenta = "S0";
//                output = 0;
//            }
//            else if (input == "01" || input == "11") {
//                stare_curenta = "S1";
//                output = 1;
//            }
//            else if (input == "10") {
//                stare_curenta = "S0";
//                output = 0;
//            }
//        }
//        else if (stare_curenta == "S1") {
//            if (input == "00") {
//                stare_curenta = "S0";
//                output = 0;
//            }
//            else if (input == "01" || input == "11") {
//                stare_curenta = "S1";
//                output = 1;
//            }
//            else if (input == "10") {
//                stare_curenta = "S0";
//                output = 0;
//            }
//        }
//
//        return output;
//    }
//};
//
//int main() {
//
//    traffic_mealy TC;
//    int A, B;
//
//    cout << "introdu semnalele (A B); -1 -1 exit:\n";
//
//    while (true) 
//    {
//        cin >> A >> B;
//        if (A == -1 && B == -1) break;
//
//        int output = TC.tranzitii(A, B);
//
//        cout << "output " << output << endl;
//    }
//
//    return 0;
//}
