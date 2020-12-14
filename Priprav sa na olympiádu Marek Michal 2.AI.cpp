
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int a = 0;
    int hodiny = 744;
    int sila = 0;
    int peniaze = 100;
    int unava = 0;
    int hlad = 0;
    cout << "Priprav sa na olympyadu!" << endl << endl;
    cout << "START" << endl << "ODIST" << endl << endl << "stlac 1 aby si zacal" << endl << "stlac hocico ine aby si odisiel" << endl;
    cin >> a;
    if (a == 1) {
        cout << "-------------------------------------------------------------------" << endl << endl << "Vitaj v hre!" << endl;
    }
    else {
        return 0;
    }
    cout << endl << "Teraz ta prevediem touto hrou:" << endl << endl << "Cielom tejto hry je vyhrat olympiadu v hadzani tazkou gulou." << endl;
    cout << "Ma to vsak jeden hacik: Oympiada sa zacina uz o mesiac a ty si slaby ako pierko." << endl;
    cout << "A aby toho nebolo malo, tak si chudobny skoro ako bezdomovec. Ale ty mas plan!" << endl;
    cout << "Zarabaj vo svojej praci, plat za treningy a pripravuj sa." << endl << endl;
    system("PAUSE");
    cout << "-------------------------------------------------------" << endl << endl << "Statistiky:" << endl << endl;


    cout << "Cas:" << hodiny / 24 << " dni " << hodiny % 31 << " hodin" << endl;
    cout << "Sila:" << sila << " %" << endl;
    cout << "Peniaze:" << peniaze << " EUR" << endl;
    cout << "Unava:" << unava << " %" << endl;
    cout << "Hlad:" << hlad << " %" << endl << endl;
    system("PAUSE");
    cout << "-------------------------------------------------------" << endl << endl;

    cout << endl << "Toto su tvoje statystiky:" << endl << "Cas urcuje kolko casu ti este zostava do dna olympiady." << endl;
    cout << "Sila urcuje ako silny si. Odporucam zamerat sa hlavne na tuto statistiku lebo je velmi rozhodujuca." << endl;
    cout << "Peniaze urcuju kolko mas penazi. Ku koncu si nechaj 100 EUR kedze tato olympiada nie je zadarmo." << endl;
    cout << "Unava urcuje ako unaveny si. Aby si mohol ist do prace alebo do fitka musis byt co najmenej unaveny." << endl;
    cout << "Hlad urcuje ako hladny si. Ak je hlad na 100% zacne sa ti kazdym tahom zvisovat unava.";
    cout << "Aby si znizil hlad id do obchodu a kup si jedlo. A mozno aj nejake boosty. :)" << endl << endl;

    cout << "Ostatne dolezite podrobnosti budu vysvetlene priebezne pocas hry." << endl << endl;
    system("PAUSE");
    cout << "-------------------------------------------------------" << endl << endl;

    while (true) {
        do {
            if (hodiny < 1) {
                hodiny = 0;
                return 0;
            }
            cout << "(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((" << endl;
            cout << "Chces ist do prace na trening alebo spat?" << endl << endl;
            cout << "PRACA: stlac 1" << endl << "-10 hodin" << endl << "+200 EUR" << endl << "+10% unavy" << endl << "+40% hladu" << endl;
            cout << "Uberie sa ti 10 hodin z casu, zarobis si 200 EUR, unavis sa na dalsich 10% a vyhladnes o 40%" << endl << endl;
            cout << "TRENING: stlac 2" << endl << "-5 hodin" << endl << "-50 EUR" << endl << "+10% unavy" << endl << "+20% hladu" << endl;
            cout << "Uberie sa ti 5 hodin z casu, minies 50 EUR, unavis sa na dalsich 10% a vyhladnes o 20%" << endl << endl;
            cout << "SPANOK: stlac 3" << endl << "-7 hodin" << endl << "-50% unavy" << endl << "+50% hladu" << endl;
            cout << "Uberie sa ti 7 hodin casu, unava sa ti znizi o 50% a vyhladnes o 50%" << endl << endl;
            cout << "OBCHOD: stlac 4" << endl;
            cout << "(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((" << endl;

            int vyber = 0;
            cin >> vyber;  

            switch (vyber) {
            case 1:         //PRACA//
                hodiny = hodiny - 10;
                if (hodiny < 1) {
                    hodiny = 0;
                    cout << "Cas ti vyprsal!" << endl;
                    cout << "------------------------------------------------------------------" << endl;
                    return 0;
                    
                }
                peniaze = peniaze + 200;
                unava = unava + 10;
                if (unava >= 100) {
                    cout << "Si moc unaveny!" << endl << "Chod spat alebo kup nieco proti unave v obchode" << endl;
                    cout << "------------------------------------------------------------------" << endl;
                    break;
                }
                hlad = hlad + 20;
                if (hlad >= 81) {
                    cout << "Si moc hladny!" << endl << "Kup si jedlo" << endl;
                    cout << "------------------------------------------------------------------" << endl;
                    break;
                }


                cout << "Cas:" << hodiny / 24 << " dni " << hodiny % 24 << " hodin" << endl;
                cout << "Sila:" << sila << " %" << endl;
                cout << "Peniaze:" << peniaze << " EUR" << endl;
                cout << "Unava:" << unava << "%" << endl;
                cout << "Hlad:" << hlad << " %" << endl;
                cout << "-----------------------------------------------------------------" << endl << endl;
                break;

            case 2://TRENING//
                hodiny = hodiny - 5;
                if (hodiny < 1) {
                    hodiny = 0;
                    cout << "Cas ti vyprsal!" << endl;
                    cout << "------------------------------------------------------------------" << endl;
                }
                peniaze = peniaze - 50;
                if (peniaze <= 50) {
                    cout << "Nemas dostatok penazi!" << endl << "Chod do prace aby si ziskal peniaze." << endl;
                    cout << "------------------------------------------------------------------" << endl;
                    break;
                }
                sila = sila + 1;
                unava = unava + 10;
                if (unava >= 100) {
                    cout << "Si moc unaveny!" << endl << "Chod spat alebo kup nieco proti unave v obchode." << endl;
                    cout << "------------------------------------------------------------------" << endl;
                    break;
                }
                hlad = hlad + 40;
                if (hlad >= 61) {
                    cout << "Si moc hladny!" << endl << "Kup si jedlo" << endl;
                    cout << "------------------------------------------------------------------" << endl;
                    break;
                }
                cout << "Cas:" << hodiny / 24 << " dni " << hodiny % 24 << " hodin" << endl;
                cout << "Sila:" << sila << " %" << endl;
                cout << "Peniaze:" << peniaze << " EUR" << endl;
                cout << "Unava:" << unava << "%" << endl;
                cout << "Hlad:" << hlad << " %" << endl;
                cout << "-----------------------------------------------------------------" << endl << endl;
                break;

            case 3://POSTEL//
                hodiny = hodiny - 7;
                if (hodiny < 1) {
                    hodiny = 0;
                }

                if (unava <= 49) {
                    cout << "Nie si unaveny!" << endl << "Chod nieco robit! " << endl;
                    cout << "------------------------------------------------------------------" << endl;
                    break;
                }
                else {
                    unava = unava - 50;
                }
                hlad = hlad + 50;

                if (hlad > 100) {
                    hlad = 100;
                }

                cout << "Cas:" << hodiny / 24 << " dni " << hodiny % 24 << " hodin" << endl;
                cout << "Sila:" << sila << " %" << endl;
                cout << "Peniaze:" << peniaze << " EUR" << endl;
                cout << "Unava:" << unava << " %" << endl;
                cout << "Hlad:" << hlad << " %" << endl;
                 cout << "-----------------------------------------------------------------" << endl << endl;
                break;

            case 4://OBCHOD//
                if (peniaze < 5) {
                    break;
                }
                {
                
                bool domov = true;
                while (domov == true) {
                    if (peniaze < 5) {                        
                            cout << "Nemas dostatok penazi!" << endl << "Chod do prace aby si ziskal peniaze." << endl;
                            cout << "------------------------------------------------------------------" << endl;
                          break;                           
                        }
                    cout << "Chces pokracovat v platbe alebo ist domov?" << endl << endl;
                    cout << "DOMOV: stlac 0" << endl << "DO OBCHODU: stlac 1" << endl << endl;
                    cin >> domov;
                    cout << "-------------------------------------------------------" << endl << endl;
                    if (domov == false) {
                        break;
                    }
                    cout << "Tu mas na vyber rozne potrviny:" << endl << endl;
                    cout << "Ist domov: stlac 0" << endl << endl;
                    cout << "Cukriky: stlac 1" << endl << "Hlad: -5" << endl << "Unava: -5 " << endl << "Peniaze: -5 EUR" << endl << endl;
                    cout << "Gulas: stlac 2" << endl << "Hlad: -50" << endl << "Peniaze: -20 EUR" << endl << endl;
                    cout << "Energetak: stlac 3" << endl << "Unava: -30" << endl << "Peniaze: -5 EUR" << endl << endl;
                    cout << "Zosilovace: stlac 4" << endl << "Sila: +10" << endl << "Peniaze: -100 EUR" << endl << endl;
                    cout << "Supergulas: stlac 5" << endl << "Hlad: reset" << endl << "Unava: reset" << endl << "Sila: +30" << endl << "Peniaze: -1000 EUR" << endl << endl;

                    int kupa = 0;

                    cin >> kupa;
                    switch (kupa) {
                    case 0:
                        break;
                    case 1:
                        hlad = hlad - 5;
                        if (hlad < 0) {
                            hlad = 0;
                        }
                        unava = unava - 5;
                        if (unava <= 4) {
                            cout << "Nie si unaveny!" << endl << "Chod nieco robit! " << endl;
                            cout << "------------------------------------------------------------------" << endl;
                            break;
                        }                        
                        peniaze = peniaze - 5;
                        break;
                    case 2:
                        hlad = hlad - 50;
                        if (hlad < 0) {
                            hlad = 0;
                        }
                        peniaze = peniaze - 20;
                        break;
                    case 3:
                        unava = unava - 30;
                        if (unava < 30) {
                            cout << "Nie si unaveny!" << endl << "Chod nieco robit! " << endl;
                            cout << "------------------------------------------------------------------" << endl;
                            break;
                        }
                        peniaze = peniaze - 5;
                        break;
                    case 4:
                        hlad = hlad - 50;
                        if (hlad < 0) {
                            hlad = 0;
                        }
                        peniaze = peniaze - 100;
                        break;
                    case 5:
                        hlad = 0;
                        unava = 0;
                        sila = sila + 30;
                        peniaze = peniaze - 1000;
                        break;
                    }
                    cout << "----------------------------------------------------------" << endl;
                    cout << "Cas:" << hodiny / 24 << " dni " << hodiny % 31 << " hodin" << endl;
                    cout << "Sila:" << sila << " %" << endl;
                    cout << "Peniaze:" << peniaze << " EUR" << endl;
                    cout << "Unava:" << unava << " %" << endl;
                    cout << "Hlad:" << hlad << " %" << endl << endl;
                    cout << "----------------------------------------------------------" << endl;
                }
            }

            }
        }

        while (hodiny < 1);
    }

    return 0;
}
