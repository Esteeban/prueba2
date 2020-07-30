#include <iostream>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <fstream>
#include <string>
#include <string.h>
#include <stdlib.h>

using namespace std;
struct Postulante
{
    int rut;
    int nem;
    int ranking;
    int lenguaje;
    int matematica;
    int cienciassociales;
    int ciencias;
    float NotaAdmiPublic;
    float NotaBiblioDoc;
    float NotaContador;
    float NotaIngComer;
    float NotaAdmiAgro;
    float NotaComeInter;
    float NotaGestTuris;
    float NotaArqui;
    float NotaCivilObraCivi;
    float NotaConstru;
    float NotaPrevMedio;
    float NotaBiotec;
    float NotaIndusAlimen;
    float NotaQuimica;
    float NotaQuimicaIndustrial;
    float NotaComuVisual;
    float NotaDiseno;
    float NotaTrabSocial;
    float NotaBachiller;
    float NotaDibProyec;
    float NotaCivilCompu;
    float NotaCivilIndus;
    float NotaCivilCienciaDatos;
    float NotaCivilElectronico;
    float NotaCivilMecanica;
    float NotaGeomensura;
    float NotaInformatica;
    float NotaIndustrial;

} Postulante[5015751], PostulanteOrdenado[28], Inscritos[2055];

struct Posicion
{
    int posMa;
    int posMe;

} Posicion[100];

void DatosPostulantes(std::string archivo, int &i);

void OrdenamientoDePostulantes(int &i);

void BuscarRut(std::string rut);

void participantes();
/**
 * Prueba2
 * @param argc cantidad de argumentos
 * @param argv argumentos
 * @return El código de salida del programa
 */
int main(int argc, char **argv)
{
    std::string identificador(argv[1]);
    std::string argumento(argv[2]);
    int i = 0;
    if (identificador[0] == '1')
    {
        std::string archivo(argv[2]);
        std::cout << "Obteniendo datos de los estudiantes desde el archivo..." << std::endl;
        DatosPostulantes(archivo, i);
        std::cout << "Ordenando datos de los estudiantes..." << std::endl;
        OrdenamientoDePostulantes(i);
    }
    if (identificador[0] == '2')
    {
        std::string rut(argv[2]);
        std::cout << argumento << std::endl; //funcion buscar rut
        BuscarRut(rut);
    }
    else
    {
        std::cout << "Ingrese argumento valido: 1 para generar archivos, 2 para busqueda de postulante" << std::endl;
    }
    participantes();
    return EXIT_SUCCESS;
}

