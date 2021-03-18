#include <iostream>
#include <memory> 
using namespace std;

void my_func()
{
    int* valuePtr = new int(15);
    int x = 45;
    // ...
    if (x == 45)
        return;   // here we have a memory leak, valuePtr is not deleted
    // ...
    delete valuePtr;
}

void my_func1()
{
    std::unique_ptr<int> valuePtr(new int(15));
    int x = 45;
    // ...
    if (x == 45)
        return;   // no memory leak anymore!
    // ...
}

void UseRawPointer()
{
    // Using a raw pointer -- not recommended.
    Rectangle* r = new Rectangle(5,10);

    // Use r...

    // Don't forget to delete!
    delete r;
}

void UseSmartPointer()
{
    // Declare a smart pointer on stack and pass it the raw pointer.
    unique_ptr<Rectangle> r1(new Rectangle(5,10));

} // r1 is deleted automatically here.

class LargeObject
{
public:
    void DoSomething() {}
};

void ProcessLargeObject(const LargeObject& lo) {}
void SmartPointerDemo()
{
    // Create the object and pass it to a smart pointer
    std::unique_ptr<LargeObject> pLarge(new LargeObject());

    //Call a method on the object
    pLarge->DoSomething();

    // Pass a reference to a method.
    ProcessLargeObject(*pLarge);

} //pLarge is deleted automatically when function block goes out of scope.

void SmartPointerDemo2()
{
    // Create the object and pass it to a smart pointer
    std::unique_ptr<LargeObject> pLarge(new LargeObject());

    //Call a method on the object
    pLarge->DoSomething();

    // Free the memory before we exit function block.
    pLarge.reset();

    // Do some other work...

}

class Rectangle {
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }
};

int main()
{
    //--------------Normal Pointer--------------
    Rectangle* p1 = new Rectangle(10, 5);
    delete[] p1;

    //--------------Unique Pointer-----------------

    //unique_ptr<Rectangle> P1(new Rectangle(10, 5));
    //cout << P1->area() << endl; // This'll print 50 

    ////unique_ptr<Rectangle> P2(P1); 

    //unique_ptr<Rectangle> P2;
    //P2 = move(P1);

    //// This'll print 50 
    //cout << P2->area() << endl;

    //// cout<<P1->area()<<endl; 
    //return 0;
    
    //--------------Shared Pointer-----------------
    
    //shared_ptr<Rectangle> P1(new Rectangle(10, 5));
    //// This'll print 50 
    //cout << P1->area() << endl;

    //shared_ptr<Rectangle> P2;
    //P2 = P1;

    //// This'll print 50 
    //cout << P2->area() << endl;

    //// This'll now not give an error, 
    //cout << P1->area() << endl;

    //// This'll also print 50 now 
    //// This'll print 2 as Reference Counter is 2 
    //cout << P1.use_count() << endl;
    //return 0;   


    //shared_ptr<int> p0(new int(5));  // Valid, allocates 1 integer and initialize it with value 5.
    //shared_ptr<int[]> p1(new int[5]);  // Valid, allocates 5 integers.
    //shared_ptr<int[]> p2 = p1;  // Both now own the memory.
    //p1.reset();  // Memory still exists, due to p2.
    //p2.reset();  // Frees the memory, since no one else owns the memory.  
    
}