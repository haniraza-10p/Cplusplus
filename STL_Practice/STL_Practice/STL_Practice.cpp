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
//#include<queue>
//
//int main()
//{
//    priority_queue<int> pq1;
//
//    pq1.push(30);  // inserts 30 to pq1 , now top = 30
//    pq1.push(40);  // inserts 40 to pq1 , now top = 40 ( maxinmum element)
//    pq1.push(90);  // inserts 90 to pq1 , now top = 90  
//    pq1.push(60);	// inserts 60 to pq1 , top still is 90	
//
//    pq1.pop();  // removes 90 ( greatest element in the queue 
//
//    return 0;
//}

//Double Ended Queue (DEQUEUE)
//Syntax deque< object_type > deque_name;
//#include <deque>
//int main()
//{
//
//    int a[] = { 1,5,8,9,3 };
//    deque<int> dq(a, a + 5);
//    /* creates s deque with elements 1,5,8,9,3  */
//
//    dq.push_back(10);
//    /* now dq is : 1,5,8,9,3,10 */
//
//    dq.push_front(20);
//    /* now dq is : 20,1,5,8,9,3,10  */
//
//    deque<int>::iterator i;
//
//    i = dq.begin() + 2;
//    /* i points to 3rd element in dq */
//
//    dq.insert(i, 15);
//    /* now dq 20,1,15,5,8,9,3,10  */
//
//    int a2[] = { 7,7,7,7 };
//
//    dq.insert(dq.begin(), a2, a2 + 4);
//    /* now dq is 7,7,7,7,20,1,15,5,8,9,3,10  */
//
//    cout << dq.size() << endl;
//
//    int a1[] = { 1,5,8,9,3,5,6,4 };
//    deque<int> dq1(a1, a1 + 8);
//    /* creates s deque with elements 1,5,8,9,3,5,6,4  */
//
//    dq1.pop_back();
//    /* removes an element from the back */
//    /* now the deque dq is : 1,5,8,9,3,5,6 */
//
//    dq1.pop_front();
//    /* now dq is : 1,5,8,9,3,5,6  */
//
//    cout << dq1.size() << endl;
//}

//Iterator in STL
//syntax container_type <parameter_list>::iterator iterator_name;
//#include<vector>
//#include<list>
//#include<map>
//int main()
//{
//    //vector<int>::iterator i;
//    /* create an iterator named i to a vector of integers */
//    //vector<string>::iterator j;
//    //list<int>::iterator k;
//    //map<int, int>::iterator l;
//
//    vector<int> v(10);
//    vector<int>::iterator i;
//    
//    for (i = v.begin(); i!= v.end(); i++)
//        cout << *i << "  ";
//
//    vector<int>::iterator j, k;
//    j = v.begin();
//    k = v.end();
//    cout << distance(j, k) << endl;
//
//    advance(j, 5);
//    /* i now points to the fifth element form the beginning of the vector v */
//
//    advance(j, -1);
//    /* i  now points to the fourth element from the beginning of the vector */
//}


//Sorting Algorithms in STL
//#include<algorithm>
//#include<vector>
//
////Simple Sort
//bool compare_function(int i, int j)
//{
//    return i > j;    // return 1 if i>j else 0
//}
//bool compare_string(string i, string j)
//{
//    return (i.size() < j.size());
//}
//
//int main()
//{
//    int arr[5] = { 1,5,8,4,2 };
//
//    sort(arr, arr + 5);    // sorts arr[0] to arr[4] in ascending order
//    /* now the arr is 1,2,4,5,8  */
//
//    vector<int> v1;
//
//    v1.push_back(8);
//    v1.push_back(4);
//    v1.push_back(5);
//    v1.push_back(1);
//
//    /* now the vector v1 is 8,4,5,1 */
//    vector<int>::iterator i, j;
//
//    i = v1.begin();   // i now points to beginning of the vector v1
//    j = v1.end();     // j now points to end of the vector v1
//
//    sort(i, j);      //sort(v1.begin() , v1.end() ) can also be used
//    /* now the vector v1 is 1,4,5,8 */
//
//
//    /* use of compare_function */
//    int a2[] = { 4,3,6,5,6,8,4,3,6 };
//
//    sort(a2, a2 + 9, compare_function);  // sorts a2 in descending order 
//    /* here we have used compare_function which uses operator(>),
//    that result into sorting in descending order */
//
//    /* compare_function is also used to sort non-numeric elements such as*/
//
//    string s[] = { "a" , "abc", "ab" , "abcde" };
//
//    sort(s, s + 4, compare_string);
//    /* now s is "a","ab","abc","abcde"  */
//
//    cout << endl;
//    for (int i = 0; i < 4; i++) {
//        cout << s[i] << " ";
//    }
//}

