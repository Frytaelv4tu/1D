#include <iostream>

using namespace std;

//Napisz program, ktĂłry wczyta od uĹĽytkownika jego wiek a nastÄ™pnie wyĹ›wietli go na konsoli.

void task1()
{

    short ageFromUser;

    cout << "Podaj swoj wiek: ";
    cin >> ageFromUser;

    cout << "Masz" << ageFromUser << "lat.\n";
}

//StwĂłrz program, ktĂłry pobiera od uĹĽytkownika
//dĹ‚ugoĹ›Ä‡ w metrach i przelicza jÄ… na centymetry
//milimetry i kilometry. WyĹ›wietl wynik.

void task2()
{
    float lengthInMeterFromUser;
    cout << "Podaj dlugosc w metrach\n";
    cin >> lengthInMeterFromUser;

    float lengthIncentiMeterFromUser = lengthInMeterFromUser * 100;

    cout << lengthInMeterFromUser << "metrow to\n" << lengthIncentiMeterFromUser << "cemtymetrow\n" << endl;

    float lengthInMiliMeterFromUser = lengthInMeterFromUser * 1000;
    cout << lengthInMeterFromUser << "metrow to\n" << lengthInMiliMeterFromUser << "milimetrow\n" << endl;

    float lengthIniKiloMeterFromUser = lengthInMeterFromUser / 1000;
    cout << lengthInMeterFromUser << "metrow to\n" << lengthIniKiloMeterFromUser << "kilometrow\n" << endl;
}

/*

* Napisz program, który poprosi użytkownika o podanie dwóch liczb całkowitych. Następnie wykona operacje (+, -, *, /) i wyświetli wyniki.

* Napisz program, który poprosi użytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wyświetlając wynik.

* Napisz program, który poprosi użytkownika o podanie współrzędnych (x1, y1) i (x2, y2) dwóch punktów w układzie kartezjańskim, a następnie obliczy odległość między nimi, wyświetlając wynik.


*/

// Napisz program, który poprosi użytkownika o podanie długości boku a i b prostokąta, a następnie obliczy i wyświetli pole prostokąta.
void task3()
{
    int side_a, side_b;

    cout << "Podaj dlugość boku A:";
    cin >> side_a;

    cout << "Podaj dlugość boku B:";
    cin >> side_b;

    int area_rectangle = side_a * side_b;
    cout << "Pole prostokąta o bokach: " << side_a << " i " << side_b << " wynosi " << area_rectangle << endl;
}

//Napisz program, który poprosi użytkownika o podanie długości podstawy i wysokości trójkąta, a następnie obliczy pole tego trójkąta, wyświetlając wynik.

void task4()
{
    int base_triangle, height_triangle;

    cout << "Podaj długość podstawy: ";
    cin >> base_triangle;

    cout << "Podaj wysokość trójkąta: ";
    cin >> height_triangle;

    int area_triangle = base_triangle * height_triangle;
    cout << "Pole trójkąta o podstawie " << base_triangle << " i wysokości " << height_triangle << " jest równe: " << area_triangle;
}

//Napisz program, który poprosi użytkownika o podanie promienia koła i obliczy pole tego koła, wyświetlając wynik.

void task5()
{
    float PI_number, Circle_radius;
    PI_number = 3.14159;

    cout << "Podaj promień koła: ";
    cin >> Circle_radius;

    float area_wheels = PI_number * Circle_radius;
    cout << "Pole koła o promieniu: " << Circle_radius << " jest równe " << area_wheels << endl;

}

//Napisz program, który poprosi użytkownika o podanie długości podstawy a, podstawy b i wysokości h trapezu, a następnie obliczy pole tego trapezu, wyświetlając wynik.

void task6()
{
    int base_a, base_b, height_h;

    cout << "Podaj długość podstawy A: ";
    cin >> base_a;

    cout << "Podaj długość podstawy B: ";
    cin >> base_b;

    cout << "Podaj wysokość trójkąta: ";
    cin >> height_h;

    int area_trapeze = (base_a + base_b) * height_h / 2;
    cout << "Pole trapezu o podstawie A " << base_a << ", podstawie B " << base_b << " i wysokości " << height_h << " równa się: " << area_trapeze << endl;
}

