#include <iostream>
using namespace std;

int count;

extern void write_extern();

int main() {
    count = 10;
    write_extern();
}