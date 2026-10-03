/*#include<iostream>
#include<string>
#include <cstring>
#include <cctype>
#include<vector>
#include<iomanip>
#include <sstream>
#include <algorithm>
using namespace std;
char readcharcter() {
	char s1;
	cout << "enter your charctere" << endl;
	cin >> s1;
	return s1;

}
string readString() {
	string s1;
	cout << "please enter your string:" << endl;
	getline(cin, s1);

	return s1;
}
/*bool cheak_is_vowel(char s2) {

	
	s2 = tolower(s2);


	return (s2 == 'a') || (s2 == 'e') || (s2 == 'i') || (s2 == 'o') || (s2 == 'u') || (s2 == 'y');


}
short count_vowel_in_string(string s1) {
	
	int count = 0;
	

	for (int i = 0; i < s1.length(); i++) {
		if (cheak_is_vowel(s1[i])) {
			count++;
		}
	
	}
	return count;
}
void print_all_vowel_in_string(string s1) {
	for (int i = 0; i < s1.length(); i++) {
		if (cheak_is_vowel(s1[i])) {
			cout << s1[i] << "  ";
		}

	}
	

}
void print_Each_word_in_string(string s1) {
	short count = 0;
	string delime = " ";
	short pos = 0;
	string swords;
	while ((pos=s1.find(delime))!=std::string::npos) {
		swords =s1. substr(0, pos);
		if (swords != "") {
		cout << swords << endl ;
			
		

		}
		
		
	s1.erase(0, pos+delime.length());

	}
	if (s1 != "") {
		cout << s1<<endl;
		
	}
	
	
	
		
	
	
		


	
}
short count_each_word(string s1) {
	short count = 0;
	short pos = 0;
	string delime = " ";
	string swords;
	while ((pos = s1.find(delime)) != std::string ::npos) {
		swords = s1.substr(0, pos);
		if (swords != "") {
			count++;

		}
		s1.erase(0, pos + delime.length());

	}
	if (s1 != "") {
		count++;
	}
	return count;
}

vector<string>split(string s1, string delime) {
	vector<string>vSplit;
	
	short pos;
	string swords;
	while ((pos = s1.find(delime)) != std::string::npos) {
		swords = s1.substr(0, pos);
		if (swords != "") {
			vSplit.push_back(swords);

		  }

		  s1.erase(0, pos + delime.length());


		}
		if (s1 != "") {
			vSplit.push_back(s1);
		}

		return vSplit;


	}
	string trim_left(string s1) {
		for (short i = 0; i < s1.length(); i++) {
			if (s1[i] != ' ') {
				return s1.substr(i, s1.length() - i);

			}
		}
		return "";

	}

	string trim_right(string s1) {
		for (short i = s1.length(); i > 0; i--) {
			if (s1[i] != ' ') {
				return s1.substr(0, i + 1);

			}
		}
		return "";

	}
	string trim(string s1) {
		return	trim_left(trim_right(s1));


	}



	string   string_join(vector<string>& name, string delim) {
		string s1 = "";
		for (string& i : name) {
			s1 = s1 + i + delim;
		}
		return s1.substr(0, s1.length() - delim.length());

	}
	string string_join(string array[100], int lengthe, string delim) {
		string s1 = "";
		for (short i = 0; i < lengthe; i++) {
			s1 = s1 + array[i] + delim;
		}
		return s1.substr(0, s1.length() - delim.length());

	}

	vector<string> vSplit(string s1, string delim = " ") {
		vector<string>vstring;
		short pos = 0;
		string swords;
		while ((pos = s1.find(delim)) != std::string::npos) {
			swords = s1.substr(0, pos);
			if (swords != "") {
				vstring.push_back(swords);
			}


			s1.erase(0, pos + delim.length());
		}
		if (s1 != "") {
			vstring.push_back(s1);
		}


		return vstring;



	}
	string reverse(string s1) {
		vector<string>vstring;
		vstring = vSplit(s1, " ");
		string s2 = "";
		vector<string>::iterator iter = vstring.end();
		while (iter != vstring.begin()) {
			--iter;
			s2 += *iter + " ";

		}
		s2 = s2.substr(0, s2.length() - 1);
		return s2;

	}
	string remplace(string s1, string old_string, string new_string) {
		short pos = 0;
		string swords;
		while ((pos = s1.find(old_string)) != std::string::npos){
		 s1=s1.replace(pos, old_string.length(), new_string);


	}
		return s1;
}
	string   join(vector<string>& name, string delim) {
		string s1 = "";
		for (string& i : name) {
			s1 = s1 + i + delim;
		}
		return s1.substr(0, s1.length() - delim.length());

	}
	string toLowercase(string s1) {
		for (short i = 0; i < s1.length(); i++) {
			s1= tolower(s1[i]);

		}
		return s1;
	}

	string repemplacewithoutUsingRepalce(string s1, string old_string, string new_string, bool matchcase=true) {
		vector<string>vString;
		vString = vSplit(s1, " ");
		for (string& i : vString) {
			if (matchcase) {
				if (i == old_string) {
					i = new_string;
				}
				
				}
			else {
				if (toLowercase(i) == toLowercase(old_string)) {
					i = new_string;

				}
			}
		}
		return join(vString, " ");

	}

	
	vector<string>split(string s1, string delim) {
		vector<string>vwords;
		delim = "";
		short pos = 0;
		string words;
		while ((pos = s1.find(delim)) != std::string::npos) {
			words = s1.substr(0, pos);
			if (words != "") {
				vwords.push_back(words);

			}
			s1.erase(0, pos + delim.length());
		}
		if (s1 != "") {
			vwords.push_back(words);
		}
		return vwords;
	}
	string joint(vector<string>join, string delim) {


		string words = "";
		for (string& i : join) {
			words = words + i + delim;

		}
		words = words.substr(0, words.length() - delim.length());
		return words;
	}
	string toLowercase(string s1) {
		for (short i = 0; i < s1.length(); i++) {
			s1 = tolower(s1[i]);
		}
		return s1;
	}

	string remplacmment(string s1, string old_string, string new_string, bool matchcase = true) {
		vector<string>Vstring;
		Vstring = split(s1, " ");
		for (string& i : Vstring) {
			if (matchcase) {
				if (i == old_string) {
					i = new_string;

				}
			}
			else {
				if (toLowercase(i) == toLowercase(old_string)) {
					i = new_string;
				}
			}
		}
		return joint(Vstring, " ");
	}*/




	

	






 








