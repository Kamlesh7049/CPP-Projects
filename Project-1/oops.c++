#include <iostream>
using namespace std;
// class bhopal
// {
//     public:void show(){ //bydefult private hota hai esliye public banate hai
//         //acces specifire /modifire
//     cout<<"welcom";
//     }
// };
// int main()
// {
//     bhopal b;
//     b.show();//b is obect 
// }
// Types of classes there are following class
// 1. single class -->one class make in program called single 
// 2.Anonumus class--name less a class which does not its own names 
// 3.Multi class--> if you are make more than onee class.
// 
// class table
// {
    
//     public:void show(int a){ //bydefult private hota hai esliye public banate hai
//         //acces specifire /modifire
//         for(int i=1;i<=10;i++){
//     cout<<i*a;
//         }
//     }
// };
// int main()
// {
//     int n;
//     cout<<"enter any no:";
//     cin>>n;
//     table b;
//     b.show(n);//b is obect 
// }

// funtion declare & define inside of a class 
// --------------------------------------------
// class top
// {
//     int a,b,c;
//     public:void sum(int x,int y)
//     {
//         a=x;
//         b=y;
//         c=a+b;

//     }
//     void show()
//     {
//         cout<<"result="<<c;

//     }
// };
// int main()
// {
//     top t;
//     int s,b;
//     cout<<"enter 2 nos:";
//     cin>>s>>b;
//     t.sum(s,b);
//     t.show();

// }


// funtion declare inside a class but difine outside of class
// --------------------------------------------------------------

// class top
// {
//      int a,b,c; // data member 
//     public:void sum(int x,int y);
//     void show();
// };
// void top::sum(int x,int y)
//     {
//         a=x;
//         b=y;
//         c=a+b;

//     }

//     void top::show()
//     {
//         cout<<"result="<<c;

//     }
// int main()
// {
//     top t;
//     int s,b;
//     cout<<"enter 2 nos:";
//     cin>>s>>b;
//     t.sum(s,b);
//     t.show();

// }

// confilct 
// --------------

// class top
// {
//     int a,b,c; // data member 
//     public:void sum(int a,int b);
//     {
//         this->a=a;
//         this->b=b;
//         c=a+b;
//     }

//     void show()
//     {
//         cout<<a<<"+"<<b<<"="<<c;
//     }

// void top::sum(int x,int y)
//     {
//         a=x;
//         b=y;
//         c=a+b;

//     }

//     void top::show()  
//     {
//         cout<<"result="<<c;

//     }
// };

// int main()
// {
//     top t;
//     int s,b;
//     cout<<"enter 2 nos:";
//     cin>>s>>b;
//     t.sum(s,b);
//     t.show();

// }
// multi funtion
// --------------------

// class top 
// {
// public:void show()
// {
//     cout<<"show\n";

// }
// void display()
// {
//     cout<<"display\n";
// }
// };
// int main()
// {
// top p;
// p.show();
// }

// funtion Overloading
// ----------------------------
// class top 
// {
// public:void show()
// {
//     cout<<"show\n";

// }
// void show( int a)
// {
//     cout<<"display\n";
// }
// };
// int main()
// {
// top p;
// p.show();
// p.show(80);
// }  


// class top 
// {
// public:void show(int a,int b)
// {
//     cout<<"int addition="<<a+b<<"\n";

// }
// void display(float x,float y)//by defult duble hota hai
// {
//     cout<<"float addition="<<x+y<<"\n";
// }
// };
// int main()
// {
// top p;
// p.show(float(78.8),float(98.5));
// p.show(7,8);
// }



// class top 
// {
// public:void show(int a,int b)
// {
//     cout<<"int addition="<<a+b<<"\n";

// }
// void display(float x,float y)//by defult duble hota hai
// {
//     cout<<"float addition="<<x+y<<"\n";
// }
// }; 
// int main()
// {
// top p;
// p.show(float(78.8),float(98.5));
// p.show(7,8);
// }
 


//  static member fn can we acced with help of using scope resulation we need not to creat any is_object
//  note: the data member static member shoul we 
//  we should inislize the static  data member  outside the class 

//  Example:-

// class cybrom
// {
//     public:static int a,b,c;
//     public:static void sum(int x,int y)
//     {
//         c=x+y;
//         cout<<c;

//     }
// };
// int cybrom::c=0;
// int main()
// {
//     int x,y;
//     cout<<"enter any 2 nos\n";
//     cin>>x>>y;
//     cybrom::sum(x,y)
// }


// a composite class  contain of the preves class tha can with help of that invoked the memmere fn of preveos 
// the member funtion privioiu class frst


// class cybrom
// {
// public :void show()
// {
// cout<<"cybrom class\n";
// }

// };
// class bhopal
// {
//     cybrom c;
//     public:void display()
//     {
//         c.show();
//         cout<<"bhopal class\n";
//     }
// };
// int main(){
//     bhopal b;
//     b.display();
// }


// Friend Funtion 
// -------------------------
// class tenth;
// class twelve
// {
//     int a;
//     public:twelveresult(int p)
//     {
//         a=p;

//     }
//     friend void show()(twelve,tenth);
    
//     };

//     friend void show(twelve,tenth);
    
   
   
//     };



// COnstructer. BY DEFAULT PUBLIC HOTA 
// --------------------------------------------------


