////Huan Chen Assignment12
//#include<iostream>
//#include<fstream>
//#include<filesystem>
//#include<string>
//using namespace std;
//
//struct studentInfo{
//    char name[100];
//    int age;
//    double gpa;
//    char grade;
//};
//
//studentInfo students[4]={{"emma", 17, 3.53, 'A'},{"John", 19, 3.33, 'B'}, {"Melissa", 20, 2.39, 'A'},{"Andy", 39, 3.63, 'B'}};
//
//int main(){
//    // GOOD
////    ofstream output;
////    output.open("/Users/hchen24/Desktop/studentsOutput.txt", ios::out);
////    for(int i =0; i<4; i++){
////        output<<students[i].age<<" "<<students[i].gpa<<" "<<students[i].grade<<" "<<students[i].name<<endl;
////    }
////    output.close();
////GOOD
//    ifstream input;
//    input.open("/Users/hchen24/Desktop/studentsIn.txt", ios::in);
//    string myArray[500];
//    int i=0;
//    string line;
//    
//    while (!input.eof() ){
//        getline (input,line);
//        
//        myArray[i] = line;
//   //     cout<<myArray[i]<<endl;
//        i++;
//  
//    }
////    cout<<"----"<<endl; //how to display the array
////    for(int i=0; i<=7; i++){
////        cout<<myArray[i]<<endl;
////    }
//
//    //writing second array to studentsOutput.bin
//    fstream file;
//    file.open("/Users/hchen24/Desktop/studentsOutput.bin", ios::out | ios::binary);
//    cout<<"Now writing myArray contents to the studentsOutput.bin file"<<endl;
//    for(int i=0; i<=7; i++){
//    file.write(myArray, sizeof(myArray));
//
//    }
//
//        
//    //       cout<<myArray[i]<<endl;
//       
//   
//   // cout<<"print"
//}
