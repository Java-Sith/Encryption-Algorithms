#include "DES.h"
#include "Hashing.h"
//If DES were to be tested, uncomment the first main
//If Hashing were to be tested, uncomment the second main

/*int main() {
    long long int keya[8]={56,98,121,116,101,107,101,121};
    long long int msga[8]={109,101,115,115,97,103,101,46};
    long long int msg=0;
    long long int key=0;
    for (int i=0;i<8;i++){
        msg+=(msga[i]<<((7-i)*8));
    }
    for (int i=0;i<8;i++){
        key+=(keya[i]<<((7-i)*8));
    }
    cout<<"[  Your Msg: "<<msg<<"  ]"<<endl;
    cout<<"[  Your Key: "<<key<<"  ]"<<endl;
    Cipher(msg,key);
    return 0;
}*/

/*
int main() {
    ToHex(SFH("test"));
    return 0;
}*/