// implicite calling(khude se )'
// EXPLICITE CALLING
// BY default constructer

  


// class student


// {
//     public:student()
//     {
//         cout<<"memory allocte\n";
//     }
//     void hello()
//     {
//         cout<<"hello";
//     }
// };
// int main()
// {
//     student s;//implicite
//     s.hello();//explicite
// }


// CPP Bottom to Top AProuch



// int main()
// {
//     cout<<"\nwelcom";
// }
// class student


// {
//     public:student()
//     {
//         cout<<"memory allocte\n";
//     }

// };



// constructer overloading //constructer dosnt return type atoumatic call 
// -------------------------------

// class student
// {
//     public:student(int a,int b) //parameterize constructer
//     {
//         cout<<"memory allocte\n";
//     }
//     student()//default
//     {
//         cout<<"\n constructer overloading";
//     }
// };
// int main()
// {
//     student d(4,5);
//     student r;;
// }
    

// shallow copy cpp content these shallow coppy inside a class 

// ---------------------------------------------------------------

// class top
// {
//     int x,y;
//     public:top(int a,int b)

//     {
//         x=a;
//         y=b;
//     }  
//     void show()
//     {
//         cout<<"x="<<x<<"\n";
//         cout<<"y="<<y;
//     }
// };
// int main()
// {
//     top p1(40,50);
//     // top p2=p1;//implicit assignment copy constructer// by default bani banai hoti hai
//     top p2(p1);//call shallow copy constructer
//     p2.show();
// }


// Destructer:dstr is used to relesed the memory of occufied of mememory objet dstr is created by ~ tild symble using with class name 
// ------------------------------
// dont have any type
// also called automatic
// it is call the last


// class top {
//     public:top()
//     {
//         cout<<"welcom\n";
//     }
//     ~top()
//     {
//         cout<<"memeory relesd\n";
//     }
// };
// int main()
// {
//     top t;
//     cout<<"how r u\n";
//     cout<<"bye\n";
// }


// Operator  Overloading  (to use complex data type ) :- IS used to solve these complex data types which is used nonprimitive data type there are two 
// type of op ovrloading 1.Unary op ovrding
                        // 2.Binarry op ovrding

// -------------------------- -----

    //  operator overloading use nonprimitive data type me use 


    // class top
    // {
    //     int a;
    //     public:top(int x)
    //     {
    //         a=x;

    //     }
    //     void operator ++()//unarry oprator overloading
    //     {
    //         cout<<a+1<<"\n";
    //     }
    //     void operator --()//unarry operator ovrloading
    //     {
    //         cout<<a-1<<"\n";
    //     }
    // };    
    // int main()
    // {
    //     top obj(20);
    //     ++obj;
    //     --obj;

    // }


    
    // class top
    // {
    //     int a;
    //     public:top(int x)
    //     {
    //         a=x;

    //     }
    //     void operator +(top p1)//Binarry oprator overloading
    //     {
    //         cout<<"sum="<<a+p1.a<<"\n";
    //     }
       
    // };    
    // int main()
    // {
    //     top obj1(20);
    //     top obj2(30);
    //     obj1+obj2;

       

    // }



    // Inheritance :-inh is used to access the property of parent class there are 5 types of inheritance


    // ---------------------------------------------------------------------------------------------------------
    // 1.single : in a single inh we used two  classes where the last class is called chaild class nad previous class is called parent class we always 
    // creat child class and with help  it acess the data member and mem fn bothn class 

    // class rbi
    // {
    //     int t;
    //     public:void show()
    //     {
    //         cout<<"rbi class\n";
    //     }
    // };
    // class sbi:public rbi
    // {
    //     int a;
    //     public;void display()
    //     {
    //         cout<<"sbi\n";

    //     }
    // };
    // int main()
    // {
    //     sbi obj;
    //     cout<<sizeof(obj)<<"\n";
    //     obj.display();
    //     obj.show();
    // }

    // 2.multilevel :more than two

    // class rbi
    // {
    //     int t;
    //     public:void show()
    //     {
    //         cout<<"rbi class\n";
    //     }
    // };
    // class sbi:public rbi
    // {
    //     int a;
    //     public:void display()
    //     {
    //         cout<<"sbi\n";

    //     }
    // };
    // class customer:public sbi
    // {
    //     int b;
    //     public:void cust()
    //     {
    //         cout<<"maza aa gya \n";
    //     }
    // };
    // int main()
    // {
    //     customer obj;
    //     cout<<sizeof(obj)<<"\n";
    //     obj.display();
    //     obj.show();
    //     obj.cust();
    // }

    //  protected// like vairous



    class rbi
    {
        int t;
        public:void show()
        {
            cout<<"rbi class\n";
        }
    };
    class sbi:public rbi
    {
        int a;
        public:void display()
        {
             show();
            cout<<"sbi\n";

        }
    };
    class customer:public sbi
    {
    

        int b;
        public:void cust()
        {
            cout<<"maza aa gya \n";
        }
    };
    int main()
    {
        customer obj;
        cout<<sizeof(obj)<<"\n";
        obj.display();
        // obj.show();
        obj.cust();
    }
    // 3.multiple inhertitance 
    // 4.hirerical inhertance 
    // 5.hybride inharetance

     


