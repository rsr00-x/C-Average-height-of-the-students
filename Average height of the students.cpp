#include <iostream>
using namespace std;
int main()
{
    const int numStudents=5;
    int heights[numStudents];
    int sum=0;

    cout<<"Enter the heights of 5 students (in centimeters): ";
    for (int i = 0; i < numStudents; ++i)
        {
        cout<<"Student "<<i + 1<<": ";
        cin >> heights[i];
        sum += heights[i];
    }

    double average=double(sum)/numStudents;

    cout<<"Average height of the students: "<<average<<" centimeters"<<endl;

    return 0;
}

