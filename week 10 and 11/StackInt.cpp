#include "StackInt.h"

using namespace std;

StackInt::StackInt() {
    m = new char[0];
    sz = 0;
}

void StackInt::push(int a) {
    resize(size() + 1);
    m[size() - 1] = a;
}

int StackInt::pop() {
    int c = m[size() - 1];
    resize(size() - 1);
    return c;
}

int StackInt::read(istream& is) {
    int n;
    is >> n;
    resize(n);
    is >> m;
    return n;
}

int StackInt::write(ostream& os) const {
    os << sz << endl;
    os << m << endl;
    return sz;
}

ostream& operator<< (ostream& os, const StackInt& s) {
  cout << "StackInt: " << s.size() << " [";
  for (int i=0; i<s.size(); ++i) {
    cout << s.mem()[i];
  }
  cout << "]";
  return os;
}
