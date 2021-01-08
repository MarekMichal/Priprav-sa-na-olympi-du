
#include <iostream>
#include <cmath>
#include <ctime>
#include <random>
using namespace std;

void oddelovac1()
{//akcia
    cout << "---------------------------------------------------------------------------------------" << endl << endl;
}

void oddelovac2()
{//staty
    cout << "(((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((" << endl << endl;
}

void oddelovac3()
{//vysvetlivky
    cout << "???????????????????????????????????????????????????????????????????????????????????????" << endl << endl;
}

void oddelovac4()
{//info/text
    cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl << endl;
}

void oddelovac5()
{//problem
    cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl << endl;
}

void staty(int hodiny, int sila, int peniaze, int unava, int hlad, int vstupenka)
{//staty
    oddelovac2();
    cout << "Statistiky:" << endl << endl;
    cout << "Cas:" << hodiny / 24 << " dni " << hodiny % 31 << " hodin" << endl;
    cout << "Sila:" << sila << " %" << endl;
    cout << "Peniaze:" << peniaze << " EUR" << endl;
    cout << "Unava:" << unava << " %" << endl;
    cout << "Hlad:" << hlad << " %" << endl;
    cout << "Olympijska vstupenka: " << vstupenka << endl << endl;
    oddelovac2();
}

/*void staty2(int vietor, int uholhodu, int vahagule, int silahodu)
{//staty na olympiadu
    oddelovac2();
    cout << "Vaha gule:" << vietor << endl;
    cout << "Uhol hodu:" << uholhodu << endl;
    cout << "Sila hodu:" << silahodu << endl;
    cout << "Vietor:" << vietor << endl;
    oddelovac2();
}*/

double hodOponentaNezaokruhlene(double min, double max)
{
return ((double)rand() / RAND_MAX) * (max - min) + min;
}