//Partial Sort
//#include<algorithm>
//#include<vector>
//int main()
//{
//    int a[] = { 9,8,7,6,5,4,3,2,1 };
//
//    partial_sort(a, a + 4, a + 9);
//    /* now a is 1,2,3,4,9,8,7,6,5  */
//
//    int b[] = { 1,5,6,2,4,8,9,3,7 };
//
//    /* sorts b such that first 4 elements are the greatest elements
//    in the array and are in descending order */
//    partial_sort(b, b + 4, b + 9);
//    /* now b is  9,8,7,6,1,2,4,3,5 */
//}

//IS_Sorted
//#include<algorithm>
//#include<vector>
//int main()
//{
//	int a[5] = { 1,5,8,4,2 };
//	cout << is_sorted(a, a + 5);
//	/* prints 0 , Boolean false  */
//
//	vector<int> v1;
//
//	v1.push_back(8);
//	v1.push_back(4);
//	v1.push_back(5);
//	v1.push_back(1);
//
//	/* now the vector v1 is 8,4,5,1 */
//	cout << is_sorted(v1.begin(), v1.end());
//	/* prints 0 */
//	sort(v1.begin(), v1.end());
//	/* sorts the vector v1 */
//	cout << is_sorted(v1.begin(), v1.end());
//	/*  prints 1 , as vector v1 is sorted */
//}

//Binary Search Algorithm in STL
//#include <algorithm>
//#include <vector>
//bool compare_string_by_length(string i, string j)
//{
//	return (i.size() == j.size());
//}
//
//int main()
//{
//	int inputs[] = { 7,8,4,1,6,5,9,4 };
//	vector<int> v(inputs, inputs + 8);
//
//	cout << binary_search(v.begin(), v.end(), 7);  //prints 1 , Boolean true
//
//	cout << binary_search(v.begin(), v.end(), 217); //prints 0 , Boolean false
//
//	/* compare_function can be used to search
//	non numeric elements based on their properties */
//
//	string s[] = { "test" , "abcdf" , "efghijkl" , "pop" };
//
//	cout << binary_search(s, s + 4, "nickt", compare_string_by_length);
//	/* search for the string in s which have same length as of "nicky" */
//
//}

//Upper Bound and Lower Bound Search Algo in STL
//#include <algorithm> 
//#include <vector>
//int main()
//{
//    int input[] = { 1,2,2,3,4,4,5,6,7,8,10,45 };
//    vector<int> v(input, input + 12);
//
//    vector<int>::iterator it1, it2;
//
//    it1 = upper_bound(v.begin(), v.end(), 6);
//    /* points to eight element in v */
//
//    it2 = upper_bound(v.begin(), v.end(), 4);
//    /* points to seventh element in v */
//
//    it1 = lower_bound(v.begin(), v.end(), 4);
//    /* points to fifth element in v */
//
//    it2 = lower_bound(v.begin(), v.end(), 10);
//    /* points to second last element in v */
//}

////Non Modifying Algorithms in C++ STL
//#include <algorithm>
//#include <vector>

//1-Count
//int main()
//{
//    int values[] = { 5,1,6,9,10,1,12,5,5,5,1,8,9,7,46 };
//
//    int count_5 = count(values, values + 15, 5);
//    /* now count_5 is equal to 4 */
//
//    vector<int> v(values, values + 15);
//
//    int count_1 = count(v.begin(), v.end(), 1);
//    /* now count_1 is equal to  */
//
//    return 0;
//}

