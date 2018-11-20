#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s1[10] = "Hello";
    char s2[10] = "World";
    char s3[10];
    int len;
    
    // copy s1 into s3
    strcpy(s3, s1);
    cout << "strcpy(s3, s1): " << s3 << endl;
    
    // concatenates s1 and s2
    strcat(s1, s2);
    cout << "strcat(s1, s2): " << s1 << endl;
    
    // total length of s1 after concatenates
    len = strlen(s1);
    cout << "length of s1 after concatenates is: " << len << endl;
    
    return 0;
}