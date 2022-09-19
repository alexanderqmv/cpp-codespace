/*

   МЕТОД ДВОЙНОГО ХЕШИРОВАНИЯ.

   @Author:
   ~~~~~~~~
   @ynwqmv, @cgrapymn, @kkGIiiIbbY

*/



#include <iostream>
#include <string>
#include <vector>
#include <sha2>
 
class Digest {
public:
	int StrInHex(int zero);

protected:
	std::string getInput;

	static const std::string getHex;
	static const std::string getHexNew;
};												


int Digest::StrInHex(int zero) {
	std::cout << "enter password to generate 2Hex -> "; std::cin >> getInput;
	
	std::string getHex = sha512(getInput);
	/*
		Generation of First Hash(getInput) by std::string getHex (SHA2-512)
	*/
	std::string getHexNew = sha512(getHex);
	/*
		Generation of Second Hash(getHex) by std::string getHexNew (SHA2-512)
	*/
	
	std::cout << getHexNew;

	return zero;
}


int main(int argc, char const *argv[])
{	
	Digest h;
	// 0 - return 
	h.StrInHex(0);
	
	return 0;
}


/*
	In the end, we got secure code!

*/
