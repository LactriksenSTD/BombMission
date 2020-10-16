#include <iostream>
#include <windows.h>

using namespace std;
int PIN;

int main()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    cout<<"You have a mission."<<endl;
    Sleep(1000);
    cout<<"Activate the bomb!"<<endl;
    Sleep(1000);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    cout<<"Do you remember PIN?!"<<endl;
    Sleep(1500);
    system("cls");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    cout<<"Paste PIN to activate the bomb:"<<endl;
    cin>>PIN;
    if(PIN==2137)
    {
        for (int i=5; i>0; i--)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            Sleep(1500);
            system("cls");
            cout<<i<<endl;
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
        cout<<"Congratulations!"<<endl;
    }
    if(PIN!=2137)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        cout<<"Thats not correct PIN."<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
        cout<<"G A M E  O V E R"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    }
    return 0;
}
