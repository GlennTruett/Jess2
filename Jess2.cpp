//Glenn Truett

#include <iostream>
#include <string>
#include <cstdlib>
#include <Windows.h>

using namespace std;

char at = '@';
char dot = '.';
char ast = '*';
char alphac;


int main() {

	char alpha[26]{ 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','y','z' };
	cout << "My " << alpha[4] << alpha[12] << alpha[0] << alpha[8] << alpha[11] << " is" << "\n\n";
	cout << alpha[6] << alpha[11] << alpha[4] << alpha[13] << alpha[13] << alpha[19] << alpha[17] << alpha[20] << alpha[4] << alpha[19] << alpha[19];
	cout << at << alpha[6] << alpha[12] << alpha[0] << alpha[8] << alpha[11] << dot << alpha[2] << alpha[14] << alpha[12] << "\n\n";

	int num[10]{ 1,2,3,4,5,6,7,8,9,0 };
	cout << "My " << alpha[15] << alpha[7] << alpha[14] << alpha[13] << alpha[4] << " " << alpha[13] << alpha[20] << alpha[12] << alpha[1] << alpha[4] << alpha[17] << " is\n\n";
	cout << num[7] << num[9] << num[5] << "-" << num[6] << num[6] << num[3] << "-" << num[9] << num[4] << num[4] << num[0] << " \n\n";
	cout << "If you don't want me to know your " << alpha[15] << alpha[7] << alpha[14] << alpha[13] << alpha[4] << " " << alpha[13] << alpha[20] << alpha[12] << alpha[1] << alpha[4] << alpha[17] << "\n";
	cout << " you can " << alpha[3] << alpha[8] << alpha[0] << alpha[11] << " " << ast << num[5] << num[6] << " and it will block your " << alpha[13] << alpha[20] << alpha[12] << alpha[1] << alpha[4] << alpha[17] << "\n\n";

	char alphac[3]{ 'J', 'G', 'T' };
	cout << "Oh and my full name is " << alphac[0] << alpha[0] << alpha[12] << alpha[4] << alpha[18] << " " << alphac[1] << alpha[11] << alpha[4] << alpha[13] << alpha[13] << " " << alphac[2] << alpha[17] << alpha[20] << alpha[4] << alpha[19] << alpha[19] << "\n\n";
	cout << "There are three reasons I made this program \n";
	cout << "1.  the site we are talking on blocks certain words so that I can't give you this information.\n\n";
	cout << "2.  It's expensive for me to keep texting you there I'm poor and I really want to keep talking otherwise \n";
	cout << " when I run out of chats or tokens we will have to wait to talk with each other till next month I don't really want\n" << "to wait that long I really enjoy your company.\n\n";
	cout << "3. It gave me somehting to do and a chance to practice my coding.\n\n\n";

	cout << "Oh and one other thing that is stuck on my mind is: \n\n";
	system("pause");
	cout << "\n\n";

	for (int i = 0; i < 1000; ++i) {
		cout << alpha[15] << alpha[20] << alpha[18] << alpha[18] << alpha[23] << " \n";

	}
	cout << "LMAO";
	return 0;
}