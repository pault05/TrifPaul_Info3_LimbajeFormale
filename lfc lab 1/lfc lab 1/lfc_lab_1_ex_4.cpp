//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//void generare_sir(string s1, string s2, int lung_max, const vector<string>& Alfabet) //pt 2 alfabete: a1, a2
//{
//	string cuvant = s1 + s2;
//
//	if (cuvant.length() <= lung_max)
//	{
//		cout << "\"" << cuvant << "\"";
//	}
//	else
//	{
//		return;
//	}
//
//	for (const string& c : Alfabet)							//pt 2 alfabete: a1, a2
//	{
//		generare_sir(s1 + c, s2, lung_max, Alfabet);
//	}
//
//	/*for (const string& c : Alfabet)
//	{
//		generare_sir(s1, s2 + c, lung_max, Alfabet);
//	}*/
//}
//
//int main()
//{
//	vector<string> A = { "a", "b" };
//	int lung_max = 4;
//
//	generare_sir("", "", lung_max, A);
//}