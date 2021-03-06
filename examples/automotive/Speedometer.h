/******************************************************************************
 * QSkinny - Copyright (C) 2016 Uwe Rathmann
 * This file may be used under the terms of the 3-clause BSD License
 *****************************************************************************/

#ifndef SPEEDOMETER_H
#define SPEEDOMETER_H

#include <QskBoundedValueInput.h>

class Speedometer : public QskBoundedValueInput
{
    Q_OBJECT

  public:
    QSK_SUBCONTROLS( Panel, Labels, NeedleHead, Needle )

    Speedometer( QQuickItem* parent = nullptr );

    QVector< QString > labels() const;
    void setLabels( const QVector< QString >& );

  private:
    QVector< QString > m_labels;
};

#endif
