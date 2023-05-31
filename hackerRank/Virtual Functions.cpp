#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person
{
 protected:
  string name;
  int age;

 public:
  virtual void getdata() = 0;
  virtual void putdata() = 0;
};

class Professor : public Person
{
 private:
  int publications, cur_id;
  static int temp_id;

 public:
  void getdata() override
  {
    cin >> name >> age >> publications;
    cur_id = temp_id;
    temp_id++;
  }
  void putdata() override
  {
    cout << name << " " << age << " " << publications << " " << cur_id << endl;
  }
};

class Student : public Person
{
 private:
    int marks[6], cur_id;
    static int temp_id;

 public:
  void getdata() override
  {
    cin >> name >> age;
    for (int i = 0; i < 6; i++)
    {
      cin >> marks[i];
    }
    cur_id = temp_id;
    temp_id++;
  }
  void putdata() override
  {
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
      sum += marks[i];
    }
    cout << name << " " << age << " " << sum << " " << cur_id << endl;
  }
};

int Professor::temp_id = 1;
int Student::temp_id = 1;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
