#include <iostream> 
using namespace std; 
int main() {     
 // Taking input 
 int u, s, m, sm; 
 cout << "Enter the total No. of students: "; 
 cin >> u; 
 cout << "Enter the total No. of students of Sports club: "; 
 cin >> s; 
 cout << "Enter the total No. of students of Music club: "; 
 cin >> m; 
 cout << "Enter the students of sports and music clubs: "; 
 cin >> sm; 
     
 // Displaying the values 
 cout << "\n\nThe total No. of students are: " << u << endl; 
 cout << "The students in sports club is: " << s << endl; 
 cout << "The students in music club is: " << m << endl; 
 cout << "The students in sports and music club is: " << sm << endl; 
  cout<<"\n\nCalculation "; 
     
 // Total number of students who are members of at least one of the clubs 
 int atleastone = s + m - sm; 
 cout << "The students in at least one club is: " << atleastone << endl; 
     
 // The number of students who are only members of the Sports Club 
 int sportsclubs = s - sm; 
 cout << "The number of students in sports club only is: " << sportsclubs << endl; 
     
 // The number of students who are only members of the Music Club 
 int musicclubs = m - sm; 
 cout << "The number of students in music club only is: " << musicclubs << endl; 
     
 // Students who are members of neither of the two clubs 
 int neither = u - atleastone; 
 cout << "The number of students in neither of the two clubs is: " << neither << endl; 
 
 return 0; 
}
