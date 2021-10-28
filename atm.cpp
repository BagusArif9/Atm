#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main() {
    ifstream myFile;
    string str1, str2;
    cin >> str1;
    bool bankFound = false;
    myFile.open("databank.txt", ios::in);
    if(myFile.is_open()){
        while(!myFile.eof()){
            myFile >> str2;
            if(str1 == str2){
                bankFound = true;
            }
        }
    }
    else{
        cout << "Error : Database Bank sedang error";
    }

    if(bankFound){
        cout << "silakan masuk";
    }
    else
        cout << "maaf bank tidak ditemukan";
    
    cout << " Bank Adres isn't available,want cancel? (Y/N) : \n";
    cin >> quest;
        if(quest == "N")
        {
            cout << "INPUT ADRESS BANK \n";
            cin >> //id adres mungkin :V
        }return 0;
        if(quest == "Y")
        {
            cout << "Chose input"<<endl;
            menu();
        }
}

switch (kode)
{
case 1:
    cout <<endl;
    cout <<" ___________________________________________"<<endl;
    cout <<"|              INFORMASI SALDO              |"<<endl;
    cout <<"|___________________________________________|"<<endl;
    cout <<"|"<<endl;
    cout <<"|SISA SALDO: RP. "<<saldo<<endl;
    cout <<"|___________________________________________|"<<endl;
    cout <<"APAKAH INGIN MELAKUKAN TRANSFER (Y/N): "; cin>>quest;
    if(quest == "N")
    {
        cout <<"CHOSE INPUT"<<endl;
        menu(); //kembali ke display
    }
    break;
    
case 2:
    cout <<"               ATM BANK "<<endl;
    cout <<"============================================="<<endl;
    cout <<" " <<endl;
    cout <<"               TRANSFER "<<endl;
    cout <<" "<<endl;
    cout <<" MASUKAN UANG YANG INGIN ANDA TRANSFER: " ; cin >>kirim;

    if(kirim > saldo)
    {
        cout <<"SALDO ANDA KURANG"<<endl;
        cout << " want cancel? (Y/N) : \n";
        cin >> quest;
        if(quest == "N")
        {
            cout << "Input Amount Bank: \n";
            cin >> kirim
        }return 0;
        if(quest == "Y")
        {
            cout << "Chose input"<<endl;
            menu(); //balik ke menu display
        }

    }
    
    ifstream myFile;
    string str3, str4; //str 3 4 mksdenya yg ada di data base kolom no 3 dan 4 sbgai nama+no rek :V
    ifbool bankFound = false;
    myFile.open("databank.txt", ios::in);
    if(myFile.is_open())
    {
        while(!myFile.eof())
        {
        cout <<"TUJUAN TRANSFER\n"
        cout <<"NAMA    : "<<str3<<endl;
        cout <<"REKENING: "<<str4<<endl;
        cout <<"NOMINAL :Rp "<<kirim<<endl;
        if (str3 == str4){
            bankFound = true;
        }
        cout <<"TRANSFER SUCCES, WANT EXIT? (Y/N) \n"
        cin >>quest;
        if(quest == "N")
        {
            cout << "CHOSE INPUT \n";
            menu();

        }
        if(quest == "Y")
        {
            cout << "MATURSUWUN"<<endl;
        }

    else(str3 !=  str4)
    {
        cout <<"REKENING TIDAK DITEMUKAN"<<endl;
        menu(); //balik ke menu display
        break;
    }
    
}