//#include <iostream>
//#include <queue>
//#include <set>
//#include <map>
//#include <string>
//using namespace std;
//
//struct FSA {
//    map<pair<string, char>, string> delta;
//    string initial;
//    set<string> final;
//};
//
//bool sunt_echivalente(FSA A, FSA B, set<char> alphabet) 
//{
//    set<pair<string, string>> visited;
//    queue<pair<string, string>> q;
//    q.push({ A.initial, B.initial });
//    visited.insert({ A.initial, B.initial });
//
//    while (!q.empty()) 
//    {
//        auto current = q.front(); q.pop();
//        string stateA = current.first;
//        string stateB = current.second;
//
//        bool isFinalA = A.final.count(stateA);
//        bool isFinalB = B.final.count(stateB);
//
//        if (isFinalA != isFinalB) 
//        {
//            return false;
//        }
//
//        for (char symbol : alphabet) 
//        {
//            string nextA = A.delta[{stateA, symbol}];
//            string nextB = B.delta[{stateB, symbol}];
//            pair<string, string> next = { nextA, nextB };
//
//            if (!visited.count(next)) 
//            {
//                visited.insert(next);
//                q.push(next);
//            }
//        }
//    }
//
//    return true;
//}
//
//int main() 
//{
//    FSA A, B;
//    A.initial = "q0";
//    A.final = { "q3" };
//    A.delta = {
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
//    B.initial = "s0";
//    B.final = { "s2" };
//    B.delta = {
//        {{"s0", '0'}, "s1"},
//        {{"s0", '1'}, "s1"},
//        {{"s1", '0'}, "s2"},
//        {{"s1", '1'}, "s2"},
//        {{"s2", '0'}, "s2"},
//        {{"s2", '1'}, "s2"}
//    };
//
//    set<char> alphabet = { '0', '1' };
//
//    if (sunt_echivalente(A, B, alphabet)) 
//    {
//        cout << "automatele sunt echivalente\n";
//    }
//    else 
//    {
//        cout << "automatele NU sunt echivalente\n";
//    }
//
//    return 0;
//}
