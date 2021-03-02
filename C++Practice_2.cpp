#include <iostream>
using namespace std;

//// overloaded functions
//int sum (int a, int b)
//{
//  return a+b;
//}
//
//double sum (double a, double b)
//{
//  return a+b;
//}
//
//int main ()
//{
//  cout << sum (10,20) << '\n';
//  cout << sum (1.0,1.5) << '\n';
//  return 0;
//}
//
//// function template
//template <class T>
//T sum (T a, T b)
//{
//  T result;
//  result = a + b;
//  return result;
//}
//
//int main () {
//  int i=5, j=6, k;
//  double f=2.0, g=0.5, h;
//  k=sum<int>(i,j);
//  h=sum<double>(f,g);
//  cout << k << '\n';
//  cout << h << '\n';
//  return 0;
//}
//
//// function templates
//template <class T, class U>
//bool are_equal (T a, U b)
//{
//  return (a==b);
//}
//
//int main ()
//{
//  if (are_equal(10,10.0))
//    cout << "x and y are equal\n";
//  else
//    cout << "x and y are not equal\n";
//  return 0;
//}
//
////Non type template arguments
//template <class T, int N>
//T fixed_multiply (T val)
//{
//  return val * N;
//}
//
//int main() {
//  std::cout << fixed_multiply<int,2>(10) << '\n';
//  std::cout << fixed_multiply<int,3>(10) << '\n';
//}
//
////namespaces
//namespace foo
//{
//  int value() { return 5; }
//}
//
//namespace bar
//{
//  const double pi = 3.1416;
//  double value() { return 2*pi; }
//}
//
//int main () {
//  cout << foo::value() << '\n';
//  cout << bar::value() << '\n';
//  cout << bar::pi << '\n';
//  return 0;
//}
//
//// using
//namespace first
//{
//  int x = 5;
//  int y = 10;
//}
//
//namespace second
//{
//  double x = 3.1416;
//  double y = 2.7183;
//}
//
//int main () {
//  using namespace first;
//  cout << x << '\n';
//  cout << y << '\n';
//  cout << second::x << '\n';
//  cout << second::y << '\n';
//  return 0;
//}

//// arrays example
//#include <iostream>
//using namespace std;
//
//int foo [] = {16, 2, 77, 40, 12071};
//int n, result=0;
//
//int main ()
//{
//  for ( n=0 ; n<5 ; ++n )
//  {
//    result += foo[n];
//  }
//  cout << result;
//  return 0;
//}

////2D array
//int jimmy [5][3];
//int n,m;
//
//int main ()
//{
//  for (n=0; n<5; n++){
//  	for (m=0; m<3; m++)
//    {
//      jimmy[n][m]=(n+1)*(m+1);
//    }
//  }
//  for (n=0; n<5; n++){
//  	for (m=0; m<3; m++)
//    {
//      cout<<jimmy[n][m];
//    }
//    cout<<endl;
//  }    
//}

//// arrays as parameters
//#include <iostream>
//using namespace std;
//
//void printarray (int arg[], int length) {
//  for (int n=0; n<length; ++n)
//    cout << arg[n] << ' ';
//  cout << '\n';
//}
//
//int main ()
//{
//  int firstarray[] = {5, 10, 15};
//  int secondarray[] = {2, 4, 6, 8, 10};
//  printarray (firstarray,3);
//  printarray (secondarray,5);
//}

//// my first pointer
//int main ()
//{
//  int firstvalue, secondvalue;
//  int * mypointer;
//
//  mypointer = &firstvalue;
//  *mypointer = 10;
//  mypointer = &secondvalue;
//  *mypointer = 20;
//  cout << "firstvalue is " << firstvalue << '\n';
//  cout << "secondvalue is " << secondvalue << '\n';
//  return 0;
//}

//// more pointers
//int main ()
//{
//  int firstvalue = 5, secondvalue = 15;
//  int * p1, * p2;
//
//  p1 = &firstvalue;  // p1 = address of firstvalue
//  p2 = &secondvalue; // p2 = address of secondvalue
//  *p1 = 10;          // value pointed to by p1 = 10
//  *p2 = *p1;         // value pointed to by p2 = value pointed to by p1
//  p1 = p2;           // p1 = p2 (value of pointer is copied)
//  *p1 = 20;          // value pointed to by p1 = 20
//  
//  cout << "firstvalue is " << firstvalue << '\n';
//  cout << "secondvalue is " << secondvalue << '\n';
//  return 0;
//}

// more pointers
//int main ()
//{
//  int numbers[5];
//  int * p;
//  p = numbers;
//  *p = 10;
//  p++;  *p = 20;
//  p = &numbers[2];  *p = 30;
//  p = numbers + 3;  *p = 40;
//  p = numbers;  *(p+4) = 50;
//  for (int n=0; n<5; n++)
//    cout << numbers[n] << ", ";
//  return 0;
//}

//// pointers as arguments:
//void increment_all (int* start, int* stop)
//{
//  int * current = start;
//  while (current != stop) {
//    ++(*current);  // increment value pointed
//    ++current;     // increment pointer
//  }
//}
//
//void print_all (const int* start, const int* stop)
//{
//  const int * current = start;
//  while (current != stop) {
//    cout << *current << '\n';
//    ++current;     // increment pointer
//  }
//}
//
//int main ()
//{
//  int numbers[] = {10,20,30};
//  increment_all (numbers,numbers+3);
//  print_all (numbers,numbers+3);
//  return 0;
//}

