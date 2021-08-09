//For testing and debugging only
#include "time.cpp"
#include <ctime>
#include <iostream>
#include <string>
using namespace std;
int main () {
  time_t rawtime;
	time(&rawtime);
std::string overall = ctime(&rawtime);
std::string weekday, month, day, time, year;
  cout << ctime(&rawtime);
  Time current;
  cout << current.testing();
};
