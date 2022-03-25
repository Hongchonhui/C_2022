#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main () {
string line;
int i;

ifstream file ("output.txt");

if (file.is_open()) {
i = 0;
while ( getline (file, line) ) {
cout << ++i << ". ";
cout << line << '\n';
}
file.close();
}
}
