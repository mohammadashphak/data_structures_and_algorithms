#include <iostream>
using namespace std;

int main()
{
  // Inclusion-Exclusion Principle
  /*
  Principle of Inclusion and Exclusion is an approach which derives the method of finding the number of elements in the union of two or more finite sets.
  */

  // Q. Find the number of integers between 1 and 100 that are divisible by 2, 3 or 5.
  /*
  1. Find the number of integers between 1 and n that are divisible by p1.
  2. Find the number of integers between 1 and n that are divisible by p2.
  3. Find the number of integers between 1 and n that are divisible by p3.
  4. Find the number of integers between 1 and n that are divisible by p1 * p2.
  5. Find the number of integers between 1 and n that are divisible by p1 * p3.
  6. Find the number of integers between 1 and n that are divisible by p2 * p3.
  7. Find the number of integers between 1 and n that are divisible by p1 * p2 * p3.
  8. Add all the above found numbers and subtract the number found in step 7 from the sum.
  */
  int n = 100;
  int p1 = 2;
  int p2 = 3;
  int p3 = 5;

  int c1 = n / p1; // A
  int c2 = n / p2; // B
  int c3 = n / p3; // C
  int c4 = n / (p1 * p2); // A intersection B
  int c5 = n / (p1 * p3); // A intersection C
  int c6 = n / (p2 * p3); // B intersection C
  int c7 = n / (p1 * p2 * p3); // A intersection B intersection C

  // A + B + C - (A intersection B) - (A intersection C) - (B intersection C) + (A intersection B intersection C)
  int ans = c1 + c2 + c3 - c4 - c5 - c6 + c7;

  cout << "Number of integers between 1 and " << n << " that are divisible by " << p1 << ", " << p2 << " or " << p3 << " is: " << ans << endl;

  // Q. Among a group of students, 49 study Physics, 37 study English and 21 study Maths. If 9 of these students study Physics and English, 5 study English and Maths, 4 study Physics and Maths and 3 study Physics, English and Maths, find the number of students in the group.

  int physics = 49;
  int english = 37;
  int maths = 21;
  int physicsEnglish = 9;
  int englishMaths = 5;
  int physicsMaths = 4;
  int physicsEnglishMaths = 3;

  int total = physics + english + maths - physicsEnglish - englishMaths - physicsMaths + physicsEnglishMaths;

  cout << "Total number of students in the group is: " << total << endl;

  return 0;
}