#include <iostream>
#include <conio.h>
#include <windows.h>
#include "sach.cpp"
#include "user.cpp"
#include "template.cpp"
#include "Menu.cpp"
#include "friendfunction.cpp"
using namespace std;

int main(){
    ifstream inp_user("userbase.txt");
    ifstream inp_sach("sachbase.txt");
    ifstream inp_borrowing("borrowing.txt");

    DSLK<Node<Sach>> sachlist;
    DSLK<Node<User>> userlist;
    read_file(inp_user, userlist);
    read_file(inp_sach, sachlist);
    read_borrowlist(inp_borrowing,userlist,sachlist);
    cout<<"read success\n";

    //writenew
    inp_borrowing.close();
    inp_user.close();
    inp_sach.close();
    system("pause");
    system("cls");
    ShowConsoleCursor(false);
    do {
        int line = mainMenu.CtrlMenu();
        mainMenu.deleteMenu();
        if (line == 0){
            do {
                CLEARLINE;
                line = sachMenu.CtrlMenu();
                sachMenu.deleteMenu();
                HOME;
                //thuc hien lenh theo lua chon
                switch (line) {
                    case 0: {cout<<"Them sach\n"; break;}
                    case 1: {cout<<"Xem/Sua thong tin sach\n";break;}
                    case 2: {cout<<"Xoa sach\n";break;}
                    case 3: {cout<<"Quay lai mainmenu";break;}
                }
                //cho phan hoi sau khi thuc hien lenh
                getch();
            } while (line!=3);
        }
        else if (line == 1)
            do {
                CLEARLINE;
                line = userMenu.CtrlMenu();
                userMenu.deleteMenu();
                HOME;
                //thuc hien lenh theo lua chon
                switch (line) {
                    case 0: {
                        cout<<"Them nguoi dung\n";
                        break;
                    }
                    case 1: {
                        cout<<"Xem/Sua thong tin nguoi dung\n";
                        break;
                    }
                    case 2: {
                        cout<<"Xoa nguoi dung\n";
                        break;
                    }
                    case 3: {
                        cout<<"Quay lai mainmenu";
                        break;
                    }
                }
                //cho phan hoi sau khi thuc hien lenh
                getch();
            } while (line!=3);
        else if (line == 2)
            do {
                CLEARLINE;
                line = borrowMenu.CtrlMenu();
                borrowMenu.deleteMenu();
                HOME;
                //thuc hien lenh theo lua chon
                switch (line) {
                    case 0: {cout<<"Muon sach\n"; break;}
                    case 1: {cout<<"Kiem tra thong tin muon sach (demo)\n";break;}
                    case 2: {cout<<"Tra sach\n";break;}
                    case 3: {cout<<"Quay lai mainmenu";break;}
                }
                //cho phan hoi sau khi thuc hien lenh
                getch();
            } while (line!=3);
        else break;
    } while (true);
    HOME;
    cout<<"Ket thuc chuong trinh";
    getch();
    return 0;
}
