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


