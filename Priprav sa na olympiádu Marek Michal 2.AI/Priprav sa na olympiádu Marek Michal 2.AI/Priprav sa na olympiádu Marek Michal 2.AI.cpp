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

float nahodneCislo(float min, float max)
{
    return ((float)rand() / RAND_MAX) * (max - min) + min;
}

int main()
{
    cout << "ODPORUCAM HRAT NA FULLSCREEN" << endl;
    bool prehra = false;
    int hra = 0;
    int vyberObtiaznost = 0;
    int hodinyPraca = 0, peniazePraca = 0, unavaPraca = 0, hladPraca = 0;
    int hodinyTrening = 0, peniazeTrening = 0, unavaTrening = 0, hladTrening = 0;
    int hodinySpanok = 0, unavaSpanok = 0, hladSpanok = 0;
    int peniazeCukriky = 0, unavaCukriky = 0, hladCukriky = 0;
    int peniazeGulas = 0, hladGulas = 0;
    int peniazeEnergetak = 0, unavaEnergetak = 0;
    int peniazeZosilovace = 0, silaZosilovace = 0;
    int peniazeSupergulas = 0, silaSupergulas = 0;
    int peniazeVstupenka = 0;
    int vyber = 0;
    int hodiny = 744, sila = 0, peniaze = 100, unava = 0, hlad = 0, vstupenka = 0;
    int silaOponenta = 0;
    int Domov = 1, kupa = 0, poradie = 0, oponenti = 0;
    float dialka = 0;
    int silahodu = 0;
    float minVietor = 0, maxVietor = 0, vietor = 0;
    int uholhodu = 0, uholhoduOponenta = 0;
    float minVahagule = 0, vahagule = 0, maxVahagule = 0;
    float hrac1 = 0, hrac2 = 0, hrac3 = 0, hrac4 = 0, hrac5 = 0, hrac6 = 0, hrac7 = 0, hrac8 = 0, hrac9 = 0, hrac10 = 0;
    float Vitaz[10] = { hrac1, hrac2, hrac3, hrac4, hrac5, hrac6, hrac7, hrac8, hrac9, hrac10 };
    float maximum = 0;
    int i = 0;
    int ivyhral = 0;
    int ja = 0;
    do
    {
        oddelovac4();
        cout << "Priprav sa na olympyadu!" << endl << endl;
        cout << "START" << endl << "ODIST" << endl << endl << "stlac 1 aby si zacal" << endl << "stlac hocico ine aby si odisiel" << endl;
        oddelovac4();
        oddelovac1();
        cin >> hra;
        oddelovac1();
        if (hra == 1)
        {
            oddelovac4();
            cout << "Vyber si obtiaznost:" << endl << "LAHKA: 1" << endl << "STREDNA: 2" << endl << "TAZKA: 3" << endl;
            oddelovac4();
            oddelovac1();
            cin >> vyberObtiaznost;
            oddelovac1();
            switch (vyberObtiaznost)
            {
            default:
                oddelovac5();
                cout << "Vyberaj len cisla 1,2,3! " << endl;
                oddelovac5();
                break;
                /*vyberObtiaznost, hodinyPraca, peniazePraca, unavaPraca, hladPraca,
                     hodinyTrening, peniazeTrening, unavaTrening, hladTrening,
                     hodinySpanok, unavaSpanok, hladSpanok,
                     peniazeCukriky, unavaCukriky, hladCukriky,
                     peniazeGulas, hladGulas,
                     peniazeEnergetak, unavaEnergetak,
                     peniazeZosilovace, silaZosilovace,
                     peniazeSupergulas, silaSupergulas,
                     peniazeVstupenka = */
            case 1://LAHKA    
                hodinyPraca = 5;
                peniazePraca = 500;
                unavaPraca = 10;
                hladPraca = 10;
                hodinyTrening = 2;
                peniazeTrening = 50;
                unavaTrening = 10;
                hladTrening = 10;
                hodinySpanok = 6;
                unavaSpanok = 70;
                hladSpanok = 30;
                peniazeCukriky = 2;
                unavaCukriky = 30;
                hladCukriky = 20;
                peniazeGulas = 10;
                hladGulas = 40;
                peniazeEnergetak = 3;
                unavaEnergetak = 30;
                peniazeZosilovace = 200;
                silaZosilovace = 10;
                peniazeSupergulas = 500;
                silaSupergulas = 12;
                peniazeVstupenka = 1000;
                break;
            case 2://STREDNA 
                hodinyPraca = 8;
                peniazePraca = 250;
                unavaPraca = 20;
                hladPraca = 30;
                hodinyTrening = 5;
                peniazeTrening = 200;
                unavaTrening = 40;
                hladTrening = 25;
                hodinySpanok = 8;
                unavaSpanok = 50;
                hladSpanok = 50;
                peniazeCukriky = 5;
                unavaCukriky = 20;
                hladCukriky = 10;
                peniazeGulas = 20;
                hladGulas = 30;
                peniazeEnergetak = 6;
                unavaEnergetak = 20;
                peniazeZosilovace = 350;
                silaZosilovace = 7;
                peniazeSupergulas = 1000;
                silaSupergulas = 9;
                peniazeVstupenka = 2000;
                break;
            case 3://TAZKA            
                hodinyPraca = 12;
                peniazePraca = 100;
                unavaPraca = 40;
                hladPraca = 50;
                hodinyTrening = 10;
                peniazeTrening = 500;
                unavaTrening = 60;
                hladTrening = 40;
                hodinySpanok = 10;
                unavaSpanok = 30;
                hladSpanok = 70;
                peniazeCukriky = 10;
                unavaCukriky = 10;
                hladCukriky = 5;
                peniazeGulas = 30;
                hladGulas = 20;
                peniazeEnergetak = 10;
                unavaEnergetak = 15;
                peniazeZosilovace = 650;
                silaZosilovace = 4;
                peniazeSupergulas = 1500;
                silaSupergulas = 5;
                peniazeVstupenka = 3500;
                break;
            }

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
        cout << endl << "Toto su tvoje statystiky:" << endl << "Cas urcuje kolko casu ti este zostava do dna olympiady." << endl
            << "Sila urcuje ako silny si. Odporucam zamerat sa hlavne na tuto statistiku lebo je velmi rozhodujuca." << endl
            << "Peniaze urcuju kolko mas penazi. Pocas tohto mesiaca si nezabudni kupit olympijsku vstupenku za 2000 EUR kedze tato olympiada nie je zadarmo." <<
            endl << "Hlad urcuje ako hladny si. Ak je hlad na 100% zacne sa ti kazdym tahom zvisovat unava." << endl 
            << "Aby si znizil hlad id do obchodu a kup si jedlo. A mozno aj nejake boosty. :)" << endl << endl
            << "Ostatne dolezite podrobnosti budu vysvetlene priebezne pocas hry." << endl << endl;
        oddelovac3();
        system("PAUSE");

        do
        {
            staty(hodiny, sila, peniaze, unava, hlad, vstupenka);
            oddelovac4();
            cout << "Chces ist do prace na trening alebo spat?" << endl << endl;
            cout << "PRACA: stlac 1" << endl
                << "- " << hodinyPraca << " hodin" << endl
                << "+ " << peniazePraca << " EUR" << endl
                << "+ " << unavaPraca << " unavy" << endl
                << "+ " << hladPraca << " hladu" << endl;
            cout << "Uberie sa ti " << hodinyPraca << " hodin z casu, zarobis si " << peniazePraca
                << " EUR, unavis sa na dalsich " << unavaPraca << " % a vyhladnes o " << hladPraca << " %" << endl << endl;
            cout << "TRENING: stlac 2" << endl
                << "- " << hodinyTrening << " hodin" << endl
                << "- " << peniazeTrening << " EUR" << endl
                << "+ " << unavaTrening << " % unavy" << endl
                << "+ " << hladTrening << " % hladu" << endl;
            cout << "Uberie sa ti " << hodinyTrening << " hodin z casu, minies " << peniazeTrening
                << " EUR, unavis sa na dalsich " << unavaTrening << " % a vyhladnes o " << hladTrening << " %" << endl << endl;
            cout << "SPANOK: stlac 3" << endl
                << "- " << hodinySpanok << " hodin" << endl
                << "- " << unavaSpanok << " % unavy" << endl
                << "+ " << hladSpanok << " % hladu" << endl;
            cout << "Uberie sa ti " << hodinySpanok << " hodin casu, unava sa ti znizi o " << unavaSpanok
                << " % a vyhladnes o " << hladSpanok << " %" << endl << endl;
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
                hodiny = 0;
                vstupenka = 1;
                sila = 100;
                break;
            case 1://PRACA// 
                if (hodiny < 0)
                {
                    hodiny = 0;
                }
                if (unava > unavaPraca)
                {
                    oddelovac5();
                    cout << "Si moc unaveny!" << endl << "Chod spat alebo kup nieco proti unave v obchode" << endl;
                    oddelovac5();
                    break;
                }
                if (hlad > hladPraca)
                {
                    oddelovac5();
                    cout << "Si moc hladny!" << endl << "Kup si jedlo" << endl;
                    oddelovac5();
                    break;
                }
                hodiny = hodiny - hodinyPraca;
                peniaze = peniaze + peniazePraca;
                unava = unava + unavaPraca;
                hlad = hlad + hladPraca;
                break;
            case 2://TRENING//                 
                if (peniaze < peniazeTrening)
                {
                    oddelovac5();
                    cout << "Nemas dostatok penazi!" << endl << "Chod do prace aby si ziskal peniaze." << endl;
                    oddelovac5();
                    break;
                }
                if (unava > 100 - unavaTrening)
                {
                    oddelovac5();
                    cout << "Si moc unaveny!" << endl << "Chod spat alebo kup nieco proti unave v obchode." << endl;
                    oddelovac5();
                    break;
                }
                if (hlad > 100 - hladTrening)
                {
                    oddelovac5();
                    cout << "Si moc hladny!" << endl << "Kup si jedlo" << endl;
                    oddelovac5();
                    break;
                }
                hodiny = hodiny - hodinyTrening;
                if (hodiny < 0)
                {
                    hodiny = 0;
                }
                peniaze = peniaze - peniazeTrening;
                sila = sila + 1;
                unava = unava + unavaTrening;
                hlad = hlad + hladTrening;
                break;
            case 3://POSTEL//                
                if (unava < unavaSpanok / 2)
                {
                    oddelovac5();
                    cout << "Nie si unaveny!" << endl << "Chod nieco robit! " << endl;
                    oddelovac5();
                    break;
                }
                hodiny = hodiny - hodinySpanok;
                if (hodiny < 0)
                {
                    hodiny = 0;
                }
                unava = unava - unavaSpanok;
                if (unava < unavaSpanok)
                {
                    unava = 0;
                }
                hlad = hlad + hladSpanok;
                if (hlad > 100 - hladSpanok)
                {
                    hlad = 100;
                }



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
                    case 1://CUKRIKY
                        if (hlad < 0)
                        {
                            hlad = 0;
                        }
                        unava = unava - unavaCukriky;
                        if (unava < 0)
                        {
                            unava = 0;
                        }

                        hlad = hlad - hladCukriky;
                        peniaze = peniaze - peniazeCukriky;
                        break;
                    case 2://GULAS
                        if (peniaze < peniazeGulas)
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
                        peniaze = peniaze - peniazeGulas;
                        hlad = hlad - hladGulas;
                        break;
                    case 3://ENERGETAK
                        if (peniaze < peniazeEnergetak)
                        {
                            oddelovac5();
                            cout << "Nemas dostatok penazi!" << endl << "Chod do prace aby si ziskal peniaze." << endl;
                            oddelovac5();
                            break;
                        }
                        if (unava < 0)
                        {
                            unava = 0;
                            break;
                        }
                        unava = unava - unavaEnergetak;
                        peniaze = peniaze - peniazeEnergetak;
                        break;
                    case 4://ZOSILOVACE
                        if (peniaze < peniazeZosilovace)
                        {
                            oddelovac5();
                            cout << "Nemas dostatok penazi!" << endl << "Chod do prace aby si ziskal peniaze." << endl;
                            oddelovac5();
                            break;
                        }
                        sila = sila - silaZosilovace;
                        peniaze = peniaze - peniazeZosilovace;
                        break;
                    case 5://SUPERGULAS
                        if (peniaze < peniazeSupergulas)
                        {
                            oddelovac5();
                            cout << "Nemas dostatok penazi!" << endl << "Chod do prace aby si ziskal peniaze." << endl;
                            oddelovac5();
                            break;
                        }
                        hlad = 0;
                        unava = 0;
                        sila = sila + silaSupergulas;
                        peniaze = peniaze - peniazeSupergulas;
                        break;
                    case 6://VSTUPENKA
                        if (vstupenka == 1)
                        {
                            oddelovac5();
                            cout << "Vstupenku si si uz kupil! Naco ti je druha? Kamaratov v tejto hre nemas. :(" << endl;
                            oddelovac5();
                            break;
                        }
                        if (peniaze < peniazeVstupenka)
                        {
                            oddelovac5();
                            cout << "Nemas dostatok penazi!" << endl << "Chod do prace aby si ziskal peniaze." << endl;
                            oddelovac5();
                            break;
                        }
                        vstupenka = 1;
                        peniaze = peniaze - peniazeVstupenka;
                    }
                }
            }
        } while (hodiny > 0);
        if (vyber == 5)
        {
            oddelovac5();
            cout << "Cas ti vyprsal cheater!" << endl;
            oddelovac5();
        }
        else
        {
            oddelovac5();
            cout << "Cas ti vyprsal!" << endl;
            oddelovac5();
        }
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
            minVahagule = nahodneCislo(1, 3);
            minVahagule *= 100;
            minVahagule = round(minVahagule) / 100;
            maxVahagule = minVahagule + 0.5;
            vahagule = nahodneCislo(minVahagule, maxVahagule);
            vahagule *= 100;
            vahagule = round(vahagule) / 100;//vaha gule
            minVietor = nahodneCislo(0, 10);
            minVietor *= 10;
            minVietor = round(minVietor) / 10;
            maxVietor = 5 + minVietor;
            vietor = nahodneCislo(minVietor, maxVietor);
            vietor *= 10;
            vietor = round(vietor) / 10;// sila vetra

            for (oponenti = 1; oponenti <= 10; oponenti++)
            {
                if (oponenti == poradie)
                {
                    oddelovac3();
                    cout << "Teraz, ked si na rade s hadzanim si ideme vysvetlit ako sa hadze:" << endl
                        << "Ako uz bolo spomenute, musis odhadnut niektore informacie. Ako prve musime vediet aky si silny." << endl;
                    system("pause");
                    cout << sila << " %" << endl;
                    oddelovac3();
                    system("pause");
                    oddelovac3();
                    cout << "Fajn, teraz potrebujeme zistit vahu gule. Cim tazsia gula tym nizsie vyleti" << endl
                        << "(nepytaj sa ci to tak funguje aj v realite. Toto je herna realita tak sa stym zmier. :)  )" << endl
                        << "Nie si vsak robot a nevies zistit vahu gule presne, len priblizne." << endl
                        << "Dam ti len nahodne rozpatie kolko moze priblizne ta gula vazit." << endl;
                    cout << "Vsetci hadzu rovnakou gulou." << endl;
                    cout << minVahagule << " - " << maxVahagule << " kg" << endl;
                    oddelovac3();
                    system("pause");
                    oddelovac3();
                    cout << "Dalej potrebujeme zistit silu vetra. Cim silnejsi vietor tym menej dohodis." << endl
                        << "Dalej to je uz rovnake ako s vahou gule:" << endl;
                    cout << minVietor << " - " << maxVietor << " m/s" << endl;
                    oddelovac3();
                    system("pause");
                    oddelovac3();
                    cout << "Teraz sa musis rozhodnut pod akym uhlom budes hadzat." << endl
                        << "Rozhoduj poriadne lebo ked to zadas, tak zacnes hned hadzat" << endl
                        << "Mozes si vybrat v rozpati od 10 do 80 stupnoveho uhla." << endl;
                    cin >> uholhodu;
                    oddelovac3();
                    dialka = (sila / vietor) * (uholhodu / (vahagule * 10));
                    dialka *= 100;
                    dialka = round(dialka) / 100;
                    cout << "Tvoj hod: " << dialka << " m" << endl;
                    continue;
                }
                else
                {
                    silaOponenta = nahodneCislo(1, 50);
                    round(silaOponenta);
                    silaOponenta;
                    uholhoduOponenta = nahodneCislo(10, 80);
                    round(uholhoduOponenta);
                    uholhoduOponenta;
                    dialka = (silaOponenta / vietor) * (uholhoduOponenta / (vahagule * 10));
                    dialka *= 100;
                    dialka = round(dialka) / 100;
                    cout << "Hrac cislo " << oponenti << ": " << dialka << " m" << endl;

                    switch (oponenti)
                    {
                    case 1:
                        hrac1 = dialka;
                        if (poradie == oponenti)
                        {
                            ja = 0;
                        }
                        break;
                    case 2:
                        hrac2 = dialka;
                        if (poradie == oponenti)
                        {
                            ja = 1;
                        }
                        break;
                    case 3:
                        hrac3 = dialka;
                        if (poradie == oponenti)
                        {
                            ja = 2;
                        }
                        break;
                    case 4:
                        hrac4 = dialka;
                        if (poradie == oponenti)
                        {
                            ja = 3;
                        }
                        break;
                    case 5:
                        hrac5 = dialka;
                        if (poradie == oponenti)
                        {
                            ja = 4;
                        }
                        break;
                    case 6:
                        hrac6 = dialka;
                        if (poradie == oponenti)
                        {
                            ja = 5;
                        }
                        break;
                    case 7:
                        hrac7 = dialka;
                        if (poradie == oponenti)
                        {
                            ja = 6;
                        }
                        break;
                    case 8:
                        hrac8 = dialka;
                        if (poradie == oponenti)
                        {
                            ja = 7;
                        }
                        break;
                    case 9:
                        hrac9 = dialka;
                        if (poradie == oponenti)
                        {
                            ja = 8;
                        }
                        break;
                    case 10:
                        hrac10 = dialka;
                        if (poradie == oponenti)
                        {
                            ja = 9;
                        }
                        break;
                    }
                }
            }
        }
        float Vitaz[10] = { hrac1, hrac2, hrac3, hrac4, hrac5, hrac6, hrac7, hrac8, hrac9, hrac10 };
        maximum = Vitaz[0];
        for (i = 0; i < 10; i++)
        {
            if (maximum < Vitaz[i])
            {
                maximum = Vitaz[i];
                ivyhral = i;                
            }
        }
        if (ja == ivyhral)
        {
            cout << "Vyhral si!" << endl << "Hodil si " << maximum << " m" << endl;           
        }
        else
        {
            cout << "Vitaz je hrac " << ivyhral + 1 << " !" << endl << "Hodil " << maximum << " m" << endl;
            prehra = true;
            system("pause");
        }
    } while (prehra == true);
    return 0;
}
