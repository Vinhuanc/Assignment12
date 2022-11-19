//Huan Chen Assignment12
#include<iostream>
#include<fstream>
#include<filesystem>
#include<string>
using namespace std;

struct studentInfo{
    char name[100];
    int age;
    double gpa;
    char grade;
};

studentInfo students[4]={{"emma", 17, 3.53, 'A'},{"John", 19, 3.33, 'B'}, {"Melissa", 20, 2.39, 'A'},{"Andy", 39, 3.63, 'B'}};

int main(){
//    ofstream output;
//    output.open("/Users/hchen24/Desktop/studentsOutput.txt", ios::out);
//    for(int i =0; i<4; i++){
//        output<<students[i].age<<" "<<students[i].gpa<<" "<<students[i].grade<<" "<<students[i].name<<endl;
//    }
//    output.close();

    ifstream input;
    input.open("/Users/hchen24/Desktop/studentsIn.txt", ios::in);
    string myArray[500];
    int i=0;
    string line;
    
    while (!input.eof() ){
        getline (input,line);
        myArray[i] = line;
        cout<<myArray[i]<<endl;
        i++;
  
    }
//    cout<<"----"<<endl; //how to display the array
//    for(int i=0; i<=7; i++){
//        cout<<myArray[i]<<endl;
//    }

    ofstream output2;
    output2.open("/Users/hchen24/Desktop/studentsOutput.bin", ios::out | ios::binary);
        for(int i=0; i<=7; i++){
            output2.write(reinterpret_cast<char *>(&students[i]), sizeof(students));
        }
    output2.close();
    
    string myArray2[500];
    int a=0;
    string line2;
    fstream input2;
    input2.open("/Users/hchen24/Desktop/studentsOutput.bin", ios::in | ios::binary);
    while (!input2.eof() ){
        getline (input2,line2);
        myArray2[i] = line2;
        cout<<myArray2[a]<<endl;
        a++;
  
    }
//    for(int i=0; i<=7; i++){
//        input2.read(reinterpret_cast<char *>(&students[i]), sizeof(students));
//    }
    cout<<"array2 content ______-"<<endl;
        for(int i=0; i<=7; i++){
            cout<<myArray2[i]<<endl;
        }
}
