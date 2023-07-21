#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp1
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks < b.marks)
        {
            return true;
        }
        else if (a.marks > b.marks)
        {
            return false;
        }
        else
        {
            if (a.roll > b.roll)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};

int main()
{
    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, cmp1> pque;

    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        int marks;

        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pque.push(obj);
    }

    int caseN;
    cin >> caseN;
    for (int i = 0; i < caseN; i++)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            string name;
            int roll;
            int marks;

            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            pque.push(obj);

            cout << pque.top().name << " "
                 << pque.top().roll << " "
                 << pque.top().marks << " "
                 << endl;
        }
        else if (x == 1)
        {
            if (pque.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pque.top().name << " "
                     << pque.top().roll << " "
                     << pque.top().marks << " "
                     << endl;
            }
        }
        else if (x == 2)
        {
            if (pque.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pque.pop();
                if (pque.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << pque.top().name << " "
                         << pque.top().roll << " "
                         << pque.top().marks << " "
                         << endl;
                }
            }
        }
    }

    // __________
    return 0;
}

// You will be given a list A of size N.
// The list will contain data of some students where each student have Name, Roll and Marks.
// Then you will be given Q queries, for each query there will be some commands. Commands are given below -

// 0 X -> Insert X into the list where X is the data of a student which contain Name, Roll and Marks. Then print the current student's data who has the maximum Marks from the list.
// 1 -> Print the current student's data who has the maximum Marks from the list.
// 2 -> Delete the student who has the maximum Marks from the list and print the current student who has the maximum Marks from the list.
// Note: If there are multiple students with same Marks then we will select whose Roll is smaller.
// If the list is empty and you can't print anything then you should print "Empty".

// Input Format

// First line will contain N.
// Next N lines will contain Name, Roll and Marks of student A[i].
// Third line will contain Q.
// Next Q lines will contain the commands.