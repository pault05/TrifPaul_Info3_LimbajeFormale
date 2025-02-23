//#include <iostream>
//#include <string>
//using namespace std;
//
//// stari
//enum Stare { q0, q1, q2, q3 };
//
//// tranzitii
//Stare delta[4][4] = {
//    {q1, q0, q0, q0}, 
//    {q1, q2, q1, q1}, 
//    {q2, q2, q2, q3},
//    {q3, q3, q3, q3} 
//};
//
//// index
//int mapare_char_index(char ch) {
//    switch (ch) {
//    case 'a': return 0;
//    case 'b': return 1;
//    case 'c': return 2;
//    case 'd': return 3;
//    default: return -1;
//    }
//}
//
//
//bool verificare_cuvant(const string& cuvant) {
//    Stare current_state = q0;
//    for (char ch : cuvant) {
//        int index = mapare_char_index(ch);
//        if (index == -1) {
//			//return false; // alt caracter decat a, b, c, d
//        }
//        current_state = delta[current_state][index];
//    }
//    return current_state == q3;
//}
//
//int main() {
//    string cuvinte[] = { "aabbcc", "aaa", "bbbaac", "aaabbbaaabbddccc", "abcd"};
//
//    for (const string& test_word : cuvinte) {
//        cout << "cuvant: " << test_word << " = " << (verificare_cuvant(test_word) ? "accept" : "respins") << endl;
//    }
//
//    return 0;
//}
