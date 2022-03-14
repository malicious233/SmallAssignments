// ValueSwapper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

//Swaps two int values 
void swapInt(int* a, int* b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

//Swaps two values, templated
template<typename T>
void swap(T* a, T* b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
//Returns true wether or not the inputted integer is even
bool evenOrOdd(int value)
{
    if (value % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//Returns true wether or not this int is in this array
bool linearSearch(int arr[], int value)
{
    for (unsigned int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if (arr[i] == value)
            return true;
    }
    return false;
}

//Returns true if inputted array of chars is a palindrome
bool isPalindrome(char str[])
{
    int i, length;
    bool flag = false;

    length = strlen(str);

    for (i = 0; i < length; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        return false;
    }
    else
    {
        return true;
    }
        

    
}


//Reverses this strings order
void reverseString(string& str)
{
    int n = str.length();

    for (int i = 0; i < n / 2; i++)
    {
        swap(str[i], str[n - i - 1]);
    }
}

//Counts and prints unique occurences of a letter in a given string (It does not count upper and lower case)
void occurencesOfCharacters(const string& str)
{
    int n = str.length();
    std::map<char, int> chars;
    
    //Emplace or increment amount in map by iterating through string
    for (int i = 0; i < n; i++)
    {
        if (chars.count(str[i]))
        {
            chars[str[i]]++;
        }
        else
        {
            chars.emplace(str[i], 1);
        }
    }

    for (auto const& x : chars )
    {
        std::cout << x.first << ":" << x.second << std::endl;
    }

    
}

int main()
{

    /*
    int valoo1 = 6;
    int valoo2 = 3;

    cout << valoo1 << endl;
    cout << valoo2 << endl;
    swap(&valoo1, &valoo2);
    cout << "-----" << endl;
    cout << valoo1 << endl;
    cout << valoo2 << endl;

    string str = "Greetings!";
    reverseString(str);
    
    cout << str << endl;
    */
    //cout << evenOrOdd(10) << endl;
    //cout << charrArray << endl;

    string str2 = "Helliiio";
    occurencesOfCharacters(str2);
    



    //char str[] = { "Hih" };
    //std::cout << isPalindrome(str) << std::endl;
    
    
}
