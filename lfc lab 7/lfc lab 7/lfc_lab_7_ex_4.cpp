//#include <iostream>
//#include <map>
//#include <set>
//#include <string>
//using namespace std;
//
//int main() 
//{
//    // definim alfabetul si starile DFA-ului
//    set<char> alfabet = { '0', '1' };
//    set<string> stari_finale = { "q3" };
//    string stare_initiala = "q0";
//
//    // tranzitii: delta[(stare, simbol)] = stare_urmatoare
//    map<pair<string, char>, string> delta = 
//    {
//        {{"q0", '0'}, "q1"},
//        {{"q0", '1'}, "q2"},
//        {{"q1", '0'}, "q3"},
//        {{"q1", '1'}, "q2"},
//        {{"q2", '0'}, "q1"},
//        {{"q2", '1'}, "q3"},
//        {{"q3", '0'}, "q3"},
//        {{"q3", '1'}, "q3"}
//    };
//
//    // citire sir 
//    string input;
//    cout << "introduceti un sir binar (format din 0 si 1): ";
//    cin >> input;
//
//    // validare si simulare
//    string stare_curenta = stare_initiala;
//    for (char symbol : input) 
//    {
//        if (!alfabet.count(symbol)) 
//        {
//            cout << "Eroare: simbol invalid in sir: " << symbol << endl;
//            return 1;
//        }
//
//        stare_curenta = delta[{stare_curenta, symbol}];
//    }
//
//    // verificare daca starea finala este acceptata
//    if (stari_finale.count(stare_curenta)) 
//    {
//        cout << "sirul este ACCEPTAT de DFA." << endl;
//    }
//    else 
//    {
//        cout << "sirul NU este acceptat de DFA." << endl;
//    }
//
//    return 0;
//}
