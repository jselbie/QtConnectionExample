#ifndef THEMODEL_H
#define THEMODEL_H

#include <QObject>

class TheModel : public QObject
{
    Q_OBJECT


private:
    int _power;

public:
    explicit TheModel(QObject *parent = nullptr);
    Q_PROPERTY(int power READ power WRITE setPower NOTIFY powerChanged)
    int power();
    void setPower(int value);


signals:
    void powerChanged();

public slots:
};

#endif // THEMODEL_H
