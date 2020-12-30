#include <iostream>
#include <string>
using namespace std;
string getString();
int getSize();
int func(string, int);

int main()
{
    string s1 = getString();
    int size = getSize();
    int result = func(s1, size);
    cout << result << endl;
}

string getString() 
{
    string s;
    cout << "Enter string: "; 
    getline(cin, s);
    return s;
}

int getSize() 
{
    int s;
    cout << "Enter size: "; 
    cin >> s;
    return s;
}

int func(string str, int size1) 
{
    int i = 0;
    while (str[i] == ' ') 
    {
        i++;
    }//якщо рядок починається з пробілу 
    int count = 0;
    int start = 0, end;
    int wlength;
    for (i; i < str.size(); i++) 
    {
        if (str[i] != ' ') 
        {
            if (i == str.size() - 1) 
            {
                end = i;
                wlength = end - start + 1;//довжина знайденого слова,немає пробілу, від якого можна рахувати
                start = end + 1;
                if (wlength > size1) 
                {
                    count++;
                }
            }
            continue;
        }
        end = i;
        wlength = end - start;//довжина знайденого слова
        start = end + 1;
        if (wlength > size1) 
        {
            count++;
        }
    }
    return count;
}