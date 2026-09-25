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
    return 0;
}