void DatosPostulantes(std::string archivo, int &i)
{

    std::string RUT, NEM, RANKING, LENGUAJE, MATEMATICAS, CIENCIASSOCIALES, CIENCIAS;
    std::string texto;

    ifstream lectura(archivo); //abrir el archivo
    if (lectura.fail())
    {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }

    while (!lectura.eof())
    { //mientras no sea el final del archivo

        getline(lectura, texto);

        RUT[0] = texto[0];
        RUT[1] = texto[1];
        RUT[2] = texto[2];
        RUT[3] = texto[3];
        RUT[4] = texto[4];
        RUT[5] = texto[5];
        RUT[6] = texto[6];
        RUT[7] = texto[7];

        NEM[0] = texto[9];
        NEM[1] = texto[10];
        NEM[2] = texto[11];

        RANKING[0] = texto[13];
        RANKING[1] = texto[14];
        RANKING[2] = texto[15];

        LENGUAJE[0] = texto[17];
        LENGUAJE[1] = texto[18];
        LENGUAJE[2] = texto[19];

        MATEMATICAS[0] = texto[21];
        MATEMATICAS[1] = texto[22];
        MATEMATICAS[2] = texto[23];

        CIENCIASSOCIALES[0] = texto[25];
        CIENCIASSOCIALES[1] = texto[26];
        CIENCIASSOCIALES[2] = texto[27];

        CIENCIAS[0] = texto[29];
        CIENCIAS[1] = texto[30];
        CIENCIAS[2] = texto[31];

        int rut = atoi(RUT.c_str());        //Mediante la funcion atoi() se realiza la conversion de los valores de los puntajes
        int nem = atoi(NEM.c_str());        //que se encuentra como string a variables int, para luego trabajarlos
        int ranking = atoi(RANKING.c_str());
        int lenguaje = atoi(LENGUAJE.c_str());
        int matematicas = atoi(MATEMATICAS.c_str());
        int cienciasociales = atoi(CIENCIASSOCIALES.c_str());
        int ciencias = atoi(CIENCIAS.c_str());

        if (cienciasociales <= ciencias)
        {
            Postulante[i].NotaAdmiPublic = nem * 0.15 + ranking * 0.2 + lenguaje * 0.3 + matematicas * 0.25 + ciencias * 0.1;
            Postulante[i].NotaBiblioDoc = nem * 0.20 + ranking * 0.2 + lenguaje * 0.4 + matematicas * 0.10 + ciencias * 0.1;
            Postulante[i].NotaContador = nem * 0.20 + ranking * 0.2 + lenguaje * 0.3 + matematicas * 0.15 + ciencias * 0.15;
            Postulante[i].NotaIngComer = nem * 0.10 + ranking * 0.2 + lenguaje * 0.3 + matematicas * 0.30 + ciencias * 0.1;
            Postulante[i].NotaAdmiAgro = nem * 0.10 + ranking * 0.2 + lenguaje * 0.3 + matematicas * 0.30 + ciencias * 0.1;
            Postulante[i].NotaComeInter = nem * 0.10 + ranking * 0.2 + lenguaje * 0.3 + matematicas * 0.30 + ciencias * 0.1;
            Postulante[i].NotaGestTuris = nem * 0.10 + ranking * 0.2 + lenguaje * 0.3 + matematicas * 0.30 + ciencias * 0.1;
            Postulante[i].NotaArqui = nem * 0.15 + ranking * 0.25 + lenguaje * 0.20 + matematicas * 0.2 + ciencias * 0.20;
            Postulante[i].NotaCivilObraCivi = nem * 0.20 + ranking * 0.2 + lenguaje * 0.15 + matematicas * 0.35 + ciencias * 0.1;
            Postulante[i].NotaConstru = nem * 0.20 + ranking * 0.2 + lenguaje * 0.15 + matematicas * 0.35 + ciencias * 0.1;
            Postulante[i].NotaPrevMedio = nem * 0.15 + ranking * 0.35 + lenguaje * 0.2 + matematicas * 0.2 + ciencias * 0.1;
            Postulante[i].NotaBiotec = nem * 0.15 + ranking * 0.25 + lenguaje * 0.2 + matematicas * 0.30 + ciencias * 0.1;
            Postulante[i].NotaIndusAlimen = nem * 0.15 + ranking * 0.25 + lenguaje * 0.2 + matematicas * 0.30 + ciencias * 0.1;
            Postulante[i].NotaQuimica = nem * 0.10 + ranking * 0.25 + lenguaje * 0.15 + matematicas * 0.30 + ciencias * 0.20;
            Postulante[i].NotaQuimicaIndustrial = nem * 0.10 + ranking * 0.25 + lenguaje * 0.15 + matematicas * 0.30 + ciencias * 0.2;
            Postulante[i].NotaComuVisual = nem * 0.10 + ranking * 0.40 + lenguaje * 0.3 + matematicas * 0.10 + ciencias * 0.1;
            Postulante[i].NotaDiseno = nem * 0.15 + ranking * 0.40 + lenguaje * 0.3 + matematicas * 0.10 + ciencias * 0.1;
            Postulante[i].NotaTrabSocial = nem * 0.20 + ranking * 0.30 + lenguaje * 0.2 + matematicas * 0.10 + ciencias * 0.2;
            Postulante[i].NotaBachiller = nem * 0.10 + ranking * 0.25 + lenguaje * 0.2 + matematicas * 0.35 + ciencias * 0.1;
            Postulante[i].NotaDibProyec = nem * 0.10 + ranking * 0.25 + lenguaje * 0.2 + matematicas * 0.35 + ciencias * 0.1;
            Postulante[i].NotaCivilCompu = nem * 0.10 + ranking * 0.25 + lenguaje * 0.2 + matematicas * 0.35 + ciencias * 0.1;
            Postulante[i].NotaCivilIndus = nem * 0.10 + ranking * 0.25 + lenguaje * 0.2 + matematicas * 0.35 + ciencias * 0.1;
            Postulante[i].NotaCivilCienciaDatos = nem * 0.10 + ranking * 0.25 + lenguaje * 0.2 + matematicas * 0.35 + ciencias * 0.1;
            Postulante[i].NotaCivilElectronico = nem * 0.10 + ranking * 0.25 + lenguaje * 0.2 + matematicas * 0.35 + ciencias * 0.1;
            Postulante[i].NotaCivilMecanica = nem * 0.10 + ranking * 0.25 + lenguaje * 0.2 + matematicas * 0.35 + ciencias * 0.1;
            Postulante[i].NotaGeomensura = nem * 0.10 + ranking * 0.25 + lenguaje * 0.2 + matematicas * 0.35 + ciencias * 0.1;
            Postulante[i].NotaInformatica = nem * 0.10 + ranking * 0.25 + lenguaje * 0.2 + matematicas * 0.35 + ciencias * 0.1;
            Postulante[i].NotaIndustrial = nem * 0.10 + ranking * 0.25 + lenguaje * 0.2 + matematicas * 0.35 + ciencias * 0.1;
        }

        if (cienciasociales >= ciencias)
        {
            Postulante[i].NotaAdmiPublic = nem * 0.15 + ranking * 0.2 + lenguaje * 0.3 + matematicas * 0.25 + cienciasociales * 0.1;
            Postulante[i].NotaBiblioDoc = nem * 0.20 + ranking * 0.2 + lenguaje * 0.4 + matematicas * 0.10 + cienciasociales * 0.1;
            Postulante[i].NotaContador = nem * 0.20 + ranking * 0.2 + lenguaje * 0.3 + matematicas * 0.15 + cienciasociales * 0.15;
            Postulante[i].NotaIngComer = nem * 0.10 + ranking * 0.2 + lenguaje * 0.3 + matematicas * 0.30 + cienciasociales * 0.1;
            Postulante[i].NotaAdmiAgro = nem * 0.10 + ranking * 0.2 + lenguaje * 0.3 + matematicas * 0.30 + cienciasociales * 0.1;
            Postulante[i].NotaComeInter = nem * 0.10 + ranking * 0.2 + lenguaje * 0.3 + matematicas * 0.30 + cienciasociales * 0.1;
            Postulante[i].NotaGestTuris = nem * 0.10 + ranking * 0.2 + lenguaje * 0.3 + matematicas * 0.30 + cienciasociales * 0.1;
            Postulante[i].NotaArqui = nem * 0.15 + ranking * 0.25 + lenguaje * 0.20 + matematicas * 0.2 + cienciasociales * 0.20;
            Postulante[i].NotaCivilObraCivi = nem * 0.20 + ranking * 0.2 + lenguaje * 0.15 + matematicas * 0.35 + cienciasociales * 0.1;
            Postulante[i].NotaConstru = nem * 0.20 + ranking * 0.2 + lenguaje * 0.15 + matematicas * 0.35 + cienciasociales * 0.1;
            Postulante[i].NotaPrevMedio = nem * 0.15 + ranking * 0.35 + lenguaje * 0.2 + matematicas * 0.2 + cienciasociales * 0.1;
            Postulante[i].NotaBiotec = nem * 0.15 + ranking * 0.25 + lenguaje * 0.2 + matematicas * 0.30 + cienciasociales * 0.1;
            Postulante[i].NotaIndusAlimen = nem * 0.15 + ranking * 0.25 + lenguaje * 0.2 + matematicas * 0.30 + cienciasociales * 0.1;
            Postulante[i].NotaQuimica = nem * 0.10 + ranking * 0.25 + lenguaje * 0.15 + matematicas * 0.30 + cienciasociales * 0.20;
            Postulante[i].NotaQuimicaIndustrial = nem * 0.10 + ranking * 0.25 + lenguaje * 0.15 + matematicas * 0.30 + cienciasociales * 0.2;
            Postulante[i].NotaComuVisual = nem * 0.10 + ranking * 0.40 + lenguaje * 0.3 + matematicas * 0.10 + cienciasociales * 0.1;
            Postulante[i].NotaDiseno = nem * 0.15 + ranking * 0.40 + lenguaje * 0.3 + matematicas * 0.10 + cienciasociales * 0.1;
            Postulante[i].NotaTrabSocial = nem * 0.20 + ranking * 0.30 + lenguaje * 0.2 + matematicas * 0.10 + cienciasociales * 0.2;
            Postulante[i].NotaBachiller = nem * 0.10 + ranking * 0.25 + lenguaje * 0.2 + matematicas * 0.35 + cienciasociales * 0.1;
            Postulante[i].NotaDibProyec = nem * 0.10 + ranking * 0.25 + lenguaje * 0.2 + matematicas * 0.35 + cienciasociales * 0.1;
            Postulante[i].NotaCivilCompu = nem * 0.10 + ranking * 0.25 + lenguaje * 0.2 + matematicas * 0.35 + cienciasociales * 0.1;
            Postulante[i].NotaCivilIndus = nem * 0.10 + ranking * 0.25 + lenguaje * 0.2 + matematicas * 0.35 + cienciasociales * 0.1;
            Postulante[i].NotaCivilCienciaDatos = nem * 0.10 + ranking * 0.25 + lenguaje * 0.2 + matematicas * 0.35 + cienciasociales * 0.1;
            Postulante[i].NotaCivilElectronico = nem * 0.10 + ranking * 0.25 + lenguaje * 0.2 + matematicas * 0.35 + cienciasociales * 0.1;
            Postulante[i].NotaCivilMecanica = nem * 0.10 + ranking * 0.25 + lenguaje * 0.2 + matematicas * 0.35 + cienciasociales * 0.1;
            Postulante[i].NotaGeomensura = nem * 0.10 + ranking * 0.25 + lenguaje * 0.2 + matematicas * 0.35 + cienciasociales * 0.1;
            Postulante[i].NotaInformatica = nem * 0.10 + ranking * 0.25 + lenguaje * 0.2 + matematicas * 0.35 + cienciasociales * 0.1;
            Postulante[i].NotaIndustrial = nem * 0.10 + ranking * 0.25 + lenguaje * 0.2 + matematicas * 0.35 + cienciasociales * 0.1;
        }

        Postulante[i].rut = rut;        //Se guardan las variables en sus respectivos atributos en la estructura Postulantes
        Postulante[i].nem = nem;
        Postulante[i].ranking = ranking;
        Postulante[i].lenguaje = lenguaje;
        Postulante[i].matematica = matematicas;
        Postulante[i].cienciassociales = cienciasociales;
        Postulante[i].ciencias = ciencias;
        i++;
    }

    cout << "Postulantes Ingresados exitosamente" << endl<<endl;
    lectura.close();
}