//2- Equal
//bool cmp_string(string i, string j)
//{
//    return (i.size() == j.size());
//}
//
//int main()
//{
//    int inputs1[] = { 1,2,3,4,5,6,7,8 };
//    int inputs2[] = { -1,2,1,2,3,4,6,7,8,9 };
//
//    vector<int>  v1(inputs1, inputs1 + 9);
//    vector<int>  v2(inputs2, inputs2 + 10);
//
//    cout << equal(v1.begin(), v1.end(), v2.begin() + 2);  // prints 0 , boolean false
//
//    /* use of compare function */
//    string s1[] = { "abc" , "def" , "temp" , "testing" };
//    string s2[] = { "xyz" , "emp" , "resr" , "testing" };
//
//    cout << equal(s1, s1 + 4, s2, cmp_string);   // prints 1 
//    /* note that the stings in s1 and s2 are not actually
//    equal but still equal() returns 1 , beacause we are defining
//    equality of two string by their length in cmp_function */
//}

//Mismatch
//bool cmp_string(string i, string j)
//{
//    return (i.size() == j.size());
//}
//
//int main()
//{
//    int inputs1[] = { 1,2,3,4,5,6,7,8 };
//    int inputs2[] = { -1,2,1,2,3,4,6,7,8,9 };
//
//    vector<int> v1(inputs1, inputs1 + 9);
//    vector<int> v2(inputs2, inputs2 + 9);
//
//    pair < vector<int>::iterator, vector<int>::iterator>  position;
//    /* defining a pair of iterator to the vector of integer */
//
//    position = mismatch(v1.begin(), v1.end(), v2.begin() + 2);
//
//    /* now position.first is an iterator pointing
//    to the 5th element in the vector v1 and position.second
//    points to the 7th element in the vector v2 */
//
//    /* use of compare function */
//    string s1[] = { "abc", "def", "temp", "testing" };
//    string s2[] = { "xyz", "emp", "res", "testing" };
//
//    pair<string::iterator, string::iterator> position2;
//
//    //position2 = mismatch(s1, s1 + 4, s2, cmp_string);
//    /* now position2.first is an iterator pointing
//    to the 3rd element in s1 and position2.second points
//    to the 3rd element in the s2 */
//}

//Search
//int main()
//{
//    int inputs1[] = { 1,2,3,4,5,6,7,8 };
//    int inputs2[] = { 2,3,4 };
//
//    vector<int> v1(inputs1, inputs1 + 9);
//    vector<int> v2(inputs2, inputs2 + 3);
//
//    vector<int>::iterator i, j;
//
//    i = search(v1.begin(), v1.end(), v2.begin(), v2.end());
//
//    /* now i points to the second element in v1 */
//
//    j = search(v1.begin() + 2, v1.end(), v2.begin(), v2.end());
//
//    /* j now points to the end of v1 as no sequence is equal to 2,3,4 in
//    [v1.begin()+2 ,v1.end()] */
//}

//Modifying Algorithms in C++ STL
#include <algorithm>
#include <vector>

//1- Copy
//int main()
//{
//    vector<int> v1, v2;
//
//    v1.push_back(2);
//    v1.push_back(4);
//    v1.push_back(6);
//    v1.push_back(8);
//    v1.push_back(10);
//
//    copy(v1.begin(), v1.end(), v2.begin());
//
//    /* v2 is now 2,4,6,8,10 */
//}

//2- Copy-n
//int main()
//{
//    int values[] = { 1,2,3,4,5,6,7,8,9 };
//    vector<int> v1(values, values + 9), v2;
//
//    copy_n(v1.begin(), 5, v2.begin()); // copies first 5 elements from v1 to v2.
//    /* v2 is now 1,2,3,4,5 */
//}

//3- Fill
//int main()
//{
//    vector<int> v1(10); // v1 is now 0,0,0,0,0,0,0,0,0,0
//
//    fill(v1.begin(), v1.end(), 5);
//
//    /* now v1 is 5,5,5,5,5,5,5,5,5,5 */
//
//    fill(v1.begin(), v1.end() - 5, 3);
//
//    /* now v11 is 3,3,3,3,3,5,5,5,5,5 */
//}

//4- Fill-n
//int main()
//{
//    int values[] = { 1,2,3,4,5,6,7,8,9 };
//    vector<int> v1(values, values + 9);
//
//    fill_n(v1.begin(), 5, 10);
//    /* v1 is now 10,10,10,10,10,6,7,8,9 */
//}

//5 - Move
//int main()
//{
//    string a = "nicky";
//    string b = "Vicky";
//
//    vector<string> name;
//
//    // inserts "nicky" in name , a is still = nicky
//    name.push_back(a);
//    // inserts "Vicky" in name , b is now NULL
//    name.push_back(move(b));
//}

