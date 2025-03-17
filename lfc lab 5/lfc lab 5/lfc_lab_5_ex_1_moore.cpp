//#include <iostream>
//#include <string>
//using namespace std;
//
//class trafic_moore 
//{
//private:
//
//    string stare_curenta;
//
//public:
//
//    trafic_moore() 
//    {
//        stare_curenta = "S0"; 
//    }
//
//    void tranzitii(int A, int B) 
//    {
//        string input = to_string(A) + to_string(B);
//
//        if (stare_curenta == "S0") {
//            if (input == "00" || input == "10") {
//                stare_curenta = "S0"; 
//            }
//            else if (input == "01" || input == "11") {
//                stare_curenta = "S1";
//            }
//        }
//        else if (stare_curenta == "S1") {
//            if (input == "00" || input == "10") {
//                stare_curenta = "S0";
//            }
//            else if (input == "01" || input == "11") {
//                stare_curenta = "S1"; // ramane in s1
//            }
//        }
//    }
//
//    int output() 
//    {
//        return (stare_curenta == "S1") ? 1 : 0;
//    }
//};
//
//int main() 
//{
//    trafic_moore TC;
//    int A, B;
//
//    cout << "introdu semnalele (A B); -1 -1 exit:\n";
//
//    while (true) 
//    {
//        cin >> A >> B;
//        if (A == -1 && B == -1) break;
//
//        TC.tranzitii(A, B);
//
//        cout << "output: " << TC.output() << endl;
//    }
//
//    return 0;
//}
