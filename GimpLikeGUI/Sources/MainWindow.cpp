//
// Created by Ismaël on 31/05/2021.
//

#include "../Headers/MainWindow.h"
#include "../Headers/Window.h"

MainWindow::MainWindow(QMainWindow *parent)
    : QMainWindow(parent)
 {
    setWindowTitle("Gimp-like Application");
    //setMinimumSize(1000, 650);

    auto * menuBar = new QMenuBar(this);
    setMenuBar(menuBar);
    QMenu * menu = menuBar->addMenu("&File");

    // New
    QAction * action = new QAction("&New", this);
    connect(action, &QAction::triggered, this, &MainWindow::OnFileNew);
    menu->addAction(action);
    // Open
    action = new QAction("&Open", this);
    connect(action, &QAction::triggered, this, &MainWindow::OnFileOpen);
    menu->addAction(action);
    // Save
    action = new QAction("&Save", this);
    connect(action, &QAction::triggered, this, &MainWindow::OnFileSave);
    menu->addAction(action);

    QStatusBar * statusBar = new QStatusBar(this);
    setStatusBar(statusBar);

    m_window = new Window(this);
    setCentralWidget(m_window);

}

void MainWindow::OnFileNew() {
    statusBar()->showMessage("File -> New");

}

void MainWindow::OnFileOpen() {
    statusBar()->showMessage("File -> Open");
    QString file = QFileDialog::getOpenFileName(
            this, "Open file", "../../../", "Images (*.png *.gif *.jpg *.jpeg)");
    QMessageBox::information(this, "File", "You choose to open :\n" + file);
}

void MainWindow::OnFileSave() {
    statusBar()->showMessage("File -> Save");
    QString file = QFileDialog::getSaveFileName(
            this, "Save file", QString(), "Images (*.png *.gif *.jpg *.jpeg)");
    QMessageBox::information(this, "File", "You saved :\n" + file);
}

MainWindow::~MainWindow() {

}