//Napisz program, który poprosi użytkownika o podanie długości krawędzi sześcianu i obliczy jego objętość, wyświetlając wynik.

void task7()
{
    int length_of_the_edge_of_the_cube;

    cout << "Podaj długość krawędzi sześcianiu: ";
    cin >> length_of_the_edge_of_the_cube;

    int volume_cube = length_of_the_edge_of_the_cube * length_of_the_edge_of_the_cube * length_of_the_edge_of_the_cube;
    cout << "Sześcian o długości krawędzi: " << length_of_the_edge_of_the_cube << " Wynosi: " << volume_cube << endl;
}

//Napisz program, który poprosi użytkownika o podanie temperatury w stopniach Celsiusza, a następnie przeliczy ją na stopnie Fahrenheita i wyświetli wynik.

void task8()
{
    int temperature_C;

    cout << "Podaj temperaturę w stopniach celsjusza: ";
    cin >> temperature_C;

    int temperature_F = (temperature_C * 9 / 5) + 32;
    cout << temperature_C << " stopni celsjusza to: " << temperature_F << " °F" << endl;
}

//Napisz program, który konwertuje wprowadzoną kwotę w jednej walucie na inną, korzystając z określonego kursu wymiany.

void task9()
{
    float pln;

    cout << "Wartość w złotówkach: ";
    cin >> pln;

    float funt = pln / 5.08;
    float euro = pln / 4.43;
    float dolar = pln / 4.14;

    cout << pln << " zł to " << funt << "funtów" << endl;
    cout << pln << " zł to " << euro << "euro" << endl;
    cout << pln << " zł to " << dolar << "dolarów" << endl;
}

//Napisz program, który poprosi użytkownika o podanie dwóch liczb (a, b) i obliczy średnią arytmetyczną tych liczb. Następnie wyświetli wynik.

void task10()
{
    float a, b;
    cout << "Podaj liczbę pierwszą (A): ";
    cin >> a;

    cout << "Podaj liczbę drugą (B): ";
    cin >> b;

    float average = (a + b) / 2;
    cout << "Średnia artymetyczna liczb: " << a << " i " << b << " jest równa: " << average;
}

//Napisz program, który poprosi użytkownika o podanie trzech liczb(a, b, c) i obliczy średnią arytmetyczną tych liczb.Następnie wyświetli wynik.

void task11()
{
    float a, b, c;

    cout << "Podaj pierwszą liczbę (a): ";
    cin >> a;

    cout << "Podaj drugą liczbę (b): ";
    cin >> b;

    cout << "Podaj drugą liczbę (c): ";
    cin >> c;

    float mean;
    mean = (a + b + c) / 3;
    cout << "Średnia artymetyczna liczby: " << a << ", liczby " << b << " i liczby " << c << " jest równa " << mean << endl;
}

//Napisz program, obliczający średnią ważoną trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

void task12()
{
    float number_1, number_2;
    float number_3, w1, w2, w3;

    cout << "Podaj liczbę pierwszą: ";
    cin >> number_1;

    cout << "Podaj liczbę drugą: ";
    cin >> number_2;

    cout << "Podaj liczbę trzecią: ";
    cin >> number_3;

    cout << "Podaj wagę pierwszej liczby wagę: ";
    cin >> w1;

    cout << "Podaj wagę drugiej wagę: ";
    cin >> w2;

    cout << "Podaj wagę trzeciej wagę: ";
    cin >> w3;

    float average_weight;
    average_weight = (number_1 * w1 + number_2 * w2 + number_3 * w3) / (w1 + w2 + w3);
    cout << "Średnia wag to: " << average_weight << endl;
}

//Napisz program, który poprosi użytkownika o podanie dwóch liczb całkowitych.Następnie wykona operacje(+, -, *, / ) i wyświetli wyniki.

void task13()
{
    int number_one, number_two;

    cout << "Podaj liczbe 1: ";
    cin >> number_one;

    cout << "Podaj liczbe 2: ";
    cin >> number_two;

    int operation_1 = number_one + number_two;
    int operation_2 = number_one - number_two;
    int operation_3 = number_one * number_two;
    int operation_4 = number_one / number_two;

    cout << "Operacja 1 (+): " << operation_1 << "\nOperacja 2 (-): " << operation_2 << "\nOperacja 3 (*): " << operation_3 << "\nOperacja 4 (/): " << operation_4 << endl;
}

