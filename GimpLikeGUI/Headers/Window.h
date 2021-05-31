//
// Created by Ismaël on 31/05/2021.
//

#ifndef GIMPLIKEGUI_WINDOW_H
#define GIMPLIKEGUI_WINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include "CustomButton.h"

class Window : public QWidget
{
public:
    explicit Window(QWidget *parent = nullptr);

private slots:

private:
    QList<CustomButton*> m_listButtons;
    QVBoxLayout* m_vLayout; //Vertical layout
    QHBoxLayout* m_hLayout; //Horizontal layout
    CustomButton *m_button;
};


#endif //GIMPLIKEGUI_WINDOW_H
