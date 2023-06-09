#ifndef CUCHILLO_H
#define CUCHILLO_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QObject>
#include <QTimer>
#include <math.h>
#include <QPainter>

#include <QPixmap>
#include <QGraphicsPixmapItem>

#define Angulo (float) 1.22173
#define G (float) 9.81

class cuchillo :   public QObject, public QGraphicsRectItem
{
    Q_OBJECT
private:
    QTimer *timer;
    float posicionX;
    float posicionY;
    float X0;
    float Y0;
    float V;
    float V0;
    float Vx;//velocidad en x
    float Vy;//velocidad en y
    float t;
    float delta;
    int radio;
    int ancho;
    int alto ;

public:
    cuchillo(int posicionInicialX, int posicionInicialY, int ancho_, int alto_);
    void actulalizarMparabolico();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
    void calcularVelocidad();
    void aplicaraceleracion (QPointF Acel);

    float getPosicionX() const;
    float getPosicionY() const;
};

#endif // CUCHILLO_H
