#include<iostream>
using namespace std;

class Hero
{
    //properties
    public:
    int health;
    char level;
    
};


int main()
{
    //creation of object
    Hero surajit;

    surajit.health=100;
    surajit.level='A';

    cout<<"Health is :"<<sizeof (surajit)<<endl;
    cout<<"Level is :"<<surajit.level<<endl;
}
