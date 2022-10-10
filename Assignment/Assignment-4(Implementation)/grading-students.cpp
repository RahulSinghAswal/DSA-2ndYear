#include <bits/stdc++.h>

using namespace std;

vector<int> gradingStudents(vector<int> grades) 
{
    for (int i = 0; i < grades.size(); i ++ ){
        if (grades[i] >= 38){
            int rem = grades[i] % 5;
            if ((5 - rem) < 3){
            grades[i] += 5 - rem;
            }
        }
    }
    return grades;
}

int main()
{
    int grades_count, grade;
    cin >> grades_count;
    vector<int> grades(grades_count);

    for (int i = 0; i < grades_count; i++) {
        grade = 0;
        cin >> grade;
        grades[i] = grade;    
    }

    vector<int> result = gradingStudents(grades);

    for (size_t i = 0; i < result.size(); i++) 
        cout << result[i] << endl;
        

    return 0;
    }
    
