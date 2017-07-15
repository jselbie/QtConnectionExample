#include "themodel.h"

TheModel::TheModel(QObject *parent) : QObject(parent)
{
    _power = 0;
}


int TheModel::power()
{
    return _power;
}

void TheModel::setPower(int value)
{
    _power = value;
    emit powerChanged();
}

