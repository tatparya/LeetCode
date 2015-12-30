#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//	Author: Tatparya Shankar

bool isAnagram(string s, string t) {
	int str[256] = {0};
	int len1 = s.size();
	int len2 = t.size();
	if( len1 != len2 ){
		return false;
	}
	//	Count first string;
	for( int i = 0; i < len1; i++ ){
		str[ int(s[ i ]) ]++;
	}

	//	Count other string
	for( int i = 0; i < len2; i++ ){
		str[ int(t[ i ]) ]--;
	}

	for( int i = 0; i <= 256; i++ ){
		cout << str[i] << endl;
	}

	return true;
}

int main()
{
	if( isAnagram( "abc", "abc" ) )
		cout << "True" << endl;
	else
		cout << "False" << endl;
    return 0;
}
