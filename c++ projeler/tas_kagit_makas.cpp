#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
int main(){
    string secenek[3] = {"tas","kagit","makas"};
    srand(time(0));
    int pc = rand() % 3;
    //cout << secenek[pc] << endl;  secenek dizisinden random bir eleman seçilid-p ekrana yazdırması
    int pc_secim=0;
    int kullanici_secim=0;
    int devam;
    string kullanici = "a";
    
        while (true){
            cout << "\ntas mi, kagit mi, makas mi? ";
            cin >> kullanici;
            if(kullanici=="tas"){
                if(secenek[pc]=="tas"){
                    cout << "Bilgisayar secimi: tas " << "\nBerabere" << "\nBilgisayar: " << pc_secim << "\tKullanici: " << kullanici_secim;
                    }
                else if(secenek[pc]=="kagit"){
                    pc_secim++;
                    cout << "Bilgisayar secimi: kagit" << "\nKaybettiniz" << "\nBilgisayar: " << pc_secim << "\tKullanici: " << kullanici_secim;
                }
                else if(secenek[pc]=="makas"){
                    kullanici_secim++;
                    cout << "Bilgisayar secimi: makas" << "\nKazandiniz: " << "\nBilgisayar: " << pc_secim << "\tKullanici: " << kullanici_secim;
                    }
            }

            if(kullanici=="kagit"){
                if(secenek[pc]=="kagit"){
                    cout << "Bilgisayar secimi: kagit " << "\nBerabere" << "\nBilgisayar: " << pc_secim << "\tKullanici: " << kullanici_secim;
                }
                else if(secenek[pc]=="makas"){
                    pc_secim++;
                    cout << "Bilgisayar secimi: makas" << "\nKaybettiniz" << "\nBilgisayar: " << pc_secim << "\tKullanici: " << kullanici_secim;
                }
                else if(secenek[pc]=="tas"){
                    kullanici_secim++;
                    cout << "Bilgisayar secimi: tas" << "\nKazandiniz: " << "\nBilgisayar: " << pc_secim << "\tKullanici: " << kullanici_secim;
                }
            }


            if(kullanici=="makas"){
                if(secenek[pc]=="makas"){
                    cout << "Bilgisayar secimi: makas " << "\nBerabere" << "\nBilgisayar: " << pc_secim << "\tKullanici: " << kullanici_secim;
                }
                else if(secenek[pc]=="tas"){
                    pc_secim++;
                    cout << "Bilgisayar secimi: tas" << "\nKaybettiniz" << "\nBilgisayar: " << pc_secim << "\tKullanici: " << kullanici_secim;
                }
                else if(secenek[pc]=="kagit"){
                    kullanici_secim++;
                    cout << "Bilgisayar secimi: kagit" << "\nKazandiniz: " << "\nBilgisayar: " << pc_secim << "\tKullanici: " << kullanici_secim;
                }
            }
                
            cout << "\n\nDevam etmek icin 1 cikmak icin 0 tuslayiniz: ";
            cin >> devam;

            if(devam==0){
                cout << "\n**SKOR**" << "\nKullanici : " << kullanici_secim << "\nBilgisayar: " << pc_secim << endl;
                if(kullanici_secim > pc_secim){
                    cout << "\nKAZANDINIZ!"<< endl;
                }
                else if(kullanici_secim < pc_secim){
                    cout << "\nKAYBETTINIZ!" << endl;
                }
                else if(kullanici_secim== pc_secim){
                    cout << "BERABERE!" << endl;
                }
                cout << "\nOynadiginiz icin tesekkurler!" << endl;
                break;
            }
                
            else if(devam==1){
                continue;
            }
        } 
    return 0;
}