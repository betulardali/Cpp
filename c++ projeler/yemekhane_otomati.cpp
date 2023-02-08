/*Yemekhane otomati uygulamasi:  Kullanici olarak isminizin ilk harfini ve bakiyenizi giriyorsunuz.
İsim ve bakiye girildikten sonra yemek almak icin 1 otomattan cikmak icin 0  tusluyorsunuz.
0 tuşlandigi durumda teşekkürler yazisi cikiyor. Otomattan birden fazla yemek alinabiliyor. Her yemek icin sirasiyla sayi girisi yapilacak.(1.yemek=1)
İlk kez alindiginda 4 tl ikinci kez alindiginda, 8 tl, 3 ve 3 den fazla alindiginda 12 tl kesiliyor.
Bakiyemiz yetersizse uyari veriyor ve herhangi bir tusa basarak en basa dönüyoruz yani tekrar ismin ilk harfini ve bakiyeyi istiyor.*/

#include <iostream>
using namespace std;
int main(){
while (true){
    char harf;
    float bakiye;
    int secim;
    int yemek_secim;
    int devam;
    int kalan;
    int fazla_yemek_secimi=3;
    cout << "Lutfen isminizin ilk harfini giriniz: ";   
    cin >> harf;
    cout << "Lutfen bakiyenizi giriniz: ";
    cin >> bakiye;
    cout << "Yemek almak icin 1, cikmak icin 0 tuslayiniz: ";
    cin >> secim;

    if (secim==0){
        cout << "Tesekkurler!";
        break;
    }
    else if (secim==1){
        cout << "Yemek secimi icin sayi giriniz: ";
        cin >> yemek_secim;
        if(yemek_secim==1){
            cout << "\n1.yemek" <<endl;
            cout << "1.yemek ucreti 4 tl\n";
            kalan=bakiye-4;
            cout << "Kalan bakiyeniz: " << kalan << " tl";

            cout << "\nYemek almaya devam etmek icin 1, cikmak icin 0 tuslayiniz: ";
            cin >> devam;

            if(devam==0){
                cout << "Tesekkurler";
                break;
            }

            
            if(kalan<=0){
            cout << "Yetersiz bakiye!\n";
            continue;
            }
        
            else if(devam==1){
                cout << "\n2.yemek"<< endl;
                cout << "2.yemek ucreti 8 tl\n"<< "Kalan bakiyeniz: ";
                int kalan_2 = kalan-8;
                cout << kalan_2 << " tl";

                cout << "\nYemek almaya devam etmek icin 1, cikmak icin 0 tuslayiniz: ";
                cin >> devam;

                    if(devam==0){
                        cout << "Tesekkurler";
                        break;
                    }
                    else if(devam==1){

                        if((kalan -8)<=0){
                        cout << "Yetersiz bakiye!\n";
                        continue;
                        }

                        while(fazla_yemek_secimi>=3){
                            int son_kalan = kalan_2 - 12;
                            
                            if(son_kalan < 12){
                            cout << "Yetersiz bakiye!\n";
                            continue;
                            }
                            
                            while (son_kalan >= 12) {
                                cout << "\nYemek seciminiz: " << fazla_yemek_secimi;
                                cout << "\nYemek ucretiniz 12 tl\n" << "Kalan bakiyeniz: ";
                                cout << son_kalan << " tl";

                                cout << "\nYemek almaya devam etmek icin 1, cikmak icin 0 tuslayiniz: ";
                                cin >> devam;
                                if(devam==0){
                                    cout << "Tesekkurler";
                                    break;
                                }
                                else if(devam==1){

                                if(son_kalan < 12){
                                cout << "Yetersiz bakiye!\n";
                                continue;
                                }

                                fazla_yemek_secimi++;
                                son_kalan = son_kalan - 12;

                                }
                            }
                            
                        }
                    }
            }   
        }
    }
}
return 0;
}












































































