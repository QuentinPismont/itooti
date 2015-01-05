#include "Itooti.h"

Itooti::Itooti(QWidget *parent) : QMainWindow(parent) {
    setWindowTitle("Itooti");
    setMinimumSize(480, 720);

    mainWidget = new QWidget;
    layout = new QVBoxLayout;
    mainWidget->setLayout(layout);
    menu = new QMenuBar;

    fileMenu = new QMenu("&File");
    menu->addMenu(fileMenu);
    openICSAction = fileMenu->addAction("Open ICS file.");
    openODSAction = fileMenu->addAction("Open ODS file.");

    editMenu = new QMenu("&Edit");
    menu->addMenu(editMenu);

    helpMenu = new QMenu("&Help");
    menu->addMenu(helpMenu);
    documentationAction = helpMenu->addAction("Open documentation.");
    aboutAction = helpMenu->addAction("About.");
    aboutQtAction = helpMenu->addAction("About Qt.");

    setMenuBar(menu);
    setCentralWidget(mainWidget);
}

Itooti::~Itooti() {
}
