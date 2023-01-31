//girilen dogum günü ile burc bulma

/*Koç(aries) = 21 Mart - 20 Nisan         
  Boğa(taurus) = 21 Nisan - 20 Mayıs
  İkizler(gemini) = 21 Mayıs - 21 Haziran
  Yengeç(cancer) = 22 Haziran - 22 Temmuz
  Aslan(leo) = 23 Temmuz - 22 Ağustos
  Başak(virgo) = 23 Ağustos - 22 Eylül
  Terazi(libra) = 23 Eylül - 23 Ekim
  Akrep(scorpius) = 24 Ekim - 22 Kasım
  Yay(sagittarius) = 23 Kasım - 21 Aralık
  Oğlak(capricorn) = 22 Aralık - 20 Ocak
  Kova(aquarius) = 21 Ocak - 18 Şubat
  Balık(pisces) = 19 Şubat - 20 Mart*/

//ocak 31/şubat 29/mart 31/nisan 30/mayıs 31/haziran 30/temmuz 31/ağustos 31/eylül 30/ekim 31/kasım 30/aralık 31

#include <iostream>
using namespace std;
int main(){
while (true){
    string ay;
    int gun;
    int devam;
    cout << "Dogdunuz ayi giriniz: ";
    cin >> ay;
    cout << "Dogdunuz gunu giriniz: ";
    cin >> gun;
    if(ay == "Ocak" || ay == "ocak"){
        if(1 <= gun && gun <=20){
            cout << "Oglak" << endl;
        }
        else if(21 <= gun && gun <= 31){
            cout << "Kova" << endl;
        }
    }
    else if(ay == "Subat" || ay == "subat"){
        if(1 <= gun && gun <= 18){
            cout << "Kova" << endl;
        }
        else if(19 <= gun && gun <=29){
            cout << "Balik" << endl;
        }
    }
    else if(ay == "Mart" || ay == "mart"){
        if(1 <= gun && gun <= 20){
            cout << "Balik" << endl;
        }
        else if(21 <= gun && gun <= 31){
            cout << "Koc" << endl;
        }
    }
    else if(ay == "Nisan" || ay == "nisan"){
        if(1 <= gun && gun <= 20){
            cout << "Koc" << endl;
        }
        else if(21 <= gun && gun <= 30){
            cout << "Boga" << endl;
        }
    }
    else if(ay == "Mayis" || ay == "mayis"){
        if(1 <= gun && gun <=20){
            cout << "Boga" << endl;
        }
        else if(21 <= gun && gun <=31){
            cout << "Ikizler" << endl;
        }
    }
    else if(ay == "Haziran" || ay == "haziran"){
        if(1 <= gun && gun <= 21){
            cout << "Ikizler" << endl;
        }
        else if(22 <= gun && gun <= 30){
            cout << "Yengec" << endl;
        }
    }
    else if(ay == "Temmuz" || ay == "temmuz"){
        if(1 <= gun && gun <= 22){
            cout << "Yengec" << endl;
        }
        else if(23 <= gun && gun <= 31){
            cout << "Aslan" << endl;
        }
    }
    else if(ay == "Agustos" || ay == "agustos"){
        if(1 <= gun && gun <= 22){
            cout << "Aslan" << endl;
        }
        else if(23 <= gun && gun <= 31){
            cout << "Basak" << endl;
        }
    }
    else if(ay == "Eylul" || ay == "eylul"){
        if(1 <= gun && gun <=22){
            cout << "Basak" << endl;
        }
        else if(23 <= gun && gun <=30){
            cout << "Terazi" << endl;
        }
    }
    else if(ay == "Ekim" || ay == "ekim"){
        if(1 <= gun && gun <= 23){
            cout << "Terazi" << endl;
        }
        else if(24 <= gun && gun <=31){
            cout << "Akrep" << endl;
        }
    }
    else if(ay == "Kasim" || ay == "kasim"){
        if(1 <= gun && gun <= 22){
            cout << "Akrep" << endl;
        }
        else if(23 <= gun && gun <=30){
            cout << "Yay" << endl;
        }
    }
    else if(ay == "Aralik" || ay == "aralik"){
        if(1 <= gun && gun <= 21){
            cout << "Yay" << endl;
        }
        else if(22 <= gun && gun <= 31){
            cout << "Oglak" << endl;
        }
    }
    cout << "Baska bir tarih girmek icin '1' cikmak icin '0' tuslayiniz: " << endl;
    cin >> devam;
    if(devam == 1)
         continue;
    else if(devam == 0)
        break;
}  
return 0;
}