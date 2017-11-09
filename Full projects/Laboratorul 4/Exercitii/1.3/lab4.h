using namespace std;

class Student {

    private:
        int note;
        string name;

    public:
        Student(int n = 0, string name = "Joe Doe");
        void setNote(int n);
        int getNote();

};

class StudentsGroup {

    private:
        int studentsNumber;
        Student *studentsList;

    public:
        StudentsGroup(int n);
        void showStudentsInGroup();

};
