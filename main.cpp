#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

using namespace std;



size_t  strlen1(const char *str){
    const char *s;
    for(s=str;*s;++s){
        printf(s);
    }
    return  s-str;
}




int main() {
    std::cout << "Hello, World!" << std::endl;
    size_t  s;
    int a = strlen1("123456789");
    cout<<a;
    return 0;
}