/*int main() {
	vector<string>join ;
	vector<string>name = { "yahia","fadi","nassim","lamine","mama"};
	string array[3] = { "yahia","fadi","mecheddou" };
	vector<string>vString;
	
//	string s1 = readString();
	
	//cout <<"count of vowel in the string is:"<< count_vowel_in_string(s1);

	//print_Each_word_in_string(s1);
//	cout << "the number of the words of in string is:" << count_each_word(s1);
	
	// vSplit=split(readString(), " ");
	 //cout << "token:" << vSplit.size() << endl;


	// for (string& i : vSplit) {
		// cout << i<<endl;
		// 
	// }
//	string s1 = readString();
	
	
//	cout << remplace(readString(),"nassim","yahia");
	//cout<<repemplacewithoutUsingRepalce(readString(), "nassim", "yahia",false);
	cout << remplacmment(readString(), "yahia", "nassim");
	
	


	





}*/













#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
string read() {
	string s1;
	cout << "enter your string:";
	getline(cin, s1);
	return s1;
}

vector<string>split(string s1, string delim) {
	vector<string>vwords;
	delim = "";


	size_t pos = 0;



	string words;
	while ((pos = s1.find(delim)) != string::npos) {


		words = s1.substr(0, pos);
		if (words != "") {
			vwords.push_back(words);

		}
		s1.erase(0, pos + delim.length());
	}
	if (s1 != "") {
		vwords.push_back(s1);
	}
	return vwords;
}
string join(vector<string> join, string delim) {
	string words;
	for (size_t i = 0; i < join.size(); i++) {
		words += join[i];
		if (i != join.size() - 1) {
			words += delim;
		}
	}
	return words;
}

string toLowercase(string s1) {
	for (char& c : s1) {
		c = tolower(c);
	}
	return s1;
}



string replacmment(string s1, string old_string, string new_string, bool matchcase = true) {
	vector<string>Vstring;
	Vstring = split(s1, " ");
	for (string& i : Vstring) {
		if (matchcase) {
			if (i == old_string) {
				i = new_string;

			}
		}
		else {
			if (toLowercase(i) == toLowercase(old_string)) {
				i = new_string;
			}
		}
	}
	return join(Vstring, " ");
}










int main() {
	// your code goes here

	string old_string = "yahia";
	string  new_string = "nassim";
	cout << replacmment(read(), old_string, new_string, false);


}

