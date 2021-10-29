#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

bool wantExit = false;
char quest;
string username, pass;
int saldo,kirim;

void buatAkun();
void firstPage();
void fitur1();
void fitur2();
void fitur3();
void fitur4();
void menuUtama();

int main() {
	firstPage();
}

void fitur1(){
	string nama, saldo;
    ifstream database;
    database.open("datasaldo.txt", ios::in);
    if(database.is_open()){
        database >> nama >> saldo;
        if(username == nama){
            cout << "\n\nInformasi Rekening Anda\n";
            cout << "username : " << nama << endl;
            cout << "jumlah saldo : " << saldo << endl;
			cout << endl;
        }
    }
    else{
        cout << "Error : System gagal membuka database\n";
	}
    cout << "Ingin Cek Saldo ? (Y/N)\n";
    cin >>quest;
    switch (quest)
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
    switch (quest)
        {
		case 1 == 'N' : {
			menuUtama();
		}
		if(quest == 'Y') {
            cout <<"               ATM BANK "<<endl;
            cout <<"============================================="<<endl;
            cout <<" " <<endl;
            cout <<"               TRANSFER "<<endl;
            cout <<" "<<endl;
            cout <<" MASUKAN UANG YANG INGIN ANDA TRANSFER: " ; cin >>kirim;
        }
    for(kirim > saldo || saldo < kirim) ////tanda > eror knp yyak ? 
    {
        cout <<"SALDO ANDA KURANG"<<endl;
        cout << " want cancel? (Y/N) : \n";
        cin >> quest;
        if(quest == 'N')
        {
            cout << "Input Amount Bank: \n";
            cin >> kirim;
        }
        if(quest == 'Y')
        {
            cout << "Chose input"<<endl;
            menuUtama(); //balik ke menu display
            break;
        }

    ifstream myFile;
    string str3, str4; //str 3 4 mksdenya yg ada di data base kolom no 3 dan 4 sbgai nama+no rek :V
    ifstream bankFound ;
    myFile.open("datarekening.txt", ios::in);
    if(myFile.is_open())
    {
        while(!myFile.eof())
        {
        cout <<"TUJUAN TRANSFER\n";
        cout <<"NAMA    : "<<str3<<endl;
        cout <<"REKENING: "<<str4<<endl;
        cout <<"NOMINAL :Rp "<<kirim<<endl;
        if (str3 == str4){
            cout <<"TRANSFER SUCCES, WANT EXIT? (Y/N) \n";
            cin >>quest;

            if(quest == 'N')
        {
            cout << "CHOSE INPUT \n";
            menuUtama();
        }
        if(quest == 'Y')
        {
            cout << "MATURSUWUN"<<endl;
        }
        else if (str3 !=  str4)
        {
        cout <<"REKENING TIDAK DITEMUKAN"<<endl;
        menuUtama(); //balik ke menu display
        default:
        }
    }  
}













void fitur2(){
	//tulis kode di sini	
}

void fitur3(){
	// tulis kode di sini
}

void fitur4(){
while(not wantExit){
	float gajiAwal, growRate, outcome, capitalGain = 0, divYield = 0, infl;
	int tahun;
	double sum = 0, temp;
	
	//input data
	cout << "\n~~~ Selamat datang di Kalkulator Prediksi Kekayaan ~~~\n";
	cout << "Masukkan gaji awal kamu : \n";
	cin >> gajiAwal;
	cout << "Masukkan kisaran pertumbuhan gaji per tahunnya (persentase) : \n";
	cin >> growRate;
	cout << "Masukkan pengeluaranmu tiap bulan : \n";
	cin >> outcome;
	cout << "Masukkan nilai inflasi (persentase) : \n";
	cin >> infl;
	cout << "Apakah kamu punya saham (Y/N) : \n";
	cin >> quest;
	if(quest == 'Y'){
		cout << "Masukkan rata-rata pertumbuhan nilai saham per tahun (persentase) : \n";
		cin >> capitalGain;
		cout << "Masukkan nilai dividen yield (persentase) : \n";
		cin >> divYield;
		}
	cout << "Masukkan tahun yang ingin dicari : \n";
	cin >> tahun;
	
	//kalkulasi
	for(int i = 0; i < tahun; i++){
		temp = sum + (gajiAwal - outcome)*12*(1+capitalGain/100+divYield/100);
		sum = temp*(1-infl/100);
		gajiAwal = gajiAwal*(1+growRate/100);
	}
	cout << "Kamu akan mempunyai uang sebesar ";
	printf("%0.0lf", sum);
	cout << " pada tahun ke-" << tahun;
	}
}

void menuUtama() {
	// Input Username & Password
	bool userValid = false, passValid = false;
	cout << "~~~ Selamat Datang di Bank Krut ~~~" 
	<< endl << "Username : ";
	cin >> username;
	cout << "Password : ";
	cin >> pass;
	
	//pencocokan masukan dengan database
	string str1, str2;
	ifstream database;
	database.open("data.txt", ios::in);
	if(database.is_open()){
		while(!database.eof() && not userValid && not passValid){
			userValid = false;
			passValid = false;
			database >> str1 >> str2; database.ignore();
			if(username == str1)
				userValid = true;
			if(pass == str2)
				passValid = true;
		}
	}
	database.close();

	if(userValid && passValid){
		int X;
		cout << "\n~~~ Silakan pilih fitur yang anda inginkan ~~~\n";
		cout << "1. Cek Saldo\n" << "2. Transfer \n" << "3. Ubah pin \n" << "4. Kalkulator Kekayaan\n";
		cout << "\nmasukkan fitur yang anda inginkan (1/2/3/4) : ";
		cin >> X;
		switch(X){
			case 1 : {
				fitur1();
				break;
			}
			case 2 : {
				fitur2();
				break;
			}
			case 3 : {
				fitur3();
				break;
			}
			case 4 : {
				fitur4();
				break;
			}
		}
	}	
	
	else{
		cout << "Username atau Password yang anda masukkan salah\n";
		cout << "Apakah anda ingin keluar? (Y/N)\n";
		
	}
}

void buatAkun(){
	string buatUsername, buatPass;
	cout << "Terima kasih atas kepercayaan anda kepada Bank Krut\n";
	cout << "Masukkan Username yang ingin anda buat : \n";
	cin >> buatUsername;
	cout << "Masukkan Password yang ingin and buat : \n";
	cin >> buatPass;
	ofstream database;
	database.open("data.txt", ios :: app | ios::in);
	if(database.is_open()){
		database <<"\n" << buatUsername << " " << buatPass;
		database.close();
	}
	else
		cout << "Error : System gagal membuka database\n";
	cout << "Selamat, Akun mobile banking anda berhasil dibuat\n";
	firstPage();
}

void firstPage(){
	int quest;
	cout << "~~~ Selamat Datang di Bank Krut ~~~\n";
	cout << "1. Login\n";
	cout << "2. Buat Akun\n";
	cout << "Masukkan Pilihan (1/2) : \n";
	cin >> quest;
	switch (quest){
		case 1 : {
			menuUtama();
		}
		case 2 : {
			buatAkun();
		}
		default :
			return 0;
	}
}