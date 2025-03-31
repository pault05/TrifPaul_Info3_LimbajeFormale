//#include <iostream>
//#include <string>
//
//bool apartine_L(const std::string& str) 
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
//    return (count_0 > count_1);
//}
//
//int main() {
//    std::string input;
//    std::cout << "introdu string binar: ";
//    std::cin >> input;
//
//    if (apartine_L(input)) 
//    {
//        std::cout << "stringul apartine limbajului L = {0^i 1^j | i > j}" << std::endl;
//    }
//    else {
//        std::cout << "stringul nu apartine limbajului L" << std::endl;
//    }
//
//    return 0;
//}
