//#include <iostream>
//#include <map>
//#include <set>
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//struct DFA 
//{
//    set<string> stari;
//    set<char> alfabet;
//    map<pair<string, char>, string> tranzitii;
//    string start;
//    set<string> final;
//};
//
//set<pair<string, string>> distinge_stari(const DFA& dfa) 
//{
//    vector<string> stari(dfa.stari.begin(), dfa.stari.end());
//    map<pair<string, string>, bool> tabel;
//
//    for (const string& s1 : stari) 
//    {
//        for (const string& s2 : stari) 
//        {
//            if (s1 >= s2) continue;
//            tabel[{s1, s2}] = (dfa.final.count(s1) != dfa.final.count(s2));
//        }
//    }
//
//    bool schimbat = true;
//    while (schimbat) 
//    {
//        schimbat = false;
//        for (const string& s1 : stari) 
//        {
//            for (const string& s2 : stari) 
//            {
//                if (s1 >= s2) continue;
//                if (tabel[{s1, s2}]) continue;
//
//                for (char c : dfa.alfabet) 
//                {
//                    string t1 = dfa.tranzitii.at({ s1, c });
//                    string t2 = dfa.tranzitii.at({ s2, c });
//                    if (t1 == t2) continue;
//
//                    if (t1 > t2) swap(t1, t2);
//                    if (tabel[{t1, t2}]) {
//                        tabel[{s1, s2}] = true;
//                        schimbat = true;
//                        break;
//                    }
//                }
//            }
//        }
//    }
//
//    set<pair<string, string>> tabel_de_distinctie;
//    for (auto& p : tabel) 
//    {
//        if (p.second)
//            tabel_de_distinctie.insert(p.first);
//    }
//    return tabel_de_distinctie;
//}
//
//int main() 
//{
//    DFA dfa;
//    dfa.stari = { "q0", "q1", "q2", "q3" };
//    dfa.alfabet = { '0', '1' };
//    dfa.start = "q0";
//    dfa.final = { "q3" };
//
//    dfa.tranzitii = {
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
//    auto tabel_de_distinctie = distinge_stari(dfa);
//    if (tabel_de_distinctie.size() == (dfa.stari.size() * (dfa.stari.size() - 1)) / 2) 
//    {
//        cout << "DFA-ul este deja minimizat\n";
//    }
//    else 
//    {
//        cout << "DFA-ul poate fi minimizat (nu toate starile sunt distincte)\n";
//    }
//
//    return 0;
//}
