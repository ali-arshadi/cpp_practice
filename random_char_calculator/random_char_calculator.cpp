#include <iostream>
#include <C:\Users\Gobral\Documents\work-space\cpp_practice\namespaces\Ali.cpp>

using std::cout;

int main()
{
    //*generate 20 random char
    srand((unsigned)time(NULL));

    char randomChar[20];
    for (int i = 0; i < 20; i++)
    {
        int random = 97 + (rand() % 26);
        randomChar[i] = char(random);
        cout << randomChar[i] << " ";
    }
    cout << "\n";
    Ali::Tools::countCharacters(randomChar, 20);
}