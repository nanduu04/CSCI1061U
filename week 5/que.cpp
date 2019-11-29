#include "str.h"

class que {
    protected:
            str _storage;
    public:
        que();
        ~que(); 
        char pop();
        void push(char c); 
}

que::que() {
    _storage = str();
}

que::~que() {
    delete _storage;
}

char que::pop() {
    if (_storage.is_empty()) {
        return 0;
    }
    char result = _storage[_storage.length() - 1];
    str newStr(_storage.length() - 1);
    for (int i = 0 ; i < _storage.length() - 1; i++) {
        newStr[i] = _storage[i];
    }
    _storage = newStr;
    return result;
}

void que::push(char c) {
    _storage = _storage + str(c);
}

int que::size() {
    return _storage.length();
}

void compress() {
    str newStr(_storage.length());
    for (int i = 0 ; i < _storage.length(); i++) {
        newStr[i] = _storage[i];
    }
    _storage = newStr;
    return result;
}

