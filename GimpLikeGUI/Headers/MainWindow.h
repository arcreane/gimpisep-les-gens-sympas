//
// Created by Ismaël on 31/05/2021.
//

#ifndef GIMPLIKEGUI_MAINWINDOW_H
#define GIMPLIKEGUI_MAINWINDOW_H

#include <QtWidgets>

class MainWindow : public QMainWindow {

    Q_OBJECT
public:
    explicit MainWindow(QMainWindow * parent = nullptr);
    ~MainWindow();

public slots:
    void OnFileNew();
    void OnFileOpen();
    void OnFileSave();

private:
    QWidget *m_window;

};




#endif //GIMPLIKEGUI_MAINWINDOW_H
