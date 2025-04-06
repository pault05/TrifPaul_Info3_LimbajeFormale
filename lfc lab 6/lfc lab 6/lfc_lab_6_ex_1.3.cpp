//#include <iostream>
//#include <string>
//
//bool aparinte_L(const std::string& str) 
//{
//    int count_A = 0, count_B = 0, count_C = 0;
//    int stage = 0;
//
//    for (char c : str) 
//    {
//        if (c == 'a') 
//        {
//            if (stage != 0) return false; // 'a' nu e primul
//            count_A++;
//        } else if (c == 'b') 
//        {
//            if (stage == 2) return false; // 'b' nu e dupa 'c'
//            stage = 1;
//            count_B++;
//        } else if (c == 'c') 
//        {
//            stage = 2;
//            count_C++;
//        } else {
//            return false; // invalid
//        }
//    }
//    return (count_A == count_B && count_B == count_C && count_A > 0);
//}
//
//int main() 
//{
//    std::string input;
//    std::cout << "introdu stringul format din 'a', 'b', si 'c': ";
//    std::cin >> input;
//
//    if (aparinte_L(input)) 
//    {
//        std::cout << "stringul apartine limbajului L" << std::endl;
//    } else {
//        std::cout << "stringul nu apartine limbajului L" << std::endl;
//    }
//
//    return 0;
//}