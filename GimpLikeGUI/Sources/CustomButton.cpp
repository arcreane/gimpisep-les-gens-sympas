//
// Created by Ismaël on 31/05/2021.
//

#include "../Headers/CustomButton.h"

CustomButton::CustomButton(QString text, QWidget *parent)
    : QPushButton(parent), m_text(text)
{
    setText(m_text);
}
