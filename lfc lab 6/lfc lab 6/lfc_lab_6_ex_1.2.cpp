//#include <iostream>
//#include <string>
//
//bool verificare_lemma(const std::string& str)
//{
//    int count_A = 0, count_B = 0;
//    bool gasit_B = false;
//
//    for (char c : str) 
//    {
//        if (c == 'a' && gasit_B) 
//        {
//            return false; // invalid
//        }
//        if (c == 'a') count_A++;
//        if (c == 'b') {
//            count_B++;
//            gasit_B = true;
//        }
//    }
//
//    if (count_A > count_B)   // Conditia L: i <= j
//    {
//        return false;
//    }
//
//    int p = count_A; // lung. minima 
//    if (str.length() < p) return false; // invalid
//
//    std::string x = str.substr(0, p - 1); // prefix
//    std::string y = str.substr(p - 1, 1); 
//    std::string z = str.substr(p); // sufix
//
//    if (y != "a") return false;
//
//    // n = 2
//    int new_count_A = count_A + 1;
//    return new_count_A <= count_B;
//}
//
//int main() 
//{
//    std::string input;
//    std::cout << "string format din 'a' si 'b': ";
//    std::cin >> input;
//
//    if (verificare_lemma(input)) 
//    {
//        std::cout << "stringul respecta Lema si apartine L" << std::endl;
//    }
//    else {
//        std::cout << "stringul nu apartine limbajului L" << std::endl;
//    }
//    return 0;
//}