void task14()
{
    float s, min, h;

    cout << "Podaj liczbę sekund: ";
    cin >> s;

    min = s / 60;
    h = s / 3600;

    cout << s << " sekund to: \n" << min << " minut \n" << h << "godzin" << endl;
}

//Napisz program, który poprosi użytkownika o podanie współrzędnych(x1, y1) i(x2, y2) dwóch punktów w układzie kartezjańskim, a następnie obliczy odległość między nimi, wyświetlając wynik.

void task15()
{
    int x1, y1;
    cout << "Podaj współrzędne punktu A (x1, y1): ";
    cin >> x1 >> y1;

    int x2, y2;
    cout << "Podaj wspolrzedne punktu B (x2 y2): ";
    cin >> x2 >> y2;

    double distance;
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    cout << "Odległość między punktami A i B wynosi: " << distance << endl;
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    //task7();
    //task8();
    //task9();
    //task10();
    //task11();
    //task12();
    //task13();
    //task14();
    //task15();

    return 0;
}


/*

<<<<<<< HEAD
    Algorytm - skończony zbiór instrukcji realizujący postawione przed nim zadanie.
    Kolejność instrukcji w zbiorze jest określona.
=======
    Algorytm - zbiĂłr instrukcji realizujÄ…cy postawione przed nim zadanie.
>>>>>>> 41dc9cc6617836b9d94098020bf24d87057ab1a2
    Sposoby zapisu:
    * w punktach
    * opis sĹ‚owny
    * jÄ™zyk programowania lub pseudokod
    * zbiĂłr rysunkĂłw
    * schemat blokowy

    Zmienna - jest to powien obszar w pamiÄ™ci, sĹ‚ĂłĹĽÄ…cy do przechowywania danych. Te dane moĹĽna modyfikowaÄ‡.
    Zmienna pozwala przechowaÄ‡ tylko jednÄ… wartoĹ›Ä‡ w danym momencie czasu.

    Deklaracja zmiennej - moment jej utworzenia

    typ_zmiennej oraz nazwa_zmiennej;

    Typ zmiennej - mĂłwi o wielkoĹ›ci obszaru w pamiÄ™ci i o rodzaju przechowywanych danych.

    short         liczby caĹ‚kowite ze znakiem 2  bajty  <-32 768; 32 767>
    int/long      liczby caĹ‚kowite ze znakiem 4 bajty  <-2 147 483 648; 2 147 483 647>
    long long     liczby caĹ‚kowite ze znakiem 8 bajty <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

    JeĹĽeli przed powyĹĽszymi typami dodamy sĹ‚owo "unsigned" to zakres jest od zero do podwojnego zakresu gĂłrnego

    float         liczby rzeczywiste ze znakiem 4 bajty
    double        liczby rzeczywiste ze znakiem 8 bajtĂłw
    long double   liczby rzeczywiste ze znakiem 12 bajtĂłw

    Nazwa zmiennej - nazwa obszaru w pamiÄ™ci. Poprzez ta nazwÄ™ odwoĹ‚ujemy siÄ™ do tego obszaru.

    Wymagania kompilatora wzglÄ™dem nazwy:
    * uzycie tylko dozwolonych znakĂłw
    -  alfabet angielski a-z oraz A-Z
    -  cyfry arabskie 0-9
    -  podkreĹ›lenie (podĹ‚oga) _
    * pierwszym znakiem nie moĹĽe byÄ‡ cyfra
    * nie moĹĽe byÄ‡ sĹ‚owo kluczowe danego jÄ™zyka programowania
    * musi byÄ‡ unikalna w danej widocznoĹ›ci

    Wymagania programistĂłw:
    * jeĹ›li nazwa skĹ‚ada siÄ™ z wielu wyrazĂłw to zamiast spacji:
    - uĹĽywamy znaku podkreĹ›lenia np. first_number_from_user
    - stosujemy camel case, czyli piszemy wszystko razem a sĹ‚owa (zaczynamy od drugiego)
    zaczynamy z duĹĽej litery np. firstNumberFromUser
    * nazwa zmiennej musi oddawaÄ‡ charakter przechowanych danych, czyli mieÄ‡ znaczenie
    * nazwy po angielsku !!!

*/