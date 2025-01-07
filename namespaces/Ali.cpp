#include <iostream>
namespace Ali
{
    namespace Tools
    {

        bool isPrime(int n)
        {
            if (n == 1)
            {
                return false;
            }
            for (int i = 2; i < n; i++)
            {
                if (n % i == 0)
                {
                    return false;
                }
            }
            return true;
        }
        void countCharacters(char array[], int size)
        {
            for (int i = 0; i < size; i++)
            {
                int count = 0;
                char currentchar = array[i];
                //* check if character already been counted
                bool alreadyCounted = false;
                for (int j = 0; j < i; j++)
                {
                    if (array[j] == currentchar)
                    {
                        alreadyCounted = true;
                        break;
                    }
                }
                //* skip counting if the character is already counted
                if (alreadyCounted)
                {
                    continue;
                }
                //* count how many times currentChar appears in the array
                for (int j = 0; j < size; j++)
                {
                    if (array[j] == currentchar)
                    {
                        count++;
                    }
                }
                std::cout << currentchar << " count: " << count << "\n";
            }
        }
    }
}