int main()
{
    cout << "ODPORUCAM HRAT NA FULLSCREEN" << endl;
    bool prehra = false;
    int hra = 0;
    int vyber = 0;
    int hodiny = 744;
    int sila = 0;
    int peniaze = 100;
    int unava = 0;
    int hlad = 0;
    int Domov = 1;
    int kupa = 0;
    int vstupenka = 0;
    int poradie = 0;
    double hodOponentaZaokruhlene = 0;
    int oponenti = 0;    
    int dialka = 0;
    int silahodu = 0;
    int vietor = 0;
    int uholhodu = 0;
    int vahagule = 0;
    oddelovac4();
    cout << "Priprav sa na olympyadu!" << endl << endl;
    cout << "START" << endl << "ODIST" << endl << endl << "stlac 1 aby si zacal" << endl << "stlac hocico ine aby si odisiel" << endl;
    oddelovac4();
    oddelovac1();
    cin >> hra;
    oddelovac1();
    if (hra == 1)
    {
        oddelovac3();
        cout << "Vitaj v hre!" << endl;
    }
    else
    {
        return 0;
    }
    cout << endl << "Teraz ta prevediem touto hrou:" << endl << endl << "Cielom tejto hry je vyhrat olympiadu v hadzani tazkou gulou." << endl;
    cout << "Ma to vsak jeden hacik: Oympiada sa zacina uz o mesiac a ty si slaby ako pierko." << endl;
    cout << "A aby toho nebolo malo, tak si chudobny skoro ako bezdomovec. Ale ty mas plan!" << endl;
    cout << "Zarabaj vo svojej praci, plat za treningy a pripravuj sa." << endl << endl;
    oddelovac3();
    system("PAUSE");
    staty(hodiny, sila, peniaze, unava, hlad, vstupenka);
    system("PAUSE");
    oddelovac3();
    cout << endl << "Toto su tvoje statystiky:" << endl << "Cas urcuje kolko casu ti este zostava do dna olympiady." << endl;
    cout << "Sila urcuje ako silny si. Odporucam zamerat sa hlavne na tuto statistiku lebo je velmi rozhodujuca." << endl;
    cout << "Peniaze urcuju kolko mas penazi. Pocas tohto mesiaca si nezabudni kupit olympijsku vstupenku za 2000 EUR kedze tato olympiada nie je zadarmo." << endl;
    cout << "Hlad urcuje ako hladny si. Ak je hlad na 100% zacne sa ti kazdym tahom zvisovat unava.";
    cout << "Aby si znizil hlad id do obchodu a kup si jedlo. A mozno aj nejake boosty. :)" << endl << endl;
    cout << "Ostatne dolezite podrobnosti budu vysvetlene priebezne pocas hry." << endl << endl;
    oddelovac3();
    system("PAUSE");
    do
    {
        do
        {
            staty(hodiny, sila, peniaze, unava, hlad, vstupenka);
            oddelovac4();
            cout << "Chces ist do prace na trening alebo spat?" << endl << endl;
            cout << "PRACA: stlac 1" << endl << "-10 hodin" << endl << "+200 EUR" << endl << "+10% unavy" << endl << "+40% hladu" << endl;
            cout << "Uberie sa ti 10 hodin z casu, zarobis si 200 EUR, unavis sa na dalsich 10% a vyhladnes o 40%" << endl << endl;
            cout << "TRENING: stlac 2" << endl << "-5 hodin" << endl << "-50 EUR" << endl << "+10% unavy" << endl << "+20% hladu" << endl;
            cout << "Uberie sa ti 5 hodin z casu, minies 50 EUR, unavis sa na dalsich 10% a vyhladnes o 20%" << endl << endl;
            cout << "SPANOK: stlac 3" << endl << "-7 hodin" << endl << "-50% unavy" << endl << "+50% hladu" << endl;
            cout << "Uberie sa ti 7 hodin casu, unava sa ti znizi o 50% a vyhladnes o 50%" << endl << endl;
            cout << "OBCHOD: stlac 4" << endl;
            oddelovac4();
            oddelovac1();
            cin >> vyber;
            oddelovac1();
            switch (vyber)
            {
            default:
                oddelovac5();
                cout << "Vyberaj len cisla 1,2,3,4! " << endl;
                oddelovac5();
                break;
            case 5: //CHEATCODE
                oddelovac5();
                cout << "Cas ti vyprsal!" << endl;
                oddelovac5();
                hodiny = 0;
                vstupenka = 1;
                break;
            case 1://PRACA// 
                if (hodiny < 10)
                {
                    hodiny = 0;
                    oddelovac5();
                    cout << "Cas ti vyprsal!" << endl;
                    oddelovac5();
                }
                if (unava >= 91)
                {
                    oddelovac5();
                    cout << "Si moc unaveny!" << endl << "Chod spat alebo kup nieco proti unave v obchode" << endl;
                    oddelovac5();
                    break;
                }
                if (hlad >= 81)
                {
                    oddelovac5();
                    cout << "Si moc hladny!" << endl << "Kup si jedlo" << endl;
                    oddelovac5();
                    break;
                }
                hodiny = hodiny - 10;
                peniaze = peniaze + 200;
                unava = unava + 10;
                hlad = hlad + 20;
                break;
            case 2://TRENING// 
                if (hodiny < 1)
                {
                    hodiny = 0;
                    oddelovac5();
                    cout << "Cas ti vyprsal!" << endl;
                    oddelovac5();
                }
                if (peniaze <= 50)
                {
                    oddelovac5();
                    cout << "Nemas dostatok penazi!" << endl << "Chod do prace aby si ziskal peniaze." << endl;
                    oddelovac5();
                    break;
                }
                if (unava >= 91)
                {
                    oddelovac5();
                    cout << "Si moc unaveny!" << endl << "Chod spat alebo kup nieco proti unave v obchode." << endl;
                    oddelovac5();
                    break;
                }
                if (hlad >= 61)
                {
                    oddelovac5();
                    cout << "Si moc hladny!" << endl << "Kup si jedlo" << endl;
                    oddelovac5();
                    break;
                }
                hodiny = hodiny - 5;
                peniaze = peniaze - 50;
                sila = sila + 1;
                unava = unava + 10;
                hlad = hlad + 40;
                break;
            case 3://POSTEL//               
                if (hodiny < 1)
                {
                    hodiny = 0;
                    oddelovac5();
                    cout << "Cas ti vyprsal!" << endl;
                    oddelovac5();
                }
                if (unava < 10)
                {
                    oddelovac5();
                    cout << "Nie si unaveny!" << endl << "Chod nieco robit! " << endl;
                    oddelovac5();
                    break;
                }
                if (unava < 50)
                {
                    unava = 0;
                }
                if (hlad > 50)
                {
                    oddelovac5();
                    cout << "Si moc hladny!" << endl << "Kup si jedlo" << endl;
                    oddelovac5();
                    break;
                }
                hodiny = hodiny - 7;
                unava = unava - 50;
                hlad = hlad + 50;
                break;
            case 4://OBCHOD//
                if (peniaze < 5)
                {
                    oddelovac5();
                    cout << "Nemas dostatok penazi!" << endl << "Chod do prace aby si ziskal peniaze." << endl;
                    oddelovac5();
                    break;
                }                
                while (Domov == 1)
                {
                    if (peniaze < 5)
                    {
                        oddelovac5();
                        cout << "Nemas dostatok penazi!" << endl << "Chod do prace aby si ziskal peniaze." << endl;
                        oddelovac5();
                        break;
                    }
                    oddelovac1();
                    cout << "Chces pokracovat v platbe alebo ist domov?" << endl << endl;
                    cout << "DOMOV: stlac 0" << endl << "DO OBCHODU: stlac 1" << endl << endl;
                    oddelovac1();
                    cin >> Domov;
                    oddelovac4();
                    if (Domov == 0)
                    {
                        break;
                    }
                    staty(hodiny, sila, peniaze, unava, hlad, vstupenka);
                    oddelovac4();
                    cout << "Tu mas na vyber rozne produkty:" << endl << endl;
                    cout << "Ist domov: stlac 0" << endl << endl;
                    cout << "Cukriky: stlac 1" << endl << "Hlad: -5" << endl << "Unava: -5 " << endl << "Peniaze: -5 EUR" << endl << endl;
                    cout << "Gulas: stlac 2" << endl << "Hlad: -50" << endl << "Peniaze: -20 EUR" << endl << endl;
                    cout << "Energetak: stlac 3" << endl << "Unava: -30" << endl << "Peniaze: -5 EUR" << endl << endl;
                    cout << "Zosilovace: stlac 4" << endl << "Sila: +10" << endl << "Peniaze: -100 EUR" << endl << endl;
                    cout << "Supergulas: stlac 5" << endl << "Hlad: reset" << endl << "Unava: reset" << endl << "Sila: +30" << endl << "Peniaze: -1000 EUR" << endl << endl;
                    cout << "Olympijska vstupenka: stlac 6" << endl << "Peniaze: -2000 EUR" << endl;
                    oddelovac4();                    
                    cin >> kupa;
                    switch (kupa)
                    {
                    default:
                        oddelovac5();
                        cout << "Vyberaj len cisla 0,1,2,3,4,5! " << endl;
                        oddelovac5();
                    case 0:
                        break;
                    case 1:
                        hlad = hlad - 5;
                        if (hlad < 0)
                        {
                            hlad = 0;
                        }
                        unava = unava - 5;
                        if (unava <= 4)
                        {
                            oddelovac5();
                            cout << "Nie si unaveny!" << endl << "Chod nieco robit! " << endl;
                            oddelovac5();
                            break;
                        }
                        peniaze = peniaze - 5;
                        break;
                    case 2:
                        if (peniaze < 20)
                        {
                            oddelovac5();
                            cout << "Nemas dostatok penazi!" << endl << "Chod do prace aby si ziskal peniaze." << endl;
                            oddelovac5();
                            break;
                        }
                        if (hlad < 0)
                        {
                            hlad = 0;
                        }
                        peniaze = peniaze - 20;
                        hlad = hlad - 50;
                        break;
                    case 3:
                        if (peniaze < 5)
                        {
                            oddelovac5();
                            cout << "Nemas dostatok penazi!" << endl << "Chod do prace aby si ziskal peniaze." << endl;
                            oddelovac5();
                            break;
                        }
                        if (unava < 30)
                        {
                            oddelovac5();
                            cout << "Nie si unaveny!" << endl << "Chod nieco robit! " << endl;
                            oddelovac5();
                            break;
                        }
                        unava = unava - 30;
                        peniaze = peniaze - 5;
                        break;
                    case 4:
                        if (peniaze < 100)
                        {
                            oddelovac5();
                            cout << "Nemas dostatok penazi!" << endl << "Chod do prace aby si ziskal peniaze." << endl;
                            oddelovac5();
                            break;
                        }
                        if (hlad < 0)
                        {
                            hlad = 0;
                        }
                        hlad = hlad - 50;
                        peniaze = peniaze - 100;
                        break;
                    case 5:
                        if (peniaze < 1000)
                        {
                            oddelovac5();
                            cout << "Nemas dostatok penazi!" << endl << "Chod do prace aby si ziskal peniaze." << endl;
                            oddelovac5();
                            break;
                        }
                        hlad = 0;
                        unava = 0;
                        sila = sila + 30;
                        peniaze = peniaze - 1000;
                        break;
                    case 6:
                        if (vstupenka == 1)
                        {
                            oddelovac5();
                            cout << "Vstupenku si si uz kupil! Naco ti je druha? Kamaratov v tejto hre nemas. :(" << endl;
                            oddelovac5();
                            break;
                        }
                        if (peniaze < 2000)
                        {
                            break;
                        }
                        vstupenka = 1;
                        peniaze = peniaze - 2000;
                    }
                }
            }
        }
        while (hodiny > 0);
        if (vstupenka == 0)
        {
            oddelovac5();
            cout << "Prehral si!" << endl << "Nekupil si si vstupenku!" << endl;
            oddelovac5();
            hodiny = 744;
            sila = 0;
            peniaze = 100;
            unava = 0;
            hlad = 0;
            prehra = true;
        }
        else
        {
            hodiny = 0;
            oddelovac3();
            cout << "Dnes je tvoj velky den!" << endl << "Cely mesiac si sa pripravoval a je na case otestovat tvoju silu a taktiku." << endl
                << "Tvojim cielom je dohodit gulu co najdalej." << endl << "Ale aby sa tak stalo musis zhodnotit svoju situaciu a hodit gulu spravne." << endl
                << "To znamena ze musis zistit alebo odhadnut tieto informacie:" << endl
                << "Silu, vietor, uhol hodu, vahu gule, poradie kolkaty budes hadzat a vysledky tvojich protivnikov." << endl;
            oddelovac3();
            cout << "Kolkaty chces hadzat v poradi?" << endl << "Vyber si cislo od 1 do 10" << endl;
            oddelovac1();
            cin >> poradie;
            oddelovac1();
            srand(time(NULL));
            for (oponenti = 1; oponenti <= 10; oponenti++)
            {
                if (oponenti == poradie)
                {
                    continue;
                } 
                hodOponentaZaokruhlene = hodOponentaNezaokruhlene(3, 10);
                hodOponentaZaokruhlene *= 100;
                cout << "Hrac cislo " << oponenti << ": " << (round(hodOponentaZaokruhlene)) / 100 << " m" << endl;
            }
            break;
        }        
    } 
    while (prehra == true);
    return 0;
}
