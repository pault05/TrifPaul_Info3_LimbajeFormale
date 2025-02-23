//#include <iostream>
//#include <string>
//
//using namespace std;
//
//bool cat_detector(const string& input) {
//    int state = 0; // initial = q0
//
//    for (char c : input) {
//        switch (state) {
//        case 0:
//            if (c == 'c') state = 1;
//            break;
//        case 1:
//            if (c == 'a') state = 2;
//            else if (c == 'c') state = 1;
//            else state = 0; // reset
//            break;
//        case 2:
//            if (c == 't') state = 3;
//            else if (c == 'c') state = 1;
//            else state = 0; 
//            break;
//        case 3:
//            return true; // cat
//        }
//    }
//
//    return (state == 3);
//}
//
//int main() {
//    string text;
//    cout << "Input: ";
//    getline(cin, text);
//
//    if (cat_detector(text)) {
//        cout << "Cat a fost gasit\n";
//    }
//    else {
//        cout << "Cat nu a fost gasit\n";
//    }
//
//    return 0;
//}
