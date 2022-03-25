#include <iostream>
#include <string.h>

using namespace std;

class str {
private:
char txt [200];
public:
str (char* tt) {
strcpy (txt, tt);
}
str& operator ++ (int) {
for (int i = 0; txt[i]; i ++) txt[i] ++;
return *this;
}
str& operator -- (int) {
for (int i = 0; txt[i]; i ++) txt[i] --;
return *this;
}
void out() {
cout << txt << endl;
}
};

int main () {
str text("abc123");
text.out();
text ++;
text.out();
text --;
text.out();

return 0;
}
