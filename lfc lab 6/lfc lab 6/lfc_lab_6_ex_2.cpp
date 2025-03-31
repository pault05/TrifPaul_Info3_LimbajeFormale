//#include <iostream>
//#include <set>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//set<string> input_limbaj(const string& prompt) 
//{
//    set<string> limbaj;
//    int n;
//    cout << prompt << "\n";
//    cout << "numarul de cuvinte: ";
//    cin >> n;
//    cout << "cuvintele:\n";
//    for (int i = 0; i < n; i++) {
//        string cuv;
//        cin >> cuv;
//        limbaj.insert(cuv);
//    }
//    return limbaj;
//}
//
//
//set<string> reuniune(const set<string>& L1, const set<string>& L2) 
//{
//    set<string> rezultat = L1;
//    rezultat.insert(L2.begin(), L2.end());
//    return rezultat;
//}
//
//set<string> intersectie(const set<string>& L1, const set<string>& L2) 
//{
//    set<string> rezultat;
//    for (const auto& cuv : L1) {
//        if (L2.find(cuv) != L2.end()) {
//            rezultat.insert(cuv);
//        }
//    }
//    return rezultat;
//}
//
//set<string> diferenta(const set<string>& L1, const set<string>& L2) 
//{
//    set<string> rezultat = L1;
//    for (const auto& cuv : L2) {
//        rezultat.erase(cuv);
//    }
//    return rezultat;
//}
//
//set<string> concatenare(const set<string>& L1, const set<string>& L2) 
//{
//    set<string> rezultat;
//    for (const auto& cuv1 : L1) {
//        for (const auto& cuv2 : L2) {
//            rezultat.insert(cuv1 + cuv2);
//        }
//    }
//    return rezultat;
//}
//
//set<string> kleen(const set<string>& L) 
//{
//    set<string> rezultat = { "" }; // vid 
//    for (int i = 0; i < 3; i++) { 
//        set<string> temp = rezultat;
//        for (const auto& cuv1 : temp) {
//            for (const auto& cuv2 : L) {
//                rezultat.insert(cuv1 + cuv2);
//            }
//        }
//    }
//    return rezultat;
//}
//
//void afisare_limbaj(const set<string>& lang, const string& label)
//{
//    cout << label << " = { ";
//    for (auto it = lang.begin(); it != lang.end(); ++it) {
//        if (it != lang.begin()) cout << ", ";
//        cout << *it;
//    }
//    cout << " }\n";
//}
//
//int main() {
//    set<string> L1 = input_limbaj("limbajul L1");
//    set<string> L2 = input_limbaj("limbajul L2");
//
//    while (true) 
//    {
//        cout << "\nalege o operatie:\n";
//        cout << "1. reuniune (L1 ∪ L2)\n";
//        cout << "2. intersectie (L1 ∩ L2)\n";
//        cout << "3. diferenta (L1 - L2)\n";
//        cout << "4. concatenare (L1 ∘ L2)\n";
//        cout << "5. kleene closure (* pe L1)\n";
//        cout << "6. exit\n";
//
//        int optiune;
//        cin >> optiune;
//
//        switch (optiune) {
//        case 1:
//            afisare_limbaj(reuniune(L1, L2), "L1 U L2");
//            break;
//        case 2:
//            afisare_limbaj(intersectie(L1, L2), "L1 n L2");
//            break;
//        case 3:
//            afisare_limbaj(diferenta(L1, L2), "L1 - L2");
//            break;
//        case 4:
//            afisare_limbaj(concatenare(L1, L2), "L1 o L2");
//            break;
//        case 5:
//            afisare_limbaj(kleen(L1), "L1*");
//            break;
//        case 6:
//            return 0;
//        default:
//            cout << "ERROR!\n";
//        }
//    }
//}
