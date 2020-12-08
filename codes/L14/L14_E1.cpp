#include <iostream>
#include <string>
//Add the header of file
#include <fstream>
using namespace std;

void saveInfo();
void displayInfo();

int main(){
  saveInfo();
  displayInfo();
  return 0;
}

void saveInfo(){
  string title = "";
  string author = "";

  //create file object and open the file
  ofstream outFile;
  outFile.open("eBooks.txt",ios::app);

  //determine whether the file was opened 
  if (outFile.is_open()){
    cout << "Title (-1 to stop): ";
    getline(cin, title);
    while (title != "-1"){
      cout << "Author: ";
      getline(cin, author);
      //write the record

      outFile << title << "#" << author << endl;

      cout << "Title (-1 to stop): ";
      getline(cin, title);
    }
    outFile.close();
  }else{
    cout << "eBooks.txt file could not be opened" << endl;
  }

}

void displayInfo(){
  string title = "";
  string author = "";

  //create file object an open the file 
  ifstream inFile;
  inFile.open("eBooks.txt", ios::in);

  //determine whether the file was opened 
  if(inFile.is_open()){
    cout << endl << endl << "eBook Collection" << endl;
    cout << "-----------------------------" << endl;

    //read a record 
    getline(inFile, title, '#');
    getline(inFile, author);

    while (!inFile.eof()){
      //display the record 
      cout << title << " by " << author << endl;
      //read another record 
      getline(inFile, title, '#');
      getline(inFile, author);
    }
    inFile.close();
  }else{
    cout << "eBooks.txt file could not be opened" << endl;
  }
}
