#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = "World";
    string s3;
    int len;
    
    // copy s1 into s2
    s3 = s1;
    cout << "s3: " << s3 << endl;
    
    // concatenates s1 and s2
    s3 = s1 + s2;
    cout << "s3: " << s3 << endl;
    
    // total length of s3 after concatenates
    len = s3.size();
    cout << "s3 length: " << len << endl;
    
    return 0;
}