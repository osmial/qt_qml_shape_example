#include <QObject>

#include "shape.h"

Shape::Shape(QQuickItem* parent) : QQuickPaintedItem{parent}
{
    qDebug() << "Shape::Shape";
    qDebug() << "width = " << width() << " height = " << height();
    setAcceptedMouseButtons(Qt::AllButtons);
    setAntialiasing(true);
//    setWidth(100);
//    setHeight(100);
    m_elipse.addEllipse(0, 0, width(), height());
}

void Shape::paint(QPainter* painter)
{
    qDebug() << "Shape::paint";
    qDebug() << "width = " << width() << " height = " << height();
    QBrush b{m_color};
    painter->setBrush(b);
    painter->drawPath(m_elipse);
}

void Shape::mousePressEvent(QMouseEvent *event)
{
    qDebug() << "PressEvent point: " << event->pos();
    qDebug() << "Shape [" << sth() <<"] mouse press event";
    event->ignore();
}

unsigned int Shape::sth() const
{
    return m_sth;
}

void Shape::setSth(const unsigned int sth)
{
    m_sth = sth;
}

QColor Shape::color() const
{
    return m_color;
}

void Shape::setColor(const QColor col)
{
    m_color = col;
}
