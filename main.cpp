#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of subjects";
    cin>>n;
    float marks[100];
    float total=0;
    for(int i=0;i<n;i++){
        cin>>marks[i];
        total+=marks[i];
    }
    cout << "Total Marks: " << total << " / " << n * 100 << endl;
    float percentage = total / (n * 100) * 100;

char grade;

if (percentage >= 90)
    grade = 'A';
else if (percentage >= 80)
    grade = 'B';
else if (percentage >= 70)
    grade = 'C';
else if (percentage >= 60)
    grade = 'D';
else
    grade = 'F';

cout << "Percentage: " << percentage << "%" << endl;
cout << "Grade: " << grade << endl;
if (percentage >= 40)
    cout << "Result: PASS" << endl;
else
    cout << "Result: FAIL" << endl;
    return 0;
}