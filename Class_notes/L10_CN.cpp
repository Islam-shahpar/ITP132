#include <iostream>
using namespace std;

int main() {
  string country = "USA";
  //cout << &country << endl;
  string &ref_country = country;

  string new_country = "Brazil";

  ref_country = "Canada";

  cout << "Country : " << country << endl;
  cout << "Ref_country : " << ref_country << endl;
  cout << "New_country : " << &new_country << endl;

  string *xp = &ref_country; 
  string *yp = &new_country;
  cout << "XP : " << *xp << endl;

  // cout << "YP : " << *yp << endl;

  xp = yp; 

  cout << "After Country : " << country << endl;
  cout << "After Ref_country : " << ref_country << endl;
  cout << "After XP : " << *xp << endl;
  

}
//int country_number = 20;
//int xp = country_number; -> xp = 20;
//int *xp = &country_number; -> xp = 0x7ffe74afc010