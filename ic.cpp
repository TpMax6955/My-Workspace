#include <iostream>

void ic_feature() {
    std::cout << "IC feature from branch IC\n";
}

// Optional: small test when compiled separately
#ifdef IC_STANDALONE
int main(){ ic_feature(); return 0; }
#endif
