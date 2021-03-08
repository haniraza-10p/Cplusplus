#include <iostream>
#include<tuple>
#include <string>

using namespace std;

////Pair Template
//int main ()
//{
//   pair<int,int> pair1, pair3;    //creats pair of integers
//   pair<int,string> pair2;    // creates pair of an integer an a string
//    
//   pair1 = make_pair(1, 2);
//   pair2 = make_pair(1, "Studytonight");
//   pair3 = make_pair(2, 4);
//   cout<<"First element of pair 1 : "<< pair1.first << endl;
//   cout<<"Second element of pair 2 : "<< pair2.second << endl;
//
//   if(pair1 == pair3)
//        cout<< "Pairs are equal" << endl;
//   else
//        cout<< "Pairs are not equal" << endl;
//   
//   return 0;
//}

//TUPLE in STL
//syntax
// creates tuple of three object of type T1, T2 and T3
//tuple<T1, T2, T3> tuple1;  

//int main()
//{
//    std::tuple<int, int, int> tuple1;
//    std::tuple<int, string, string> tuple2;
//
//    tuple1 = make_tuple(1,2,3);  
//    tuple2 = make_tuple(1,"Studytonight", "Loves You");
//    
//    int id;
//    string first_name, last_name;
//    
//    tie(id,first_name,last_name) = tuple2;
//    cout << id <<" "<< first_name <<" "<< last_name;
//
//    system("pause>0");
//}

//Array
//Syntax array<object_type, array_size> array_name;
//#include<array>
//
//int main()
//{
//    array<int, 4> even = { 2, 4, 6, 8 };
//    
//    //at function
//    array<int, 10> array1 = { 1,2,3,4,5,6,7,8,9,10 };
//
//    cout << array1.at(2) << endl;
//    cout << array1.at(4) << endl;
//    
//    //[] notaion
//    cout << array1[5] << endl;
//
//    //front function
//    cout << array1.front() << endl;
//
//    //back fuction
//    cout << array1.back() << endl;
//
//    //fill()
//    array1.fill(1);
//
//    cout << "array 1 is : ";
//    for (int i = 0; i < 10; i++) {
//        cout << array1[i] << " ";
//    }
//    cout << endl << endl;
//
//    //swap
//    array<int, 8> a = { 1,2,3,4,5,6,7,8 };
//    array<int, 8> b = { 8,7,6,5,4,3,2,1 };
//
//    a.swap(b);
//
//    cout << "a is : ";
//    for (int i = 0; i < 8; i++) {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//    cout << "b is : ";
//    for (int i = 0; i < 8; i++) {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//
//    //size
//    cout << array1.size();
//
//    system("pause>0");
//}

//LIST
//#include<list>
//int main()
//{
//    list<int> l{ 1,2,3,4,5 };
//
//    l.push_back(6);
//    l.push_back(7);
//    /* now the list becomes 1,2,3,4,5,6,7 */
//
//    l.push_front(8);
//    l.push_front(9);
//    /* now the list becomes 9,8,1,2,3,4,5,6,7 */
//
//    list<int> l2{ 1,2,3,4,5 };
//
//    l2.pop_back();
//    /* now the list becomes 1,2,3,4 */
//
//    l2.pop_front();
//    /* now the list becomes 2,3,4 */
//
//    list<int> l3{ 1,2,3,4,5 };
//
//    l3.reverse();
//    /* now the list becomes 5,4,3,2,1 */
//
//    list<int> list1 = { 2,4,5,6,1,3 };
//    list1.sort();
//    /* list1 is now 1 2 3 4 5 6 */
//
//    list<int> list2 = { 1,3,5,7,9 };
//    list<int> list3 = { 2,4,6,8,10 };
//
//    /* both the lists are sorted. In case they are not ,
//    first they should be sorted by sort function() */
//
//    list2.merge(list3);
//
//    /* list list2 is now 1,2,3,4,5,6,7,8,9,10  */
//
//    cout << list2.size() << endl;    // prints 10 
//}

//MAP
//Syntax map<key_type , value_type> map_name;
//#include<map>
//int main()
//{
//
//    map<int, int> m{ {1,2} , {2,3} , {3,4} };
//    /* creates a map m with keys 1,2,3 and
//        their corresponding values 2,3,4 */
//
//    map<string, int> map1;
//    /*  creates a map with keys of type character and
//      values of type integer */
//
//    map1["abc"] = 100;    // inserts key = "abc" with value = 100
//    map1["b"] = 200;      // inserts key = "b" with value = 200
//    map1["c"] = 300;      // inserts key = "c" with value = 300
//    map1["def"] = 400;    // inserts key = "def" with value = 400
//
//    map<int, string> m2{ {1,"Hani"} , {2,"Raza"} , {3,"Noorani"} };
//
//    cout << m2.at(1) << endl;  // prints value associated with key 1 ,i.e Hani
//    cout << m2.at(2) << endl;  // prints value associated with key 2 ,i.e Raza
//    cout << m2[3] << endl; // prints value associated with key 3 , i.e Noorani
//
//    m2.at(1) = "Ten";   // changes the value associated with key 1 to Ten
//    m2[2] = "Pearls";   // changes the value associated with key 2 to Pearls
//}

//STACK
//Syntax stack<object_type> stack_name;
//#include<stack>
//int main()
//{
//    stack<int> s;
//
//    // pushing elements into stack
//    s.push(2);
//    s.push(3);
//    s.push(4);
//
//    cout << s.top();   // prints 4, as 4 is the topmost element 
//    cout << s.size();  // prints 3, as there are 3 elements in 
//}

//QUEUE
//Syntax queue< object_type >  queue_name;
//#include<queue>
//int main()
//{
//    queue <int> q;   // creates an empty queue of integer q 
//
//    q.push(2);   // pushes 2 in the queue  , now front = back = 2
//    q.push(3);   // pushes 3 in the queue  , now front = 2 , and back = 3
//
//    q.pop();  // removes 2 from the stack , front = 3
//}

//Priority QUEUE
//Syntax priority_queue<int> pq;
#include<queue>

int main()
{
    priority_queue<int> pq1;

    pq1.push(30);  // inserts 30 to pq1 , now top = 30
    pq1.push(40);  // inserts 40 to pq1 , now top = 40 ( maxinmum element)
    pq1.push(90);  // inserts 90 to pq1 , now top = 90  
    pq1.push(60);	// inserts 60 to pq1 , top still is 90	

    pq1.pop();  // removes 90 ( greatest element in the queue 

    return 0;
}

