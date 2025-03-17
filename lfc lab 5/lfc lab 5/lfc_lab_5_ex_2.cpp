//#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//
//using namespace std;
//
//struct NFA 
//{
//    map<int, map<char, set<int>>> tranzitii;
//    map<int, set<int>> tranzitie_epsilon;
//
//    int stare_start;
//
//    set<int> stare_final;
//
//    void adauga_tranzitie(int from, char symbol, int to) 
//    {
//        tranzitii[from][symbol].insert(to);
//    }
//
//    void adauga_tranzitie_epsilon(int from, int to) 
//    {
//        tranzitie_epsilon[from].insert(to);
//    }
//
//    set<int> epsilon_closure(int state) 
//    {
//        set<int> closure;
//        queue<int> q;
//
//        q.push(state);
//
//        closure.insert(state);
//
//        while (!q.empty()) 
//        {
//            int s = q.front(); q.pop();
//
//            for (int next : tranzitie_epsilon[s]) 
//            {
//                if (closure.find(next) == closure.end()) 
//                {
//                    closure.insert(next);
//                    q.push(next);
//                }
//            }
//        }
//
//        return closure;
//    }
//
//    bool accepta_input(string input) 
//    {
//
//        set<int> current_states = epsilon_closure(stare_start);
//
//        for (char c : input) 
//        {
//            set<int> next_states;
//            for (int state : current_states) 
//            {
//                if (tranzitii[state].count(c)) 
//                {
//                    for (int next : tranzitii[state][c]) 
//                    {
//                        set<int> closure = epsilon_closure(next);
//                        next_states.insert(closure.begin(), closure.end());
//                    }
//                }
//            }
//
//            current_states = next_states;
//
//        }
//        for (int state : current_states) 
//        {
//            if (stare_final.count(state)) return true;
//        }
//
//        return false;
//    }
//};
//
//int main() 
//{
//    NFA nfa;
//    nfa.stare_start = 0;
//    nfa.stare_final = { 5 };
//
//    nfa.adauga_tranzitie_epsilon(0, 1);
//    nfa.adauga_tranzitie_epsilon(0, 4);
//
//    nfa.adauga_tranzitie(1, 'b', 2);
//    nfa.adauga_tranzitie(2, 'a', 3);
//    nfa.adauga_tranzitie(2, 'b', 3);
//    nfa.adauga_tranzitie(3, 'a', 3);
//    nfa.adauga_tranzitie(3, 'b', 3);
//    nfa.adauga_tranzitie_epsilon(3, 5);
//
//    nfa.adauga_tranzitie(4, 'a', 5);
//
//    string test_string;
//
//    cout << "string: ";
//    cin >> test_string;
//
//    if (nfa.accepta_input(test_string)) 
//    {
//        cout << "acceptat\n";
//    }
//    else 
//    {
//        cout << "respins\n";
//    }
//
//    return 0;
//}
