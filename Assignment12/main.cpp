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
// GOOD write students array to studentsOutput.txt file #3
    ofstream output;
    output.open("/Users/hchen24/Desktop/studentsOutput.txt", ios::out);
    for(int i =0; i<4; i++){
        output<<students[i].age<<" "<<students[i].gpa<<" "<<students[i].grade<<" "<<students[i].name<<endl;
    }
    output.close();
    
    //GOOD get studentsIn.txt file content into array #5
    ifstream input;
    input.open("/Users/hchen24/Desktop/studentsIn.txt", ios::in);
    string myArray[500];
    int i=0;
    string line;
    while (!input.eof()){
        getline (input,line);
        myArray[i] = line;
        cout<<myArray[i]<<endl;
        i++;
    }

    //writing myArray to studentsOutput.bin #6 GOOD
    fstream file("/Users/hchen24/Desktop/studentsOutput.bin", ios::out | ios::binary);
    file.write((char *) &myArray, sizeof(myArray));

        
    //get studentOutput.bin content into another array #7 GOOD
    string myArray2[500];
    ifstream inFile("/Users/hchen24/Desktop/studentsOutput.bin", ios::in | ios::binary);
    inFile.read((char*) &myArray2,sizeof(myArray));
    
    //compare arrays
    for(int a =0; a<7; a++){
        if(myArray[a] == myArray2[a]){
            cout<<"Both arrays match. Saved files is successfully validated."<<endl;
        } else{
            cout<< "The files didn't match."<<endl;
        }
    }
    
}

