//
// Created by Ismaël on 31/05/2021.
//

#ifndef GIMPLIKEGUI_CUSTOMBUTTON_H
#define GIMPLIKEGUI_CUSTOMBUTTON_H

#include <QPushButton>

class CustomButton : public QPushButton {

public:
    explicit CustomButton(QString text, QWidget *parent = nullptr);

private:
    QString m_text;
};


#endif //GIMPLIKEGUI_CUSTOMBUTTON_H
