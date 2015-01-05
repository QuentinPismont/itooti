/*!
 * \file Itooti.h
 * \brief Main .h file, it has main window
 * \author Quentin.P
 * \version 0.1
 * \date 5/02/2015
 */

#ifndef ITOOTI_H
#define ITOOTI_H

#include <QMainWindow>
#include <QString>
#include <QVBoxLayout>
#include <QMenuBar>

class Itooti : public QMainWindow {
    Q_OBJECT

public:
    Itooti(QWidget *parent = 0);
    ~Itooti();

private:
    QWidget* mainWidget;
    QVBoxLayout* layout;
    QMenuBar* menu;

    QMenu* fileMenu;
    QAction* openICSAction;
    QAction* openODSAction;

    QMenu* editMenu;

    QMenu* helpMenu;
    QAction* documentationAction;
    QAction* aboutAction;
    QAction* aboutQtAction;

};

#endif // ITOOTI_H