////Memory allocation and deallocation (new and delete)
//int main ()
//{
//  int i,n;
//  int * p;
//  cout << "How many numbers would you like to type? ";
//  cin >> i;
//  p= new (nothrow) int[i];
//  if (p == nullptr)
//    cout << "Error: memory could not be allocated";
//  else
//  {
//    for (n=0; n<i; n++)
//    {
//      cout << "Enter number: ";
//      cin >> p[n];
//    }
//    cout << "You have entered: ";
//    for (n=0; n<i; n++)
//      cout << p[n] << ", ";
//    delete[] p;
//  }
//  return 0;
//}

//// Class example
//class Rectangle {
//    int width, height;
//  public:
//    Rectangle () {
//    	width = 5;
//		height = 5;
//	}
//	
//    Rectangle (int a, int b) {
//  		width = a;
//  		height = b;
//	}	
//	
//    int area (void) {
//    	return (width*height);
//	}
//};
//
//int main () {
//  Rectangle rect (3,4);
//  Rectangle rectb;
//  cout << "rect area: " << rect.area() << endl;
//  cout << "rectb area: " << rectb.area() << endl;
//  return 0;
//}

//// pointer to classes example
//class Rectangle {
//  int width, height;
//public:
//  Rectangle(int x, int y) : width(x), height(y) {}
//  int area(void) { return width * height; }
//};
//
//
//int main() {
//  Rectangle obj (3, 4);
//  Rectangle * foo, * bar, * baz;
//  foo = &obj;
//  bar = new Rectangle (5, 6);
//  baz = new Rectangle[2] { {2,5}, {3,6} };
//  cout << "obj's area: " << obj.area() << '\n';
//  cout << "*foo's area: " << foo->area() << '\n';
//  cout << "*bar's area: " << bar->area() << '\n';
//  cout << "baz[0]'s area:" << baz[0].area() << '\n';
//  cout << "baz[1]'s area:" << baz[1].area() << '\n';       
//  delete bar;
//  delete[] baz;
//  return 0;
//}	

//// Inheritence
//class Polygon {
//  protected:
//    int width, height;
//  public:
//    void set_values (int a, int b)
//      { width=a; height=b;}
// };
//
//class Rectangle: public Polygon {
//  public:
//    int area ()
//      { return width * height; }
// };
//
//class Triangle: public Polygon {
//  public:
//    int area ()
//      { return width * height / 2; }
//  };
//  
//int main () {
//  Rectangle rect;
//  Triangle trgl;
//  rect.set_values (4,5);
//  trgl.set_values (4,5);
//  cout << rect.area() << '\n';
//  cout << trgl.area() << '\n';
//  return 0;
//}

//// multiple inheritance
//class Polygon {
//  protected:
//    int width, height;
//  public:
//    Polygon (int a, int b) : width(a), height(b) {}
//};
//
//class Output {
//  public:
//    static void print (int i);
//};
//
//void Output::print (int i) {
//  cout << i << '\n';
//}
//
//class Rectangle: public Polygon, public Output {
//  public:
//    Rectangle (int a, int b) : Polygon(a,b) {}
//    int area ()
//      { return width*height; }
//};
//
//class Triangle: public Polygon, public Output {
//  public:
//    Triangle (int a, int b) : Polygon(a,b) {}
//    int area ()
//      { return width*height/2; }
//};
//  
//int main () {
//  Rectangle rect (4,5);
//  Triangle trgl (4,5);
//  rect.print (rect.area());
//  Triangle::print (trgl.area());
//  return 0;
//}

//// virtual members
//class Polygon {
//  protected:
//    int width, height;
//  public:
//    void set_values (int a, int b)
//      { width=a; height=b; }
//    virtual int area ()
//      { return 0; }
//};
//
//class Rectangle: public Polygon {
//  public:
//    int area ()
//      { return width * height; }
//};
//
//class Triangle: public Polygon {
//  public:
//    int area ()
//      { return (width * height / 2); }
//};
//
//int main () {
//  Rectangle rect;
//  Triangle trgl;
//  Polygon poly;
//  Polygon * ppoly1 = &rect;
//  Polygon * ppoly2 = &trgl;
//  Polygon * ppoly3 = &poly;
//  ppoly1->set_values (4,5);
//  ppoly2->set_values (4,5);
//  ppoly3->set_values (4,5);
//  cout << ppoly1->area() << '\n';
//  cout << ppoly2->area() << '\n';
//  cout << ppoly3->area() << '\n';
//  return 0;
//}

//// Abstract base class
//class Polygon {
//  protected:
//    int width, height;
//  public:
//    void set_values (int a, int b)
//      { width=a; height=b; }
//    virtual int area (void) =0;
//};
//
//class Rectangle: public Polygon {
//  public:
//    int area ()
//      { return width * height; }
//};
//
//class Triangle: public Polygon {
//  public:
//    int area ()
//      { return (width * height / 2); }
//};
//
//int main () {
//  Rectangle rect;
//  Triangle trgl;
//  //Polygon poly;
//  Polygon * ppoly1 = &rect;
//  Polygon * ppoly2 = &trgl;
//  //Polygon * ppoly3 = &poly;
//  ppoly1->set_values (4,5);
//  ppoly2->set_values (4,5);
//  //ppoly3->set_values (4,5);
//  cout << ppoly1->area() << '\n';
//  cout << ppoly2->area() << '\n';
//  //cout << ppoly3->area() << '\n';
//  return 0;
//}

// exceptions
int main () {
  try
  {
    throw 20;
  }
  catch (int e)
  {
    cout << "An exception occurred. Exception No. " << e << '\n';
  }
  return 0;
}
