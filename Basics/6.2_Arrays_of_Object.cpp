#include<iostream>
using namespace std;

class Course
{
    private:
        string batch;
        int studentsStrength;
    public:
        Course(string iname, int iStrength)
        {
            batch = iname;
            studentsStrength = iStrength;
        }

        void display()
        {
            cout<<" Batch: "<<batch<<endl;
            cout<< "Students Strength: "<<studentsStrength <<endl;
        }

};

int main()
{
    Course batch[3] = {
        Course("Weekend", 10),
        Course("Full Week", 25),
        Course("3 days ", 8)
    };

    for(int i = 0; i < 3; i++)
    {
        cout<< "Course's Object "<< i+ 1<<":"<<endl;
        batch[i].display();
        cout << endl;
    }

    return 0;
    
}