//6 - Transform
//int unaryoperation(int a)
//{
//    return a * 2;
//}
//
//int main()
//{
//    vector<int> v1;
//    vector<int> v2;
//    vector<int> res1;
//    vector<int> res2;
//
//    for (int i = 0; i < 10; i++)
//    {
//        v2.push_back(i);
//        v1.push_back(i * 10);
//    }
//
//    /*   v2 : 1,2,3,4,5,6,7,8,9  */
//    /*   v1 : 10,20,30,40,50,60,70,80,90  */
//
//    res2.resize(10);
//
//    transform(v2.begin(), v2.end(), res1.begin(), unaryoperation);
//    /* now res1 is : 2,4,6,8,10,12,14,16,18 */
//}
//

//7 - Generate/Genrate_n
//int generate_random()
//{
//    return rand() % 10;
//}
//int main()
//{
//    srand(time(NULL));
//
//    vector<int> v1, v2;
//    v1.resize(10);
//    v2.resize(10);
//
//    generate(v1.begin(), v1.end(), generate_random);
//
//    /* this assign each element a random value generated
//    by the generate_random() */
//
//    generate_n(v2.begin(), 5, generate_random);
//
//    /* this assign first 5 elements a random value
//    and rest of the elements are un changed */
//}

//8 - Swap
//int main()
//{
//    int a = 6;
//    int b = 9;
//
//    swap(a, b);
//    /* a = 9 , b=6 */
//
//    cout << "A is : " << a << endl;
//    cout << "B is : " << b << endl;
//
//    vector<int> v, c;
//    for (int j = 0; j < 10; j++)
//    {
//        v.push_back(j);
//        c.push_back(j + 1);
//    }
//
//    swap(v, c);
//
//    for (vector < int > ::iterator i = v.begin(); i!= v.end(); i++)
//        cout << *i << " ";
//
//    cout << endl;
//
//    for (vector<int>::iterator k = c.begin(); k!= c.end(); k++)
//        cout << *k << " ";
//}

//9 - Swap Ranges
//int main()
//{
//    vector<int> v, c;
//    for (int j = 0; j < 10; j++)
//    {
//        v.push_back(j);
//        c.push_back(j + 1);
//    }
//
//    swap_ranges(v.begin(), v.begin() + 5, c.begin());
//
//    /* swaps the first five element of
//    vector v by the elements of vector c */
//
//    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
//        cout << *i < " ";
//
//    cout << endl;
//
//    for (vector<int>::iterator k = c.begin(); k != c.end(); k++)
//        cout << *k << " ";
//}

//10- Reverse
//int main()
//{
//    int a[] = { 1,5,4,9,8,6,1,3,5,4 };
//
//    reverse(a, a + 10);
//
//    /* reverse all the elements of the array a*/
//    /* now a is : 4,5,3,1,6,8,9,4,5,1 */
//
//    reverse(a, a + 5);
//
//    /* reverse first 5 elements of the array a */
//    /* now a is : 6,1,3,5,4,8,9,4 */
//
//    vector<int> v(a, a + 10);
//
//    reverse(v.begin(), v.end());
//
//    /* reverse the elements of the vector v */
//    /* vector is now 4,9,8,4,5,3,1,6 */
//}

//11- Reverse Copy
//int main()
//{
//    int values[] = { 1,4,8,9,5,6,2,7,4,1 };
//
//    vector<int> v1(values, values + 10);
//    /* v1 is now 1,4,8,9,5,6,2,7,4,1  */
//
//    vector<int> v2;
//
//    v2.resize(v1.size());   // allocate size for v2
//
//    reverse_copy(v1.begin(), v1.end(), v2.begin());
//    /* copies elements of v1 in reverse order in v2 */
//
//    /* now v2 is : 1,4,7,2,6,5,9,8,4,1  */
//}

//12- Rotate
//int main()
//{
//    int a[] = { 1,5,9,8,4,6,9,2 };
//    vector<int> v(a, a + 8);
//
//    rotate(a, a + 4, a + 8);
//    /* rotate a such that a[4] is now the first element of array a */
//    /* now a is : 4,6,9,2,1,5,9,8 */
//
//    rotate(v.begin(), v.begin() + 5, v.end());
//    /* now vector v is :6,9,2,1,5,9,8,4  */
//}

