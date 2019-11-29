#include "Stack.h"

using namespace std;

Stack::Stack() {
    m = new char[0];
    sz = 0;
}

void Stack::push(char a) {
    resize(size() + 1);
    m[size() - 1] = a;
}

char Stack::pop() {
    char c = m[size() - 1];
    resize(size() - 1);
    return c;
}

int Stack::read(istream& is) {
    int n;
    is >> n;
    resize(n);
    is >> m;
    return n;
}

int Stack::write(ostream& os) const {
    os << sz << endl;
    os << m << endl;
    return sz;
}

ostream& operator<< (ostream& os, const Stack& s) {
  cout << "Stack: " << s.size() << " [";
  for (int i=0; i<s.size(); ++i) {
    cout << s.mem()[i];
  }
  cout << "]";
  return os;
}
