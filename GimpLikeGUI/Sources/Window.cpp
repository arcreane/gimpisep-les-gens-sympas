//
// Created by Ismaël on 31/05/2021.
//

#include "../Headers/Window.h"
#include "../Headers/MainWindow.h"

#include <opencv2/opencv.hpp>

#include <QPushButton>

Window::Window(QWidget *parent)
    : QWidget(parent)
{
    // Set size of the window
    //setFixedSize(300, 200);

    //m_vLayout = new QVBoxLayout(this);
    m_hLayout = new QHBoxLayout(this);

    m_button = new CustomButton("Create new file", this);
    connect(m_button, SIGNAL(clicked()), parent, SLOT(OnFileNew()));
    m_listButtons.append(m_button);
    m_hLayout->addWidget(m_button);

    m_button = new CustomButton("Import existing file", this);
    connect(m_button, SIGNAL(clicked()), parent, SLOT(OnFileOpen()));
    m_listButtons.append(m_button);
    m_hLayout->addWidget(m_button);

    m_button = new CustomButton("Cancel: Quit", this);
    connect(m_button, SIGNAL(clicked()), qApp, SLOT(quit()));
    m_listButtons.append(m_button);
    m_hLayout->addWidget(m_button);

    //setLayout(m_vLayout);
    setLayout(m_hLayout);
}

