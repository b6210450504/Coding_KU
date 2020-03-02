#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
using namespace std;
typedef struct Student_
{
    string name;
    double score;
}Student;
void add_score(Student*stu,double score){
    stu->score+=score;
}
int main(){
    //เลือกพท. then, Ctrl+D 
    Student off={"Neostis",20.20};
    off.name="Cappa";
    add_score(&off,5);
    cout<<off.name<<" "<<off.score<<endl;

    ////http://marcuscode.com/lang/cpp/input-output
    //int number,testing;
    //double price;
    //string word;
    //char wspace[10];
//
    //std::cin >> number >> testing >> price; //c =console in= input
    //cin >> word;
    //cin.getline(wspace,10);
    //
    //std::cout << "Hello";
    //std::cout << std::endl; //end line
//
    //cout <<"Word: "<< word;
    //cout<<endl; // end line
//
    //cout << "number*price: " << number*price;
    //std::cout << "\n"; // end line
//
    //cout << "Testing: "<< testing;
    //cout << endl; //end line
//
    //double result=number*price;
    //printf("%.2lf\n",result);
//
    //cout <<"wspawn:"<< wspace;

    return 0;
}