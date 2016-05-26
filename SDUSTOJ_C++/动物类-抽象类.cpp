#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class Animal
{
public:
 
    string name;
    char s;
    Animal(string nam,char ss):name(nam),s(ss) {}
    string getName()
    {
        return name;
    }
    char getSex()
    {
        return s;
    }
    virtual void cry()=0;
};
class Mouse:public Animal
{
public:
    Mouse(string nam,char ss):Animal(nam,ss) {}
    void cry()
    {
        cout<<"�ҽ�"<<name<<"����һֻ";
        if(s=='m')
        cout<<"��";
        if(s=='f')
        cout<<"Ů";
        cout<<"�����ҵĽ����ǣ�֨֨֨��"<<endl;
    }
};
class Cat:public Animal
{
public:
    Cat(string nam,char ss):Animal(nam,ss) {}
    void cry()
    {
        cout<<"�ҽ�"<<name<<"����һֻ";
        if(s=='m')
        cout<<"��";
        if(s=='f')
        cout<<"Ů";
        cout<<"è���ҵĽ����ǣ���������"<<endl;
    }
};
class Dog:public Animal
{
public:
    Dog(string nam,char ss):Animal(nam,ss) {}
    void cry()
    {
        cout<<"�ҽ�"<<name<<"����һ��";
        if(s=='m')
        cout<<"��";
        if(s=='f')
        cout<<"Ů";
        cout<<"�����ҵĽ����ǣ���������"<<endl;
    }
};
int main( )
{
    string nam;
    char s;
    cin>>nam>>s;
    Animal *p;
    Mouse m1(nam, s);
    p=&m1;
    p->cry();
    cin>>nam>>s;
    Mouse m2(nam, s);
    p=&m2;
    p->cry();
    cin>>nam>>s;
    Cat c1(nam, s);
    p=&c1;
    p->cry();
    cin>>nam>>s;
    Dog d1(nam, s);
    p=&d1;
    p->cry();
    return 0;
}