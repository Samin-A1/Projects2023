#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main () {
vector <string> wordlist = {"apple", "banana" };
for (vector <string>::iterator t=wordlist.begin(); t!=wordlist.end(); ++t) {
    cout << *t << endl;
}
return 0;
}
