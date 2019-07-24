#include <iostream>
using namespace std;

unsigned long long djb2(char *str) {
    unsigned long long hash = 5381;
    int c;
    while ((c = *(str++))) {
        hash = (hash << 5) + hash + c;
    }
    return hash;
}



int main() {
    char foo[] = "hello world";
    cout << "key: " << foo << endl;
    cout << "DJB2: " << djb2(foo) << endl;
    return 0;
}