void OrdenamientoDePostulantes(int &i)
{

    int pos, l = 0;
    for (int j = 0; j < i - 1; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 11] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaBiotec > PostulanteOrdenado[l + 11].NotaBiotec))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 11];
    }

    cout << endl;
    cout << "Notas ordenadas. Creando archivos con postulantes..." << endl;

    ofstream archivo;
    archivo.open("21073.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont = 0;
    int promedioLyM = 0;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;

        if (cont < 60 && promedioLyM >= 450 && Postulante[o].NotaBiotec >= 540.9)
        {
            archivo << Postulante[o].rut;
            archivo << ";" << Postulante[o].NotaBiotec << "\n";
            Inscritos[cont] = Postulante[o];
            cont++;
        }
        if (cont == 60)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 1; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 22] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaCivilCienciaDatos > PostulanteOrdenado[l + 22].NotaCivilCienciaDatos))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 22];
    }

    archivo.open("21049.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont2 = 0;
    int cont3 = cont;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont)
        {
            if (cont3 < 120 && promedioLyM >= 450 && Postulante[o].NotaCivilCienciaDatos >= 539.35)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaCivilCienciaDatos << "\n";
                Inscritos[cont3] = Postulante[o];
                cont3++;
            }
        }
        if (cont3 == 120)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 20] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaCivilCompu > PostulanteOrdenado[l + 20].NotaCivilCompu))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 20];
    }

    archivo.open("21041.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont4 = cont3;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont3; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont3)
        {
            if (cont4 < 250 && promedioLyM >= 450 && Postulante[o].NotaCivilCompu >= 539.35)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaCivilCompu << "\n";
                Inscritos[cont4] = Postulante[o];
                cont4++;
            }
        }
        if (cont4 == 250)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 7] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaArqui > PostulanteOrdenado[l + 7].NotaArqui))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 7];
    }

    archivo.open("21047.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont5 = cont4;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont4; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont4)
        {
            if (cont5 < 350 && promedioLyM >= 450 && Postulante[o].NotaArqui >= 527.4)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaArqui << "\n";
                Inscritos[cont5] = Postulante[o];
                cont5++;
            }
        }
        if (cont5 == 350)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaAdmiPublic > PostulanteOrdenado[l].NotaAdmiPublic))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l];
    }

    archivo.open("21089.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont6 = cont5;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont5; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont5)
        {
            if (cont6 < 385 && promedioLyM >= 450 && Postulante[o].NotaAdmiPublic >= 513)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaAdmiPublic << "\n";
                Inscritos[cont6] = Postulante[o];
                cont6++;
            }
        }
        if (cont6 == 385)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 17] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaTrabSocial > PostulanteOrdenado[l + 17].NotaTrabSocial))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 17];
    }

    archivo.open("21043.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont7 = cont6;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont6; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont6)
        {
            if (cont7 < 480 && promedioLyM >= 450 && Postulante[o].NotaTrabSocial >= 510.5)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaTrabSocial << "\n";
                Inscritos[cont7] = Postulante[o];
                cont7++;
            }
        }
        if (cont7 == 480)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 26] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaInformatica > PostulanteOrdenado[l + 26].NotaInformatica))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 26];
    }

    archivo.open("21030.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont8 = cont7;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont7; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont7)
        {
            if (cont8 < 585 && promedioLyM >= 450 && Postulante[o].NotaInformatica >= 507.75)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaInformatica << "\n";
                Inscritos[cont8] = Postulante[o];
                cont8++;
            }
        }
        if (cont8 == 585)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 24] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaCivilMecanica > PostulanteOrdenado[l + 24].NotaCivilMecanica))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 24];
    }

    archivo.open("21096.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont9 = cont8;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont8; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont8)
        {
            if (cont9 < 675 && promedioLyM >= 450 && Postulante[o].NotaCivilMecanica >= 506.8)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaCivilMecanica << "\n";
                Inscritos[cont9] = Postulante[o];
                cont9++;
            }
        }
        if (cont9 == 675)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 18] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaBachiller > PostulanteOrdenado[l + 18].NotaBachiller))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 18];
    }

    archivo.open("21046.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont10 = cont9;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont9; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont9)
        {
            if (cont10 < 700 && promedioLyM >= 450 && Postulante[o].NotaBachiller >= 504.25)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaBachiller << "\n";
                Inscritos[cont10] = Postulante[o];
                cont10++;
            }
        }
        if (cont10 == 700)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 21] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaCivilIndus > PostulanteOrdenado[l + 21].NotaCivilIndus))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 21];
    }

    archivo.open("21076.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont11 = cont10;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont10; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont10)
        {
            if (cont11 < 900 && promedioLyM >= 450 && Postulante[o].NotaCivilIndus >= 500.85)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaCivilIndus << "\n";
                Inscritos[cont11] = Postulante[o];
                cont11++;
            }
        }
        if (cont11 == 900)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 23] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaCivilElectronico > PostulanteOrdenado[l + 23].NotaCivilElectronico))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 23];
    }

    archivo.open("21075.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont12 = cont11;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont11; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont11)
        {
            if (cont12 < 980 && promedioLyM >= 450 && Postulante[o].NotaCivilElectronico >= 500.65)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaCivilElectronico << "\n";
                Inscritos[cont12] = Postulante[o];
                cont12++;
            }
        }
        if (cont12 == 980)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 3] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaIngComer > PostulanteOrdenado[l + 3].NotaIngComer))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 3];
    }

    archivo.open("21048.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont13 = cont12;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont12; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont12)
        {
            if (cont13 < 1105 && promedioLyM >= 450 && Postulante[o].NotaIngComer >= 496.9)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaIngComer << "\n";
                Inscritos[cont13] = Postulante[o];
                cont13++;
            }
        }
        if (cont13 == 1105)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 19] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaDibProyec > PostulanteOrdenado[l + 19].NotaDibProyec))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 19];
    }

    archivo.open("21071.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont14 = cont13;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont13; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont13)
        {
            if (cont14 < 1130 && promedioLyM >= 450 && Postulante[o].NotaDibProyec >= 496.45)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaDibProyec << "\n";
                Inscritos[cont14] = Postulante[o];
                cont14++;
            }
        }
        if (cont14 == 1130)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 25] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaGeomensura > PostulanteOrdenado[l + 25].NotaGeomensura))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 25];
    }

    archivo.open("21031.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont15 = cont14;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont14; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont14)
        {
            if (cont15 < 1190 && promedioLyM >= 450 && Postulante[o].NotaGeomensura >= 487.85)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaGeomensura << "\n";
                Inscritos[cont15] = Postulante[o];
                cont15++;
            }
        }
        if (cont15 == 1190)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 9] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaConstru > PostulanteOrdenado[l + 9].NotaConstru))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 9];
    }

    archivo.open("21032.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont16 = cont15;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont15; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont15)
        {
            if (cont16 < 1290 && promedioLyM >= 450 && Postulante[o].NotaConstru >= 476.95)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaConstru << "\n";
                Inscritos[cont16] = Postulante[o];
                cont16++;
            }
        }
        if (cont16 == 1290)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 27] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaIndustrial > PostulanteOrdenado[l + 27].NotaIndustrial))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 27];
    }

    archivo.open("21045.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont17 = cont16;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont16; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont16)
        {
            if (cont17 < 1350 && promedioLyM >= 450 && Postulante[o].NotaIndustrial >= 476.25)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaIndustrial << "\n";
                Inscritos[cont17] = Postulante[o];
                cont17++;
            }
        }
        if (cont17 == 1350)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 8] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaCivilObraCivi > PostulanteOrdenado[l + 8].NotaCivilObraCivi))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 8];
    }

    archivo.open("21074.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont18 = cont17;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont17; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont17)
        {
            if (cont18 < 1450 && promedioLyM >= 450 && Postulante[o].NotaCivilObraCivi >= 476.1)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaCivilObraCivi << "\n";
                Inscritos[cont18] = Postulante[o];
                cont18++;
            }
        }
        if (cont18 == 1450)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 14] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaQuimicaIndustrial > PostulanteOrdenado[l + 14].NotaQuimicaIndustrial))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 14];
    }

    archivo.open("21083.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont19 = cont18;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont18; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont18)
        {
            if (cont19 < 1490 && promedioLyM >= 450 && Postulante[o].NotaQuimicaIndustrial >= 472)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaQuimicaIndustrial << "\n";
                Inscritos[cont19] = Postulante[o];
                cont19++;
            }
        }
        if (cont19 == 1490)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 12] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaIndusAlimen > PostulanteOrdenado[l + 12].NotaIndusAlimen))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 12];
    }

    archivo.open("21039.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont20 = cont19;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont19; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont19)
        {
            if (cont20 < 1520 && promedioLyM >= 450 && Postulante[o].NotaIndusAlimen >= 464.9)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaIndusAlimen << "\n";
                Inscritos[cont20] = Postulante[o];
                cont20++;
            }
        }
        if (cont20 == 1520)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 10] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaPrevMedio > PostulanteOrdenado[l + 10].NotaPrevMedio))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 10];
    }

    archivo.open("21087.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont21 = cont20;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont20; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont20)
        {
            if (cont21 < 1550 && promedioLyM >= 450 && Postulante[o].NotaPrevMedio >= 462.85)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaPrevMedio << "\n";
                Inscritos[cont21] = Postulante[o];
                cont21++;
            }
        }
        if (cont21 == 1550)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 4] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaAdmiAgro > PostulanteOrdenado[l + 4].NotaAdmiAgro))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 4];
    }

    archivo.open("21015.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont22 = cont21;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont21; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont21)
        {
            if (cont22 < 1580 && promedioLyM >= 450 && Postulante[o].NotaAdmiAgro >= 461.8)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaAdmiAgro << "\n";
                Inscritos[cont22] = Postulante[o];
                cont22++;
            }
        }
        if (cont22 == 1580)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 5] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaComeInter > PostulanteOrdenado[l + 5].NotaComeInter))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 5];
    }

    archivo.open("21081.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont23 = cont22;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont22; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont22)
        {
            if (cont23 < 1670 && promedioLyM >= 450 && Postulante[o].NotaComeInter >= 458.8)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaComeInter << "\n";
                Inscritos[cont23] = Postulante[o];
                cont23++;
            }
        }
        if (cont23 == 1670)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 1] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaBiblioDoc > PostulanteOrdenado[l + 1].NotaBiblioDoc))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 1];
    }

    archivo.open("21002.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont24 = cont23;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont23; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont23)
        {
            if (cont24 < 1705 && promedioLyM >= 450 && Postulante[o].NotaBiblioDoc >= 453.6)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaBiblioDoc << "\n";
                Inscritos[cont24] = Postulante[o];
                cont24++;
            }
        }
        if (cont24 == 1705)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 2] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaContador > PostulanteOrdenado[l + 2].NotaContador))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 2];
    }

    archivo.open("21012.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont25 = cont24;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont24; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont24)
        {
            if (cont25 < 1785 && promedioLyM >= 450 && Postulante[o].NotaContador >= 452.2)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaContador << "\n";
                Inscritos[cont25] = Postulante[o];
                cont25++;
            }
        }
        if (cont25 == 1785)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 13] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaQuimica > PostulanteOrdenado[l + 13].NotaQuimica))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 13];
    }

    archivo.open("21080.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont26 = cont25;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont25; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont25)
        {
            if (cont26 < 1865 && promedioLyM >= 450 && Postulante[o].NotaQuimica >= 451.7)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaQuimica << "\n";
                Inscritos[cont26] = Postulante[o];
                cont26++;
            }
        }
        if (cont26 == 1865)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 6] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaGestTuris > PostulanteOrdenado[l + 6].NotaGestTuris))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 6];
    }

    archivo.open("21082.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont27 = cont26;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont26; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont26)
        {
            if (cont27 < 1890 && promedioLyM >= 450 && Postulante[o].NotaGestTuris >= 448.1)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaGestTuris << "\n";
                Inscritos[cont27] = Postulante[o];
                cont27++;
            }
        }
        if (cont27 == 1890)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 15] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaComuVisual > PostulanteOrdenado[l + 15].NotaComuVisual))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 15];
    }

    archivo.open("21024.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont28 = cont27;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont27; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont27)
        {
            if (cont28 < 1990 && promedioLyM >= 450 && Postulante[o].NotaComuVisual >= 440.2)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaComuVisual << "\n";
                Inscritos[cont28] = Postulante[o];
                cont28++;
            }
        }
        if (cont28 == 1990)
        {
            o = -1;
        }
    }

    archivo.close();

    for (int j = 0; j < i - 2; j++)
    {
        pos = j;
        PostulanteOrdenado[l + 16] = Postulante[j];

        while ((pos > 0) && (Postulante[pos - 1].NotaDiseno > PostulanteOrdenado[l + 16].NotaDiseno))
        {
            Postulante[pos] = Postulante[pos - 1];
            pos--;
        }
        Postulante[pos] = PostulanteOrdenado[l + 16];
    }

    archivo.open("21023.txt", ios::out); //abriendo el archivo, nombrearchivo.c_str() para elegir el nombre del archivo
    if (archivo.fail())
    {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    int cont29 = cont28;

    for (int o = (i - 2); o >= 0; o--)
    {
        promedioLyM = (Postulante[o].matematica + Postulante[o].lenguaje) / 2;
        cont2 = 0;
        for (int p = 0; p < cont28; p++)
        {
            if (Postulante[o].rut != Inscritos[p].rut)
            {
                cont2++;
            }
        }
        if (cont2 == cont28)
        {
            if (cont29 < 2055 && promedioLyM >= 450 && Postulante[o].NotaDiseno >= 439.9)
            {
                archivo << Postulante[o].rut;
                archivo << ";" << Postulante[o].NotaDiseno << "\n";
                Inscritos[cont29] = Postulante[o];
                cont29++;
            }
        }
        if (cont29 == 2055)
        {
            o = -1;
        }
    }

    archivo.close();
    cout << endl;
    cout << "Estudiantes agregados exitosamente!!" << endl;
}

