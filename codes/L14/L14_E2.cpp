#include <iostream>
#include <string>
using namespace std;

class Course {//base class
  protected:
      string faculty;
  
  public:
    int courseID;
    string courseName;
    string semester = "SPRING2021";

    // Course(string coursename, int courseID) {
    //   cout << "My course is: " << coursename << courseID << endl;
    // }

    // Course(string coursename, int courseID, string semester){
    //    cout << "My course is: " << coursename << courseID << " Semester: " << semester << endl;
    // }

    string getFaculty(){
      return faculty;
    }
    
    void setFaculty(string facultyName){
      faculty = facultyName;
    }

};

class CourseType : public Course {//child class
  public:
    string courseType;
    string facultyName = faculty;
};


int main(){
  // Course nvcc("ITN",254);
  // nvcc.setFaculty("Shahpar");
  // string facultyName = nvcc.getFaculty();
  // cout << facultyName << endl;

  // Course wcc("ITP",132, "SUMMER2021");
  // wcc.setFaculty("Shahpar");
  // string facultyName_2 = wcc.getFaculty();
  // cout << facultyName_2 << endl;

  CourseType pgcc; 
  pgcc.courseName = "ITP";
  pgcc.courseID = 132;
  pgcc.courseType = "Online";

  cout << "Course : "  
  << pgcc.courseName << pgcc.courseID
  << " Course type: " << pgcc.courseType 
   << endl;


  
}