#include "AVL.h"
using std::string;

string greet(string name) {
    if (name.size() > 0) {
        return "Hello, " + name + "!";
    } else {
        return "Hi!";
    }
}