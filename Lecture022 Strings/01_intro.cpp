#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int main()
{
    /*
    char name[20];

    cout << "Enter your name: ";
    cin >> name; // will not take spaces, tabs and newlines. will take only first word

    // name[2] = '\0'; // null character -> will terminate the string

    cout << "Your name is ";
    cout << name << endl;

    cout << "Length of name is " << getLength(name) << endl;

    reverse(name, getLength(name));
    cout << "Reverse of name is " << name << endl;
    */

    char st[100] = "Hello World"; // or {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'}

    // String functions in C++ -> string.h (actually in C)

    // In C++ std::string stores its data internally in the form of a null-terminated C-string, but in normal usage does not allow you to access the null terminator. This is because the null terminator is not part of the string itself, but is used to indicate the end of the string.

    cout << "C string functions" << endl;
    // 1. strlen -> length of string
    cout << "Length of st1 is " << strlen(st) << endl;

    // 2. strcpy -> copy string
    char st2[100];
    strcpy(st2, st);
    cout << "st2 is " << st2 << endl;

    // 3. strcat -> concatenate string
    char st3[100] = "Hello";
    strcat(st3, st2);
    cout << "st3 is " << st3 << endl;

    // 4. strcmp -> compare string
    char st4[100] = "Hello";
    char st5[100] = "Hello";
    char st6[100] = "Hello World";

    cout << "comparison of st4 and st5 is " << strcmp(st4, st5) << endl;
    cout << "comparison of st4 and st6 is " << strcmp(st4, st6) << endl;
    cout << "comparison of st6 and st4 is " << strcmp(st6, st4) << endl;

    // 5. strchr -> find first occurence of character
    char st7[100] = "Hello World";
    char ch = 'l';
    char *ptr = strchr(st7, ch);
    cout << "First occurence of " << ch << " is " << (int)(ptr - st7) << endl;

    // 6. strstr -> find first occurence of string
    char st8[100] = "Hello World";
    char st9[100] = "World";
    char *ptr2 = strstr(st8, st9);
    cout << "First occurence of " << st9 << " is " << (int)(ptr2 - st8) << endl;

    // 7. strrev -> reverse string
    char st10[100] = "Hello World";
    strrev(st10);
    cout << "Reverse of Hello World is " << st10 << endl;

    // 8. strlwr -> convert string to lowercase
    char st11[100] = "Hello World";
    strlwr(st11);
    cout << "Lowercase of Hello World is " << st11 << endl;

    // 9. strupr -> convert string to uppercase
    char st12[100] = "Hello World";
    strupr(st12);
    cout << "Uppercase of Hello World is " << st12 << endl;

    // 10. strset -> set all characters of string to a character
    char st13[100] = "Hello World";
    strset(st13, 'a');
    cout << "Set all characters of st13 to 'a' is " << st13 << endl;

    // 11. strnset -> set first n characters of string to a character
    char st14[100] = "Hello World";
    strnset(st14, 'a', 5);
    cout << "Set first 5 characters of st14 to 'a' is " << st14 << endl;

    cout << endl;

    // String functions in C++ -> string
    cout << "C++ String functions" << endl;
    // 1. length -> length of string
    string s1 = "Hello World";
    cout << "Length of s1 is " << s1.length() << endl;

    // 2. append -> concatenate string
    string s2 = "Hello";
    s2.append(s1);
    cout << "s2 is " << s2 << endl;

    // 3. compare -> compare string
    string s3 = "Hello";
    string s4 = "Hello";
    string s5 = "Hello World";

    cout << "comparison of s3 and s4 is " << s3.compare(s4) << endl;
    cout << "comparison of s3 and s5 is " << s3.compare(s5) << endl;
    cout << "comparison of s5 and s3 is " << s5.compare(s3) << endl;

    // 4. find -> find first occurence of string
    string s6 = "Hello World";
    string s7 = "World";
    cout << "First occurence of " << s7 << " is " << s6.find(s7) << endl;

    // 5. substr -> get substring
    string s8 = "Hello World";
    cout << "Substring of s8 from 6 to 11 is " << s8.substr(6, 11) << endl;

    // 6. insert -> insert string
    string s9 = "Hello World";
    s9.insert(6, "C++ ");
    cout << "s9 after inserting \"C++ \" at index 6 is " << s9 << endl;

    // 7. erase -> erase string
    string s10 = "Hello World";
    s10.erase(6, 11);
    cout << "s10 after erasing from 6 to 11 is " << s10 << endl;

    // 8. replace -> replace string
    string s11 = "Hello World";
    s11.replace(6, 11, "C++");
    cout << "s11 after replacing from 6 to 11 with \"C++ \" is " << s11 << endl;

    // 9. clear -> clear string
    string s12 = "Hello World";
    s12.clear();
    cout << "s12 after clearing is " << s12 << endl;

    // 10. empty -> check if string is empty
    string s13 = "Hello World";
    cout << "s13 is empty? " << s13.empty() << endl;

    // 11. begin -> get iterator to beginning
    string s14 = "Hello World";
    cout << "First character of s14 is " << *s14.begin() << endl;

    // 12. end -> get iterator to end
    string s15 = "Hello World";
    cout << "Last character of s15 is " << *(s15.end() - 1) << endl;

    // 13. rbegin -> get reverse iterator to reverse beginning
    string s16 = "Hello World";
    cout << "Last character of s16 is " << *s16.rbegin() << endl;

    // 14. rend -> get reverse iterator to reverse end
    string s17 = "Hello World";
    cout << "First character of s17 is " << *(s17.rend() - 1) << endl;

    // 15. size -> get size
    string s18 = "Hello World";
    cout << "Size of s18 is " << s18.size() << endl;

    // 16. max_size -> get maximum size
    string s19 = "Hello World";
    cout << "Maximum size of s19 is " << s19.max_size() << endl;

    // 17. capacity -> get size of allocated storage capacity
    string s20 = "Hello World";
    cout << "Capacity of s20 is " << s20.capacity() << endl;

    // 18. resize -> resize string
    string s21 = "Hello World";
    s21.resize(5);
    cout << "s21 after resizing is " << s21 << endl;

    // 19. reserve -> request a change in capacity
    string s22 = "Hello World";
    s22.reserve(100);
    cout << "Capacity of s22 is " << s22.capacity() << endl;

    // 20. operator[] -> access element
    string s23 = "Hello World";
    cout << "First character of s23 is " << s23[0] << endl;

    // 21. at -> access element
    string s24 = "Hello World";
    cout << "First character of s24 is " << s24.at(0) << endl;

    // 22. front -> access first element
    string s25 = "Hello World";
    cout << "First character of s25 is " << s25.front() << endl;

    // 23. back -> access last element
    string s26 = "Hello World";
    cout << "Last character of s26 is " << s26.back() << endl;

    // 24. push_back -> add element at the end
    string s27 = "Hello World";
    s27.push_back('!');
    cout << "s27 after pushing '!' is " << s27 << endl;

    // 25. pop_back -> delete last element
    string s28 = "Hello World";
    s28.pop_back();
    cout << "s28 after popping is " << s28 << endl;

    // 26. assign -> assign new value to string by replacing current value
    string s29 = "Hello World";
    s29.assign("C++");
    cout << "s29 after assigning \"C++\" is " << s29 << endl;

    // 27. swap -> swap content
    string s30 = "Hello World";
    string s31 = "C++";
    s30.swap(s31);
    cout << "s30 after swapping is " << s30 << endl;

    // 28. c_str -> get C string equivalent
    string s32 = "Hello World";
    cout << "C string equivalent of s32 is " << s32.c_str() << endl;

    // 29. data -> get direct access to data
    string s33 = "Hello World";
    cout << "Direct access to data of s33 is " << s33.data() << endl;

    // 30. getline() -> get string with spaces, tabs and newlines
    string s34;
    cout << "Enter a string: ";
    getline(cin, s34, '\t');
    // third argument here is delimiter (default is newline ('\n))
    // If a character delimiter is specified, then getline() will use delimiter to decide when to stop reading data.

    cout << "You entered: " << s34 << endl;

    // Difference between string and char array
    /*
    1. A char array is just that - an array of characters:
    -> If allocated on the stack, it will always occupy eg. 256 bytes no matter how long the text it contains is
    -> If allocated on the heap (using malloc() or new char[]) you're responsible for releasing the memory afterwards and you will always have the overhead of a heap allocation.
    -> If you copy a text of more than 256 chars into the array, it might crash, produce ugly assertion messages or cause unexplainable (mis-)behavior somewhere else in your program.
    -> To determine the text's length, the array has to be scanned, character by character, for a \0 character.
    
    2. A string is a class that contains a char array, but automatically manages it for you. Most string implementations have a built-in array of 16 characters (so short strings don't fragment the heap) and use the heap for longer strings.

    -> You can access a string's char array like this:

        std::string myString = "Hello World";
        const char *myStringChars = myString.c_str();

    -> C++ strings can contain embedded \0 characters, know their length without counting, are faster than heap-allocated char arrays for short texts and protect you from buffer overruns. Plus they're more readable and easier to use.
    -> However, C++ strings are not (very) suitable for usage across DLL boundaries, because this would require any user of such a DLL function to make sure he's using the exact same compiler and C++ runtime implementation, lest he risk his string class behaving differently.
    -> Normally, a string class would also release its heap memory on the calling heap, so it will only be able to free memory again if you're using a shared (.dll or .so) version of the runtime.
    -> In short: use C++ strings in all your internal functions and methods. If you ever write a .dll or .so, use C strings in your public (dll/so-exposed) functions.
    */

    return 0;
}