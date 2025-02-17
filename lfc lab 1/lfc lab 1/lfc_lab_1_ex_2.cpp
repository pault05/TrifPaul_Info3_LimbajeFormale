//#include <iostream>
//#include <string.h>
//#include <algorithm>
//using namespace std;
//
//string concatenare(string s1, string s2)
//{
//	string s;
//	s = s1 + s2;
//	return s;
//}
//
//string repetare(string s, int n)
//{
//	string sn;
//	while (n)
//	{
//		sn = sn + s;
//		n--;
//	}
//	return sn;
//}
//
//string inversare(string s)
//{
//	reverse(s.begin(), s.end());
//	return s;
//}
//
//string extractie(string s, int i, int j)   // - 1 pt pozitia exacta
//{
//	string se = s.substr(i, j);
//	return se;
//}
//
//
//string inlocuire(string s, string sub, string new_sub)
//{
//	int found = s.find(sub);
//
//	if (found == std::string::npos)
//	{
//		return s;
//	}
//
//	return s.substr(0, found) + new_sub + s.substr(found + sub.length());
//}
//
//int main()
//{
//	string A[] = { "a", "b", "c", "d", "e", "f", "g", "i", "j", "k"};
//	string B[] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
//	string C[] = { "x1", "y1", "x2", "y2", "x3", "y3", "x4", "y4", "x5", "y5"};
//
//	string s1 = A[0] + A[1] + C[0];
//	string s2 = B[0] + A[3] + C[6];
//
//	cout << s1 << " " << s2 << endl;
//
//	cout << "Concatenare: " << concatenare(s1, s2) << endl;
//
//	cout << "Repetare: " << repetare(s2, 3) << endl;
//
//	cout << "Inversare: " << inversare(s1) << endl;
//
//	cout << "Extractie: " << extractie(s2, 1, 2) << endl;
//
//	cout << "Inlocuire: " << inlocuire(s1, "a", "O");
//
//	return 0;
//}