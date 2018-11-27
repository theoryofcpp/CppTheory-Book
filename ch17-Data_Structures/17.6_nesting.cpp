#include <iostream>
#include <string>

using namespace std;

struct book {
    string title;
    int book_id;
};

struct student {
    string name;
    int student_id;
}  john, cena;

student *p_student = &john;

john.name;
cena.student_id.title;
john.book_id.title;
p_student->title.student_id;