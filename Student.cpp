#include <iostream>
using namespace std;

// OOP is A-PIE
    //https://medium.com/ta-tonthongkam/oop-%E0%B8%81%E0%B8%B2%E0%B8%A3%E0%B9%80%E0%B8%82%E0%B8%B5%E0%B8%A2%E0%B8%99%E0%B9%82%E0%B8%9B%E0%B8%A3%E0%B9%81%E0%B8%81%E0%B8%A3%E0%B8%A1%E0%B9%80%E0%B8%8A%E0%B8%B4%E0%B8%87%E0%B8%A7%E0%B8%B1%E0%B8%95%E0%B8%96%E0%B8%B8-introduction-to-oop-742bf35c9206
//https://medium.com/@phayao/4-%E0%B9%80%E0%B8%AA%E0%B8%B2%E0%B8%AB%E0%B8%A5%E0%B8%B1%E0%B8%81%E0%B8%82%E0%B8%AD%E0%B8%87-object-oriented-programming-247ca02c633b

class Student{
private:            //Encapsulation ความสามารถในการซ่อน data ที่มีอยู่กับคลาสนั้นๆ ป้องกันการเข้าถึง data จาก 3rd party และ Class อื่นๆ (Data Hiding), ในส่วนของการแก้ไขค่า หรือเข้าถึงค่า ต้องทำผ่าน method เท่านั้น
    string name; //ในกรณีนี้ไม่ต้องมี setname เพราะ นร เปลี่ยนชื่อเองไม่ได้
    double score; // ในกรณีนี้ไม่ต้องมี setscore เพราะ นร เปลี่ยนคะแนนเองไม่ได้
    
public:
    Student(string name){
        this->name = name;
        score = 0;
    }
    // Getter
    string getName(){
        return name;
    }

    // Setter
    void setName(string name) {
      this->name = name;
    }

    // Getter
    double getScore(){
        return score;
    }
    void addScore(double score){
        if (score>0)
            this->score+=score;
    }

}; // fields || attributes ->ข้อมูล

int main(){
    Student jotaro("Jotaro Kujo"),dio("Dio Brando");
    cout << jotaro.getName() << ", " << jotaro.getScore() << endl;
    cout << dio.getName() << ", " << dio.getScore() << endl << endl;

    jotaro.setName("Magikarp");
    jotaro.addScore(1);
    dio.addScore(10);
    
    cout << jotaro.getName() << ", " << jotaro.getScore() << endl;
    cout << dio.getName() << ", " << dio.getScore() << endl;

    return 0;
}

/*private - Only the (current class/คลาสปัจจุบัน) will have access to the field or method.

protected - Only the current class and subclasses (and sometimes also same-package classes) of this class will have access to the field or method.

public - Any class can refer to the field or call the method. */