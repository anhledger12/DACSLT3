#include <iostream>
#include <windows.h>
#include "Menu.cpp"
using namespace std;

int main(){
    system("cls");
    ShowConsoleCursor(false);
    do {
        int line = mainMenu.CtrlMenu();
        mainMenu.deleteMenu();
        if (line == 0)
        {
            do
            {
                clearScreen();
                line = sachMenu.ctrlMenu();
                sachMenu.deleteMenu();
                HOME;
                // thuc hien lenh theo lua chon
                switch (line)
                {
                case 0:
                {
                    libraryDisplay();
                    break;
                }
                case 1:
                {
                    std::cout << "Them sach\n";
                    if (handler->inputNew())
                        std::cout << "Them thanh cong\n";
                    else
                        std::cout << "Da co sach voi thong tin tuong tu, cap nhat them so ban sao\n";
                    handler->writeToFile();
                    getch();
                    break;
                }
                case 2:
                {
                    std::cout << "Xem/Sua thong tin sach\n";
                    if (handler->updateExisted()){
                        std::cout << "Chinh sua hoan tat\n";
                        handler->writeToFile();
                    }
                    else
                        std::cout << "Khong co cap nhat\n";
                    getch();
                    break;
                }
                case 3:
                {
                    std::cout << "Xoa sach\n";
                    if (handler->removeExisted()){
                        std::cout << "Xoa thanh cong\n";
                        handler->writeToFile();
                    }
                    else
                        std::cout << "Xoa that bai\n";
                    getch();
                    break;
                }
                case 4:
                {
                    break;
                }
                }
                // cho phan hoi sau khi thuc hien lenh
            } while (line != 4);
        }
        else if (line == 1)
            do
            {
                clearScreen();
                line = userMenu.ctrlMenu();
                userMenu.deleteMenu();
                HOME;
                //thuc hien lenh theo lua chon
                switch (line) {
                    case 0: {cout<<"Them nguoi dung\n"; break;}
                    case 1: {cout<<"Xem/Sua thong tin nguoi dung\n";break;}
                    case 2: {cout<<"Xoa nguoi dung\n";break;}
                    case 3: {cout<<"Quay lai mainmenu";break;}
                }
                case 3:
                {
                    std::cout << "Xoa nguoi dung\n";
                    if (handler->removeExisted()){
                        std::cout << "Xoa thanh cong\n";
                        handler->writeToFile();
                    }
                    else
                        std::cout << "Xoa that bai\n";
                    getch();
                    break;
                }
                case 4:
                {
                    break;
                }
                }
                // cho phan hoi sau khi thuc hien lenh
            } while (line != 4);
        else if (line == 2)
            do
            {
                clearScreen();
                line = borrowMenu.ctrlMenu();
                borrowMenu.deleteMenu();
                HOME;
                // thuc hien lenh theo lua chon
                switch (line)
                {
                case 0:
                {
                    std::cout << "Muon sach\n";
                    if (handler->inputNew()){
                        std::cout << "Muon thanh cong\n";
                        handler->writeToFile();
                    }
                    else
                        std::cout << "Muon that bai\n";
                    getch();
                    break;
                }
                case 1:
                {
                    std::cout << "Kiem tra thong tin muon tra\n";
                    handler->updateExisted();
                    break;
                }
                case 2:
                {
                    std::cout << "Tra sach\n";
                    if (handler->removeExisted()){
                        std::cout << "Tra sach hoan tat\n";
                        handler->writeToFile();
                    }
                    else
                        std::cout << "Tra sach that bai\n";
                    getch();
                    break;
                }
                case 3:
                {
                    break;
                }
                }
                // cho phan hoi sau khi thuc hien lenh

            } while (line != 3);
        else
            break;
    } while (true);
    HOME;
    clearScreen();
    std::cout << "Ket thuc chuong trinh...";
    LH.writeToFile();
    UH.writeToFile();
    BH.writeToFile();
    Sleep(400);
    return 0;
}
