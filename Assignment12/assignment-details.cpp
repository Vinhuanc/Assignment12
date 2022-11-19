Computer Science 1081 – Assignment #12 Program #1 (worth 300 points)
Follow the following steps to produce a program that writes out to multiple files, including in binary.
1. Create a structure definition with the tag “studentInfo” for a struct that will store the following g data:
a. Name: char array, 100 characters (one of which is the null terminator)
b. Age: integer
c. GPA: double
d. Grade: char
2. Create an array of 4 students and initialize the array with data
3. Write the data from the structure array to a text file called “studentsOutput.txt”
a. You should write out the data in the following format: age+““ +gpa+““+grade+““+name+“\n”
4. Create a different text file called “studentsIn.txt” with 8 students, create data in a similar format to your studentsOutput.txt file (the data should be different, but use the same format)
5. Read the “studentsIn.txt” file into a second array. Display the contents of the array to the screen (please choose a method of displaying the student data that is formatted nicely for the user)
6. Write the data from your second array to a file called “studentsOutput.bin”, in binary mode. You should write out the array one element at a time. You should not write out the structure one field at a time (like you did for the text file), but instead the entire structure all at once.
7. Read the data from your “studentsOutput.bin” file into a third array (to verify that you wrote it out in a way that is readable). Programmatically compare the contents of the two arrays (loop for each element, checking that all of the fields are the same), and report whether the results were the same to the screen (for example: “Save file was successfully validated”)
NOTE: do not use a string datatype in your struct definition, make sure you use a char array NOTE: use 3 digits of precision for the GPA in the text file
