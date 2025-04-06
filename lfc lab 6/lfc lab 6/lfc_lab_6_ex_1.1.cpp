//#include <iostream>
//#include <string>
//using namespace std;
//
//bool verificare_lemma(const std::string& str)
//{
//    int count_0 = 0, count_1 = 0;
//    bool gasit_unu = false;
//
//    for (char c : str) 
//    {
//        if (c == '0' && gasit_unu) 
//        {
//            return false; // ordine invalida
//        }
//        if (c == '0') count_0++;
//        if (c == '1') {
//            count_1++;
//            gasit_unu = true;
//        }
//    }
//
//    if (count_0 <= count_1)  // L: i > j
//    { 
//        return false;
//    }
//
//    int p = count_0; // lung. minima pt lemma
//    if (str.length() < p) return false; 
//
//
//    string x = str.substr(0, p - 1); // prefix
//    string y = str.substr(p - 1, 1); 
//    string z = str.substr(p); // sufix
//
//    if (y != "0") return false;
//
//    // n = 2
//    int new_count_0 = count_0 + 1;
//    return new_count_0 > count_1;
//}
//
//int main() 
//{
//    string input;
//    cout << "string binar: ";
//    cin >> input;
//
//    if (verificare_lemma(input)) 
//    {
//        std::cout << "stringul apartine limbajului L" << std::endl;
//    }
//    else {
//        std::cout << "stringul nu apartine limbajului L" << std::endl;
//    }
//    return 0;
//}
