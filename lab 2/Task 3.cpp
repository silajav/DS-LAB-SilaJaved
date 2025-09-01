// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int students, courses;
    cout<<"number of students: "<<endl;
    cin>>students;
    int** array = new int*[students];//rows
    
    for (int i=0; i<students; i++){
        cout<<"How many courses taken by student "<<i+1<<endl;
        cin>>courses;
        array[i]= new int[courses];//cols jagged arrayh
        int total=0;
        for(int j=0; j<courses; j++){
            cout<<"Enter marks for the "<<j+1<<" course: "<<endl;
            cin>>array[i][j];//enter marks
            total+=array[i][j];
        }
        cout<<"The Average for student "<<i+1<<"is "<<total/courses<<endl;
    }
    
    for (int i = 0; i < students; i++) {
    delete[] array[i];   // delete each row
    }
    delete[] array;          // delete the row-pointers

    return 0;
}
