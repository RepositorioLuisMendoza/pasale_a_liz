#ifndef JUEGO_H
#define JUEGO_H

#include <QGraphicsScene>
#include <QTimer>
#include <QList>
#include <QKeyEvent>
#include <QDebug>
#include "comida.h"
#include "cuchillo.h"
#include "personaje.h"
#include "plataforma.h"
#include <iostream>

using namespace std;


class juego : public QGraphicsScene
{
    Q_OBJECT
public:
    juego();
    void paredes_ ();
    void cuchillos_ ();
    void comida_();

    personaje *cuerpo;



private:
    float dt;

    //cuchillo *cuchi;
    void AplicarGravedad();


    QTimer* timer,*timer_1_colici;


    QList <plataforma *> *paredes;
    void crear_pared(int x, int y, int ancho, int alto);


    QList<comida *> eliminarMonedas(QList<comida *> monedas,int pos);


    QList<comida *> *monedas;
    void crear_monedas (int x, int y, int ancho, int alto);

    void crear_cuchillos(int Pos_x, int Pos_y);
    QList <cuchillo *> *cuchillos;
protected:
    void keyPressEvent(QKeyEvent *evento);
private slots:
    void actualizar();
    void colision_cuchillos();


};

#endif // JUEGO_H
