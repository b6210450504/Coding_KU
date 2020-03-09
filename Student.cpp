#include <iostream>
using namespace std;

// OOP is A-PIE
//https://medium.com/ta-tonthongkam/oop-%E0%B8%81%E0%B8%B2%E0%B8%A3%E0%B9%80%E0%B8%82%E0%B8%B5%E0%B8%A2%E0%B8%99%E0%B9%82%E0%B8%9B%E0%B8%A3%E0%B9%81%E0%B8%81%E0%B8%A3%E0%B8%A1%E0%B9%80%E0%B8%8A%E0%B8%B4%E0%B8%87%E0%B8%A7%E0%B8%B1%E0%B8%95%E0%B8%96%E0%B8%B8-introduction-to-oop-742bf35c9206
//https://medium.com/@phayao/4-%E0%B9%80%E0%B8%AA%E0%B8%B2%E0%B8%AB%E0%B8%A5%E0%B8%B1%E0%B8%81%E0%B8%82%E0%B8%AD%E0%B8%87-object-oriented-programming-247ca02c633b

class Student{
private:            //Encapsulation ความสามารถในการซ่อน data ที่มีอยู่กับคลาสนั้นๆ ป้องกันการเข้าถึง data จาก 3rd party และ Class อื่นๆ (Data Hiding), ในส่วนของการแก้ไขค่า หรือเข้าถึงค่า ต้องทำผ่าน method เท่านั้น
    string name;
    double score;
    
public:
    Student(string name){
        this->name = name;
        score = 0;
}
    string getName(){
        return name;
    }
    double getScore(){
        return score;
    }

}; // fields || attributes ->ข้อมูล

int main(){
    Student jotaro("Jotaro Kujo"),dio("Dio Brando");
    cout << jotaro.getName() << ", " << jotaro.getScore() << endl;
    cout << dio.getName() << ", " << dio.getScore() << endl;
    return 0;
}
