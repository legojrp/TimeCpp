#include <ctime>
#include <iostream>
#include <string>
using namespace std;
class Time {

public: 
Time(){
  toTime();
}
void testing(){
  cout << this->weekday << endl;
  cout << this->month << endl;
  cout << this->day << endl;
  
}
//methods
//attributes
private:
//methods
void convertTimeToSeperated(){
  string time = this->currentTime;
  this -> hour = time.substr(0,1);
  this -> minute = time.substr(3,4);
  this -> second = time.substr(6,7);
}
void toTime(){
  time_t rawtime;
  	std::time(&rawtime);  
  std::string time = ctime(&rawtime);
  this->date = time;
  this->weekday = time.substr(0,3);
  this->month = time.substr(4, 5);
  this->day = time.substr(7,7);
  }

//attributes
string date;
string weekday;
string month;
string day;
string currentTime;
string year;
string hour;
string minute;
string second;
};
