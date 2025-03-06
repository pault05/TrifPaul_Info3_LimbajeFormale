//#include <iostream>
//#include <map>
//#include <vector>
//#include <set>
//#include <queue>
//
//using namespace std;
//
//// starile posibile ale automatului
//enum Stare { q0, q1, q2 };
//
//class NFA {
//private:
//    map<pair<Stare, char>, set<Stare>> tabel_tranzitie;
//    Stare stare_initiala;
//    set<Stare> stari_finale;
//
//public:
//    NFA() {
//        stare_initiala = q0;
//        stari_finale = { q2 };
//
//        tabel_tranzitie[{q0, '0'}] = { q0, q1 };
//        tabel_tranzitie[{q0, '1'}] = { q1 };
//        tabel_tranzitie[{q1, '1'}] = { q1, q2 };
//        tabel_tranzitie[{q1, '2'}] = { q2 };
//        tabel_tranzitie[{q2, '2'}] = { q2 };
//    }
//
//    set<Stare> tranzitie(set<Stare> stari, char simbol) {
//        set<Stare> stari_noi;
//        for (Stare s : stari) {
//            if (tabel_tranzitie.find({ s, simbol }) != tabel_tranzitie.end()) {
//                stari_noi.insert(tabel_tranzitie[{s, simbol}].begin(), tabel_tranzitie[{s, simbol}].end());
//            }
//        }
//        return stari_noi;
//    }
//
//    bool accepta(string input) {
//        set<Stare> stari_curente = { stare_initiala };
//        for (char simbol : input) {
//            stari_curente = tranzitie(stari_curente, simbol);
//        }
//        for (Stare s : stari_curente) {
//            if (stari_finale.count(s)) return true;
//        }
//        return false;
//    }
//};
//
//// dfa + tranzitia
//class DFA {
//
//private:
//    map<pair<set<Stare>, char>, set<Stare>> tabel_tranzitie;
//    set<set<Stare>> stari;
//    set<Stare> stare_initiala;
//    set<set<Stare>> stari_finale;
//
//    vector<char> alfabet = { '0', '1', '2' };
//
//public:
//    DFA(NFA& nfa) {
//        queue<set<Stare>> coada_stari;
//        stare_initiala = { q0 };
//        stari.insert(stare_initiala);
//        coada_stari.push(stare_initiala);
//
//        while (!coada_stari.empty()) {
//            set<Stare> stare_curenta = coada_stari.front();
//            coada_stari.pop();
//
//            for (char simbol : alfabet) {
//                set<Stare> stare_noua = nfa.tranzitie(stare_curenta, simbol);
//                if (!stare_noua.empty() && stari.find(stare_noua) == stari.end()) {
//                    stari.insert(stare_noua);
//                    coada_stari.push(stare_noua);
//                }
//                tabel_tranzitie[{stare_curenta, simbol}] = stare_noua;
//            }
//        }
//
//        for (auto stare : stari) {
//            for (Stare s : stare) {
//                if (nfa.accepta("2")) {
//                    stari_finale.insert(stare);
//                    break;
//                }
//            }
//        }
//    }
//
//    void afisare_DFA() {
//        cout << "Stari DFA:" << endl;
//        for (auto stare : stari) {
//            cout << "{";
//            for (Stare s : stare) cout << "q" << s << " ";
//            cout << "}" << endl;
//        }
//
//        cout << "\nTranzitii DFA:" << endl;
//        for (auto& t : tabel_tranzitie) {
//            cout << "{";
//            for (Stare s : t.first.first) cout << "q" << s << " ";
//            cout << "} --" << t.first.second << "--> {";
//            for (Stare s : t.second) cout << "q" << s << " ";
//            cout << "}" << endl;
//        }
//    }
//};
//
//int main() {
//    NFA nfa;
//    DFA dfa(nfa);
//    dfa.afisare_DFA();
//    return 0;
//}
