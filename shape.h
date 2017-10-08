#ifndef SHAPE_H
#define SHAPE_H

#include <QQuickPaintedItem>
#include <QPainter>
#include <QColor>

class Shape : public QQuickPaintedItem
{
    Q_OBJECT
    Q_PROPERTY(unsigned int sth READ sth WRITE setSth NOTIFY idChanged)
    Q_PROPERTY(QColor color READ color WRITE setColor NOTIFY colorChanged)
public:
    Shape(QQuickItem* parent = 0);

    void paint(QPainter* painter);
    void mousePressEvent(QMouseEvent *event);

    unsigned int sth() const;
    void setSth(const unsigned int sth);

    QColor color() const;
    void setColor(const QColor col);

signals:
    void idChanged();
    void colorChanged();

private:
    QPainterPath m_elipse;
    unsigned int m_sth;
    QColor m_color;
};

#endif // SHAPE_H