void BuscarRut(std::string rut)
{

    string carreras[28];
    string CARRERA;
    string rut2=rut;
    int posicion = 0, PosicionPostulante = -1, cont = 0;

    carreras[0] = "21089.txt"; //Arreglo con codigo de las carreras para abrir los txt
    carreras[1] = "21002.txt";
    carreras[2] = "21012.txt";
    carreras[3] = "21048.txt";
    carreras[4] = "21015.txt";
    carreras[5] = "21081.txt";
    carreras[6] = "21082.txt";
    carreras[7] = "21047.txt";
    carreras[8] = "21074.txt";
    carreras[9] = "21032.txt";
    carreras[10] = "21087.txt";
    carreras[11] = "21073.txt";
    carreras[12] = "21039.txt";
    carreras[13] = "21080.txt";
    carreras[14] = "21083.txt";
    carreras[15] = "21024.txt";
    carreras[16] = "21023.txt";
    carreras[17] = "21043.txt";
    carreras[18] = "21046.txt";
    carreras[19] = "21071.txt";
    carreras[20] = "21041.txt";
    carreras[21] = "21076.txt";
    carreras[22] = "21049.txt";
    carreras[23] = "21075.txt";
    carreras[24] = "21096.txt";
    carreras[25] = "21031.txt";
    carreras[26] = "21030.txt";
    carreras[27] = "21045.txt";

    ifstream archivo;
    string texto;

    for (int o = 0; o < 28; o++)
    {                                   //Para recorrer las 28 carreras con tal de comparar el rut

        archivo.open(carreras[o].c_str(), ios::in);

        if (archivo.fail())
        {
            cout << "No se pudo abrir el archivo o no ha generado los archivos" << endl; //En caso de que no exista el archivo, se finaliza
            exit(1);
        }

        posicion = 0;                           //Demarcar la posicion de los ruts

        while (!archivo.eof())
        {
            getline(archivo, texto);           //Se guardan las lineas de datos el archivo en un string

            for (int p = 0; p < 8; p++)
            {                                   //Se comparan los 8 numero internos del rut con la linea del txt que representa el rut del alumno
                if (texto[p] == rut2[p])
                {
                    cont++;
                }
            }
            if (cont == 8)
            {                                   //Si los 8 numero son iguales, se procede a guardar la posicion y carrera correpondiente
                PosicionPostulante = posicion;
                CARRERA = carreras[o];
            }
            posicion++;
        }

        archivo.close();                    //Se cierra el archivo de la carrera
    }

    if (PosicionPostulante != -1)
    {                                   //Si existe el rut dentro de una carrera, la variable PosicionPostulante será distinta de 0
        cout << endl;
        cout << "La carrera es: "<< CARRERA<<endl;
        cout << "Posicion :" << PosicionPostulante + 1 << endl;
    }
    else{
        cout<<"Postulante no registrado."<<endl;
    }
}

void participantes()
{
    std::cout << "=====Integrantes=====" << std::endl;
    std::cout << "Andres Munoz" << std::endl;
    std::cout << "Esteban Rojas" << std::endl;
    std::cout << "Ignacio Valdebenito" << std::endl;
}