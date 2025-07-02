#include <iostream>
using namespace std;
struct student{
    int id;
    string name;
    float marks;
};
int main() {
    student s = {898,"jas",56};
    cout << "id " << s.id << endl;
    cout << "name " << s.name << endl;
    cout << "marks " << s.marks << endl;
    return 0;
}
