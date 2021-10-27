#include <iostream>
#include <fstream>
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
            cout << "Input Amount Bank: \n";
            cin >> //id adres mungkin :v
        }return 0;
        if(quest == "Y")
        {
            cout << "Chose input"<<endl;
        }
}

switch (kode)
{
case 1:
    cout <<endl;
    cout <<" ___________________________________________"<<endl;
    cout <<"|       INFORMASI SALDO                     |"<<endl;
    cout <<"|___________________________________________|"<<endl;
    cout <<"|"<<endl;
    cout <<"|SISA SALDO: RP. "<<saldo<<endl;
    cout <<"|___________________________________________|"<<endl;
    cout <<"APAKAH INGIN MELAKUKAN TRANSFER (Y/N): "; cin>>quest;
    break;
    
    case 2:
    cout <<"               ATM BANK "<<endl;
    cout <<"============================================="<<endl;
    cout <<" " <<endl;
    cout <<"               TRANSFER "<<endl;
    cout <<" "<<endl;
    cout <<"SILAHKAN MASUKAN UANG YANG INGIN ANDA TRANSFER: " ; cin >>kirim;
    
    if(kirim % 50000 == 0 || saldo > nominal)
    {
        cout <<"MASUKAN TOTAL UANG DENGAN PECAHAN 50000\n";
        saldo = saldo+kirim;
        sytem("cls";)
        cout <<"Saldo: "<<saldo;
        cout <<endl;
    }
   
}