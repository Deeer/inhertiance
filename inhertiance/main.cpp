//
//  main.cpp
//  inhertiance
//
//  Created by METC on 15/4/14.
//  Copyright (c) 2015年 METC. All rights reserved.
//

#include <iostream>

class Parent {
public:
    int i1 = 100;
protected:
    int i2 =200;
private:
    int i3 =300;
    
    
    
    
};
class Child1 :public Parent{
public:
    void show()
    {
        i1 = 200;
        i2 = 300;
    }
    
    
    
};

class Child2 :protected Parent{
    
public:
    void show()
    {
        i1 = 200;
        i2 = 300;
//        i3 = 300;
    }

    
};
class Child3 :private Parent{
    
public:
    void show()
    {
        i1 =200;
        i2 =200;
//        i3 =200;
        
    }
    
};
class MyRole{
    
public:
    void attack1() {}
    void attack2() {}
    void attack3() {}
    void attack4() {}
    void attack5() {}
    void attack6() {}
    void attack7() {}
    void attack8() {}
    
};
class Hero:private MyRole{
    
public:
    void hero_attack1(){
        this->attack1();
    }
    void hero_attack2()
    {
        this->attack2();
    }
    void hero_attack3()
    {
        this->attack3();
    }
};
class Enemy{
    
    MyRole role ;
public:
    void enemy_attack1()
    {
        role.attack4();
    }
    void enemy_attack2()
    {
        role.attack5();
    }
    void enemy_attack3()
    {
        role.attack6();
    }
    
    
};
int main(int argc, const char * argv[])
{

    // insert code here...
    Child1 c1 ;
    c1.i1 = 200;
// 无法访问 父类
//    c1.i2 =3200;
//    c1.i3 =300;
    
    
    Child2 c2 ;
//    无法访问 父类公开变量 、保护变量、私有变量
//    c2.i1=100;
    
    
    Child3  c3 ;
//    无法访问 父类公开变量、保护变量、私有变量
//    c3.i1 = 100;
 
    Hero h ;
    h.hero_attack1();
    h.hero_attack2();
    h.hero_attack3();
    
    Enemy e ;
    e.enemy_attack1();
    e.enemy_attack2();
    e.enemy_attack3();
 
    
    
    
    return 0;
}

