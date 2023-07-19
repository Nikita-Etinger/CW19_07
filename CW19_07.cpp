
#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int summ(int a, int b) {
    return a + b;
}
int dif(int a, int b) {
    return a - b;
}
void calc(int (* foo)(int, int), int a, int b) {
    cout<<foo(a, b)<<endl;
    //dif(a, b);

}

class Student {
private:
    vector<int >marks;
public:
    void generateMark() {
        srand(time(NULL));
        marks.push_back(rand() % 0 + 5);
    }
    void showMark() {
        for (auto mark : marks) {
            cout << mark<<endl;
        }
    }

};

class Journal {
    void (Journal::* lastOperation)(string);
    string list = "";
    string text;

public:
    void add(string text) {
        list += text;
        this->text = text;
        cout << "ADD: " << text<<endl;
    }

    void delLatsCharepter() {
        if (!list.empty()) {
            list.pop_back();
        }
    }

    void repiat(string) {
        (this->*lastOperation)(text);
        
    }
    void edit(string text) {
        cout << "New text:  " << text << endl;
        list = text;
    }

    void operationX(void (Journal::* foo)(string), string text = "") {
        (this->*foo)(text);
        lastOperation = foo;
        this->text = text;
    }
    void show(string) {
        cout << list << endl;
    }
};

void checkTime() {
    //функция которая измеряет время выполнения функции
    unsigned int start_time = clock();
    unsigned int finish_time = clock();
    unsigned int def_time = finish_time-start_time;
}

class Xxx {
    vector<int >data;

public:
    void add(int newInt) {
        data.push_back(newInt);
    }
    int getIndex(int index) {
        if (index > data.size()) throw ("out of range");
        else {
            return data[index];
        }
    }
    


};

float devision(float a, float b) {
    if (b == 0) {
        throw ("Division by zero!");
    }
    else return a / b;
}


void foo(void (*op)(string str),string str) {
   op(str);
}
int main() {
    Xxx x;
    x.add(5);


    try {
        cout << x.getIndex(3);
    }
    catch (const char* str) {
        cout << str << endl;

    }

    //Journal journal;
    //journal.operationX(&Journal::add, "hello");
    //journal.operationX(&Journal::repiat, "");
    //journal.operationX(&Journal::show, "");
    //journal.operationX(&Journal::edit, "AAAAAA");
    //journal.operationX(&Journal::show, "");
    //cout << devision(8, 0);


    //auto f1 = [](string name) {
    //    cout << "hello" << endl;
    //    cout << "My name is: " << name << endl;
    //};
    //try {
    //    cout << devision(8, 0);
    //    cout << "end" << endl;
    //}
    //catch (const char* str) {
    //    cout << str;

    

    //foo(f1, "poll");




    return 0;

}
