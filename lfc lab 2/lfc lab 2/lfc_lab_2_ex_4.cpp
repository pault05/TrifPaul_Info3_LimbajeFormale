//#include <iostream>
//#include <fstream>
//#include <string>
//#include <regex>
//
//using namespace std;
//
//void verifyInvoiceFormat() {
//    ifstream fin("bill.txt");
//    if (!fin.is_open()) {
//        cerr << "Nu s-a putut deschide fișierul: bill.txt" << endl;
//        return;
//    }
//
//    string line;
//    regex clientRegex(R"(CNP:\s*\d{13})");
//    regex countyRegex(R"(Judet:\s*[\w\s]+)");
//    regex cityRegex(R"(Oras:\s*[\w\s]+)");
//    regex productRegex(R"(Denumire:\s*[\w\s]+)\n(U\.M:\s*\w+)\n(Cant:\s*\d+)\n(Pret Uni:\s*\d+)\n(Pret Total:\s*\d+)\n(TVA:\s*\d+%)");
//
//    bool isClientInfoValid = false;
//    bool isProductInfoValid = true;
//
//    // Verificarea informațiilor despre client
//    while (getline(fin, line)) {
//        if (regex_match(line, clientRegex)) {
//            isClientInfoValid = true;
//            break;
//        }
//    }
//
//    if (!isClientInfoValid) {
//        cerr << "Eroare: Informațiile despre client sunt incorecte!" << endl;
//    }
//
//    // Verificarea informațiilor despre produse
//    while (getline(fin, line)) {
//        if (!regex_search(line, productRegex)) {
//            isProductInfoValid = false;
//            cerr << "Eroare: Informațiile despre produs sunt incorecte!" << endl;
//            break;
//        }
//    }
//
//    if (isProductInfoValid) {
//        cout << "Formatul fișierului este corect!" << endl;
//    }
//
//    fin.close();
//}
//
//int main() {
//    verifyInvoiceFormat();
//    return 0;
//}
