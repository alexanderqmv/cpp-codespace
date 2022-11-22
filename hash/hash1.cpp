#include <iostream>
 
using namespace std;
 
union TwoBytes {
    char ch[2]; 
    unsigned short us;
};
 
inline void rot_left(unsigned short &us) {
    us = (us & 0x8000 ? (us << 1) + 1 : us << 1);
}
 
unsigned short makeHash(const char *key) {
    
    TwoBytes word; // обьявление TwoBytes как word
    
    unsigned short sum = 0; // сумма: 0

    size_t i = 0; // i: 0

    while (key[i]) { // до тех пор пока key = 0, выполняется код
        word.ch[i % 2] = key[i]; // ch = key: 0
        if (i % 2 == 1) { // если 0 деленная на два дает остаток 1
            sum += word.us; // к sum прибавляется us
            rot_left(sum); // rot_left получает аргумент этой суммы.
        }
        ++i; // выход из цикла. | i : 1
    }
    if (i % 2 == 1) { // если 1 деленная на два дает остаток 1, выполняется код
        word.ch[1] = '\0'; // второй элемент массива ch = НУЛЬ ТЕРМИНАТОР(КОНЕЦ СТРОКИ)
        sum += word.us; // к sum прибавляется us 
        rot_left(sum); // rot_left получает аргумент этой суммы.
    }
    return sum; // возвращается сумма
}
 
int main() {
    const char *str = "ynwqmv";
    unsigned short hash = makeHash(str);
    cout << hex << "0x" << hash << endl;
    
    cout << endl;

     
    return 0;
}
