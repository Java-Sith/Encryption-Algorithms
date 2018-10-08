#ifndef ENCRYPTION_HASHING_H
#define ENCRYPTION_HASHING_H

#include <iostream>
#include <string>
using namespace std;

unsigned int SFH(string input) {
    unsigned int init = 124564352;
    unsigned int magic = 5674356;
    unsigned int hash;
    for (int i = 0; i < input.length(); ++i) {
        hash = hash^(input[i]);
        hash = hash*magic;
    }
    return hash;
}

void ToHex (unsigned int input) {
    cout << hex << uppercase << input << endl;
}

#endif //ENCRYPTION_HASHING_H
