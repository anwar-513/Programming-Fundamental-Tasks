#include<iostream>
#include<iomanip>
#include<string> 
using namespace std;

class StudentRegistry
{
    private:
        string studentNames[5];
        int studentIDs[5];
        int actualCount; 

    public:
        StudentRegistry() 
        {
            actualCount = 0;
            for(int i = 0; i < 5; i++) {
                studentNames[i] = "Empty";
                studentIDs[i] = 0;
            }
        }

        void addStudent(string name, int id) 
        {
            if (actualCount < 5) {
                studentNames[actualCount] = name;
                studentIDs[actualCount] = id;
                actualCount++;
            } else {
                cout << "Registry Full! Cannot add " << name << endl;
            }
        }

        void displayRegistry() 
        {
            if(actualCount == 0) {
                cout << "   No student records initialized yet." << endl;
                return;
            }
            cout << "   --- Enrolled Students List ---" << endl;
            for(int i = 0; i < actualCount; i++) 
            {
                cout << "   [" << i + 1 << "] ID: " << studentIDs[i] << endl;
                cout << "    | Name: " << studentNames[i] << endl;
            }
        }

        void getTopStudents(int threshold)
        {
            string topNames[5];   
            int topIDs[5];        
            int topCount = 0;

            for(int i = 0; i < actualCount; i++)
            {
                if(studentIDs[i] > threshold)
                {
                    topNames[topCount] = studentNames[i];
                    topIDs[topCount]   = studentIDs[i];
                    topCount++;
                }
            }

            if(topCount == 0)
            {
                cout << "   No students found with ID above " << threshold << endl;
                return;
            }

            cout << "   --- Students with ID above " << threshold << " ---" << endl;
            for(int i = 0; i < topCount; i++)
            {
                cout << "   [" << i + 1 << "] ID: " << topIDs[i] << " | Name: " << topNames[i] << endl;
            }
        }
};

class Course
{
    private:
        string batch;
        int studentsStrength;
        StudentRegistry registry; 

    public:
        Course(string iname, int iStrength)
        {
            batch = iname;
            studentsStrength = iStrength;
        }

        void registerStudent(string name, int id)
        {
            registry.addStudent(name, id);
        }

        void display()
        {
            cout << " Batch: " << batch << endl;
            cout << " Students Strength: " << studentsStrength << endl;
            registry.displayRegistry(); 
        }

        void showTopStudents(int threshold)
        {
            cout << " Batch: " << batch << endl;
            registry.getTopStudents(threshold);
        }
};

int main()
{
    Course batch[3] = {
        Course("Weekend", 10),
        Course("Full Week", 25),
        Course("3 days", 8)
    };

    batch[0].registerStudent("Anwar", 101);
    batch[0].registerStudent("Bilal", 102);

    batch[1].registerStudent("Ali", 201);
    batch[1].registerStudent("Zara", 250);
    batch[1].registerStudent("Omar", 180);

    batch[2].registerStudent("Saim", 301);

    cout << "========== Full Registry ==========" << endl;
    for(int i = 0; i < 3; i++)
    {
        cout << "Course Object " << i + 1 << ":" << endl;
        batch[i].display();
        cout << endl;
    }

    cout << "========== Top Students (ID > 150) ==========" << endl;
    for(int i = 0; i < 3; i++)
    {
        batch[i].showTopStudents(150);
        cout << endl;
    }

    return 0;
}