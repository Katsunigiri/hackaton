#include "iostream"
#include <string>
#include <fstream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Ru");
    ifstream file("E://1.txt");
    string s, find;
    char c;

    while (!file.eof()) {
        file.get(c);
        s.push_back(c);
    }

    file.close();



    //Модуль библиотек
    cout << "#include iostream" << endl;
    //=====================================================================================
    find = "string";

    int pos = s.find(find);

    if (pos == -1)
        cout << "" << endl;
    else
        cout << "#include <string>" << endl;
    //=====================================================================================
    find = "fstream";

    pos = s.find(find);

    if (pos == -1)
        cout << "" << endl;
    else
        cout << "#include <fstream>" << endl;
    //===================================================================================
    find = "float.h";

    pos = s.find(find);

    if (pos == -1)
        cout << "" << endl;
    else
        cout << "#include <float.h>" << endl;

    //=====================================================================================
 
    find = "привет мир";

    pos = s.find(find);

    if (pos == -1)
        cout << "" << endl;
    else
        cout << R"(std::cout << "Hello, world!" << std::endl;)" << endl;

    //=====================================================================================
    find = "ринхак";

    pos = s.find(find);

    if (pos == -1)
        cout << "" << endl;
    else
        cout << R"(
    ____   _         __  __              __  
   / __ \ (_)____   / / / /____ _ _____ / /__
  / /_/ // // __ \ / /_/ // __ `// ___// //_/
 / _, _// // / / // __  // /_/ // /__ / ,<   
/_/ |_|/_//_/ /_//_/ /_/ \__,_/ \___//_/|_|  
                                             
)" << endl;

    //=====================================================================================

    //Код программы
    cout << "using namespace std;" << endl << "int main(){" << endl;
    //=====================================================================================



    //=====================================================================================
    //Конец программ
    cout << "return 0;}" << endl;
    return 0;

}