//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Auto_Park {
//private:
//    int total_locuri;
//    vector<bool> locuri; 
//
//public:
//    Auto_Park(int n) : total_locuri(n), locuri(n, false) {}
//
//    void status_parcare() {
//        cout << "status parcare: ";
//        for (int i = 0; i < total_locuri; i++) {
//            cout << (locuri[i] ? "[1] " : "[0] ");
//        }
//        cout << endl;
//    }
//
//    bool parcheaza_masina() {
//        for (int i = 0; i < total_locuri; i++) {
//            if (!locuri[i]) {
//                locuri[i] = true;
//                cout << "ai parcat masina in locul " << i + 1 << endl;
//                return true;
//            }
//        }
//        cout << "parcarea este plina!" << endl;
//        return false;
//    }
//
//    bool scoate_masina(int loc) {
//        if (loc < 1 || loc > total_locuri || !locuri[loc - 1]) {
//            cout << "loc inexistent sau deja liber!" << endl;
//            return false;
//        }
//        locuri[loc - 1] = false;
//        cout << "masina fost scoasa de pe locul " << loc << endl;
//        return true;
//    }
//};
//
//int main() {
//    int n;
//    cout << "numar total locuri de parcare: ";
//    cin >> n;
//
//    Auto_Park parcare(n);
//    int decizie_parcare, loc;
//
//    do {
//        cout << "\n1. starea parcarii\n2. parcheaza masina\n3. scoate masina\n4. exit\n";
//        cout << "optiune: ";
//        cin >> decizie_parcare;
//
//        switch (decizie_parcare) {
//        case 1:
//            parcare.status_parcare();
//            break;
//        case 2:
//            parcare.parcheaza_masina();
//            break;
//        case 3:
//            cout << "din ce loc plecati?: ";
//            cin >> loc;
//            parcare.scoate_masina(loc);
//            break;
//        case 4:
//            break;
//        default:
//            cout << "eroare!" << endl;
//        }
//    } while (decizie_parcare != 4);
//
//    return 0;
//}
