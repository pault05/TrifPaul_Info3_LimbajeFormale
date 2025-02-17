//#include <iostream>
//#include <string.h>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//bool e_palindrom(string s)
//{
//	return s == string(s.rbegin(), s.rend());
//}
//
//void generare_palindrom(string s, int n, const vector<string>& Alfabet)
//{
//	if (s.size() == n)
//	{
//		if (e_palindrom(s))
//		{
//			cout << s << " ";
//		}
//		return;
//	}
//
//	for (const string& c : Alfabet)
//	{
//		generare_palindrom(s + c, n, Alfabet);
//	}
//}
//
//int main()
//{
//	vector<string> E = { "0", "1", "2" };
//
//	for (int len = 1; len <= 5; len++)
//	{
//		cout << "Palindrom de lung: " << len << endl;
//		generare_palindrom("", len, E);
//		cout << endl;
//	}
//
//
//	return 0;
//}