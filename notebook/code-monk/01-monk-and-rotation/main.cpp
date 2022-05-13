//
// HackerEarth folio
// solved by Michael Gene Brockus
//

//
// Overview:
//     Monk loves to preform different operations on arrays, and
//     so being the principal of Hackerearth School, he assigned
//     a task to his new student Mishki. Mishki will be provided
//     with an integer array A of size N and an integer K , where
//     she needs to rotate the array in the right direction by K
//     steps and then print the resultant array. As she is new to
//     the school, please help her to complete the task.
//
// Input:
//     The first line will consists of one integer T denoting the
//     number of test cases.
//
// For each test case:
// 1) The first line consists of two integers N and K, N being
//    the number of elements in the array and K denotes the number
//    of steps of rotation.
// 2) The next line consists of N space separated integers,
//    denoting the elements of the array A.
//
// Output:
//     Print the required array.
//
#include <iostream>
#include <cstdint>

using namespace std;


int main()
{
    int64_t cases, num, rotate;
    cin >> cases; // Reading input from STDIN

	  while (cases--)
	  {
        //
        // We start are cases by inputing the number of boxes
        // the array will have when we start are rotation
        // process on the array. Next set the roate value to
        // be the roate value devisable by number of boxes.
        //
        cin >> num >> rotate;
        rotate = rotate % num;
        auto *arr = new int[num];

        //
        // Here we read in the data from standerd input into
        // the array from above.
        //
        for (auto iter = 0; iter < num; iter++)
        {
            std::cin >> *(arr + iter);
        } // end for range

        //
        // Then outputs the result of the array after the last
        // operation is done.
        //
        for (auto iter = 0; iter < num; iter++)
        {
            cout << *(arr + ((num - rotate + iter) % num)) << " ";
        } // end for range
        cout << endl;

        //
        // clean up the allocated memory used for the array
        // that was used to solve this problem.
        //
        delete[] arr;
    } // end while

} // end of function main
