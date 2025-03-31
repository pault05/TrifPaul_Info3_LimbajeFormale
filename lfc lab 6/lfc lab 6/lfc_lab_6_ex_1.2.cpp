//#include <iostream>
//#include <string>
//
//bool apartine_L(const std::string& str) 
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
//    return (count_A <= count_B);
//}
//
//
//int main() 
//{
//    std::string input;
//    std::cout << "introdu string format din 'a' si 'b': ";
//    std::cin >> input;
//
//    if (apartine_L(input)) 
//    {
//        std::cout << "stringul apartine limbajului L = {a^i b^j | i <= j}" << std::endl;
//    }
//    else 
//    {
//        std::cout << "stringul nu apartine limbajului L" << std::endl;
//    }
//
//    return 0;
//}
