// Average Calculator //

#include <iostream>
using namespace std;

int main()
{
    // Average in singular subject //
    int Grade;
    int FinaleGrade;
    int BehaviourInSubject;
    double SubjectAverage = (Grade + FinaleGrade + BehaviourInSubject) / 3;
    cout << SubjectAverage;

    // Average in total //
    int subject1;
    int subject2;
    int subject3;
    int subject4;
    int subject5;
    float Average = (subject1 + subject2 + subject3 + subject4 + subject5) / 5;
    cout << Average;
    return 0;
}