//13- Unique
//bool cmp_function(int a, int b)
//{
//    return a + b;
//}
//
//int main()
//{
//    int values[] = { 10,5,5,5,9,6,6,4,4 };
//    vector<int> v(values, values + 9), v4;
//
//    vector<int>::iterator it;
//
//    it = unique(v.begin(), v.end());
//    /* vector v is now : 10,5,9,6,4,-,-,-,-  */
//
//    /* - indicates that the elements are removed from the vector
//    and next elements are shifted to their position */
//
//    /* now it is pointing to the first occurrence of the “-“ in
//    the vector , i.e the position next to the last element (4) */
//
//    /* adjusting the size of vector v */
//
//    v.resize(distance(v.begin(), it));
//    /* resize the vector by the size returned by distance function,
//    which returns the distance between the two iterators  */
//
//    /* vector v is now 10,5,9,6,4  */
//
//    /* using compare_function */
//
//    vector<int> v3(values, values + 9);
//
//    it = unique(v3.begin(), v3.end(), cmp_function);
//    v3.resize(distance(v3.begin(), it));
//
//    /* removes copies the duplicate  elements from v3*/
//
//    return 0;
//}

//14-Unique copy
//bool cmp_fuction(int a, int b)
//{
//    return a + b;
//}
//
//int main()
//{
//    int values[] = { 10,5,5,5,9,6,6,4,4 };
//    vector<int> v(values, values + 9);
//    vector<int> v2;
//    v2.resize(v.size());
//
//    vector<int>::iterator it;
//
//    it = unique(v.begin(), v.end());
//    /* vector v2 is now : 10,5,9,6,4,-,-,-,-  */
//
//    /* - indicates that the elements are removed from the vector
//    and next elements are shifted to their position */
//
//    /* now it is pointing to the first occurrence of the “-“
//    in the vector, i.e the position next to the last element (4) */
//
//    /* adjusting the size of vector v */
//
//    v.resize(distance(v.begin(), it));
//    /* resize the vector by the size returned by distance function,
//    which returns the distance between the two iterators  */
//
//    /* vector v is now 10,5,9,6,4  */
//
//    /* using compare_function */
//
//    vector<int> v3(values, values + 9), v4;
//    v4.resize(v3.size());
//
//    it = unique_copy(v3.begin(), v3.end(), v4.begin(), cmp_fuction);
//    v4.resize(distance(v4.begin(), it));
//
//    /* copies the unique elements from v3 to v4 */
//
//    return 0;
//}

//Numeric Algorithms in C++ STL
#include<numeric>
//1-iota
//int main()
//{
//    vector<int> v(10);
//    /* now vector v is : 0,0,0,0,0,0,0,0,0,0  */
//
//    iota(v.begin(), v.end(), 10);
//
//    /* now the vector v is 10,11,12,13,14,15,16,17,18,19  */
//}

//2-Accumulate
//int myoperator(int a, int b)
//{
//    return a * b;
//}
//
//int main()
//{
//    vector<int> v;
//
//    for (int i = 0; i < 10; i++) {
//        v.push_back(i);
//    }
//
//    /* now vector v is : 0,1,2,3,4,5,6,7,8,9  */
//
//    int result;
//
//    accumulate(v.begin(), v.end(), result);
//
//    /* as no operator is specified, accumulate add all the elements
//    between v.begin() and v.end() and store the sum in result */
//
//    /* now result = 45 */
//
//    accumulate(v.begin(), v.end(), result, myoperator);
//
//    /* now result = 9!  */
//}

//3-Partial Sum
//int myoperator(int a, int b)
//{
//    return a * b;
//}
//
//int main()
//{
//    int a[] = { 1,2,3,4,5 };
//    vector<int> v(a, a + 5);
//    vector<int> v2;
//    /* vector v is 1,2,3,4,5 */
//    v2.resize(v.size());
//
//    partial_sum(v.begin(), v.end(), v2.begin());
//
//    /* now v2 is : 1,3,6,10,15 */
//    /* sum of the successive range in v.begin() and v.end() */
//
//    partial_sum(v.begin(), v.end(), v2.begin(), myoperator);
//
//    /* now v2 is : 1,2,6,24,120 */
//}
