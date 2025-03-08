//#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//
//using namespace std;
//
//class NFA_Epsilon {
//public:
//    map<int, map<char, set<int>>> tranzitii;
//    map<int, set<int>> tranzitie_epsilon;
//    int stare_start;
//    set<int> stare_finala;
//
//    NFA_Epsilon(int start, set<int> finals) {
//        stare_start = start;
//        stare_finala = finals;
//    }
//
//    void adaugare_tranzitie(int from, char input, int to) {
//        tranzitii[from][input].insert(to);
//    }
//
//    void adaugare_tranzitie_epsilon(int from, int to) {
//        tranzitie_epsilon[from].insert(to);
//    }
//
//    set<int> epsilon_closure(int state) {
//        set<int> closure;
//        queue<int> q;
//        closure.insert(state);
//        q.push(state);
//        while (!q.empty()) {
//            int current = q.front(); q.pop();
//            for (int next : tranzitie_epsilon[current]) {
//                if (closure.find(next) == closure.end()) {
//                    closure.insert(next);
//                    q.push(next);
//                }
//            }
//        }
//        return closure;
//    }
//
//    bool accepta(string input) {
//        set<int> stari_curente = epsilon_closure(stare_start);
//        for (char c : input) {
//            set<int> stari_urmatoare;
//            for (int state : stari_curente) {
//                for (int next : tranzitii[state][c]) {
//                    set<int> closure = epsilon_closure(next);
//                    stari_urmatoare.insert(closure.begin(), closure.end());
//                }
//            }
//            stari_curente = stari_urmatoare;
//        }
//        for (int state : stari_curente) {
//            if (stare_finala.find(state) != stare_finala.end()) return true;
//        }
//        return false;
//    }
//};
//
//int main() {
//
//    NFA_Epsilon nfa(0, { 4 });
//
//    nfa.adaugare_tranzitie(0, 'a', 1);
//    nfa.adaugare_tranzitie(0, 'b', 3);
//    nfa.adaugare_tranzitie_epsilon(1, 2);
//    nfa.adaugare_tranzitie(2, 'a', 3);
//    nfa.adaugare_tranzitie(2, 'b', 3);
//    nfa.adaugare_tranzitie_epsilon(3, 4);
//
//    cout << "e acceptat ab? " << (nfa.accepta("ab") ? "da" : "nu") << endl;
//
//    cout << "e acceptat aa? " << (nfa.accepta("aa") ? "da" : "nu") << endl;
//
//
//    return 0;
//}
