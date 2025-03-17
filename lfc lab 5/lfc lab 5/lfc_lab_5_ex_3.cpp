//#include <iostream>
//#include <regex>
//#include <vector>
//
//using namespace std;
//
//
//bool match_regex(const string& str, const string& pattern) 
//{
//    regex re(pattern);
//    return regex_match(str, re);
//}
//
//int main() 
//{
//    vector<string> cazuri_test = 
//    {
//        "1", "11", "101", "001", "0001", "1001", "00001", "1000001", "11100111010101"
//    };
//
//    string regex_stanga = "(1|00*1)|(1|00*1)(0|10*1)*(0|10*1)";
//    string regex_dreapta = "0*1(0|10*1)*";
//
//    bool all_match = true;
//    for (const auto& test : cazuri_test) 
//    {
//        bool stanga = match_regex(test, regex_stanga);
//
//        bool dreapta = match_regex(test, regex_dreapta);
//
//        if (stanga != dreapta) 
//        {
//            cout << "diferenta gasita pentru: " << test << endl;
//            all_match = false;
//        }
//    }
//
//    if (all_match) {
//        cout << "echivalente" << endl;
//    }
//    else {
//        cout << "nu sunt echivalente" << endl;
//    }
//
//    return 0;
//}
