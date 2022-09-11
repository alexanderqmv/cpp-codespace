#include <iostream>

#include "sha256.cpp"
#include "sha256.h"
#include "md5.h"
#include "md5.cpp"
using namespace std;


class walgen {
public:
	string nOfAcc;
	string psWrd;
	string bckUp;

	void make_wallet() {
		/*
           *HOW IT WORKS? 
           
           WE TOOK THE INPUTS OF ACCOUNT,PASSWORD AND BACKUP WORDS,
           USING MD5 HASHING ALGORITHM BY SUM OF (ACCOUNT,PASSWORD & BACKUP) WORDS.

		*/
		string mk = md5(nOfAcc+psWrd+bckUp);
		cout << mk << " - Public Address"<< endl;
		string smk = sha256(mk+nOfAcc+psWrd+bckUp);
		/*
			THEN, IN VARIABLE `SMK` - string WE WROTE THE SUM OF mk, (ACCOUNT,PASSWORD & BACKUP)
			BY SHA256 HASHING ALGORITHM.

			BY THIS WAY, WE GOT PRIVATE KEY OF OUR PUBLIC ADDRESS!

			P.S: IT'S JUST A WALLET-CREATOR APP, DON'T USE FOR GLOBAL PURPOSES OR 
			IN SOME PROJECTS, LIKE BLOCKCHAIN,BANK SYSTEMS OR S.E.
		*/
		cout <<smk << " - Private Key";
	}
};



int main () {


	walgen i;


	cout << "================WALLET GENERATOR===============";
	cout << "\nEnter Name of Account: ";
	cin >> i.nOfAcc;
	cout << "\nEnter Password: ";
	cin >> i.psWrd;
	cout << "\nEnter 3 BackUp Words: ";
	cin >> i.bckUp;

	

	i.make_wallet();

	
}

