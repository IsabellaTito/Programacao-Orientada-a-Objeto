#include <iostream>
#include <string>
#include <cctype>

using std::string;

string min(string &nome){
    string temp;
    for( auto &a : nome){
        temp += tolower(a);
    }
    return temp;
};

int main(){

    string s;
    std::cout <<"Digite uma palavra: ";
    std::cin >> s;

    std::cout << min(s) << std::endl;
    return 0;
}
