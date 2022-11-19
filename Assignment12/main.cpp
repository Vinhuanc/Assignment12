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
    if(!output){
        cout<<"Error opening file"<<endl;
        return 0;
    }
    for(int i =0; i<4; i++){
        output<<students[i].age<<" "<<students[i].gpa<<" "<<students[i].grade<<" "<<students[i].name<<endl;
    }
    output.close();
    
    //GOOD get studentsIn.txt file content into array #5
    ifstream input;
    if(!input){
        cout<<"Error opening file"<<endl;
        return 0;
    }
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
    if(!file){
        cout<<"Error opening file"<<endl;
        return 0;
    }
    file.write((char *) &myArray, sizeof(myArray));

        
    //get studentOutput.bin content into another array #7 GOOD
    string myArray2[500];
    ifstream inFile("/Users/hchen24/Desktop/studentsOutput.bin", ios::in | ios::binary);
    if(!inFile){
        cout<<"Error opening file"<<endl;
        return 0;
    }
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

//Computer Science 1081 – Assignment #12 Program #1 (worth 300 points)
//Follow the following steps to produce a program that writes out to multiple files, including in binary.
//1. Create a structure definition with the tag “studentInfo” for a struct that will store the following g data:
//a. Name: char array, 100 characters (one of which is the null terminator)
//b. Age: integer
//c. GPA: double
//d. Grade: char
//2. Create an array of 4 students and initialize the array with data
//3. Write the data from the structure array to a text file called “studentsOutput.txt”
//a. You should write out the data in the following format: age+““ +gpa+““+grade+““+name+“\n”
//4. Create a different text file called “studentsIn.txt” with 8 students, create data in a similar format to your studentsOutput.txt file (the data should be different, but use the same format)
//5. Read the “studentsIn.txt” file into a second array. Display the contents of the array to the screen (please choose a method of displaying the student data that is formatted nicely for the user)
//6. Write the data from your second array to a file called “studentsOutput.bin”, in binary mode. You should write out the array one element at a time. You should not write out the structure one field at a time (like you did for the text file), but instead the entire structure all at once.
//7. Read the data from your “studentsOutput.bin” file into a third array (to verify that you wrote it out in a way that is readable). Programmatically compare the contents of the two arrays (loop for each element, checking that all of the fields are the same), and report whether the results were the same to the screen (for example: “Save file was successfully validated”)
//NOTE: do not use a string datatype in your struct definition, make sure you use a char array NOTE: use 3 digits of precision for the GPA in the text file
