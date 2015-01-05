#include "Itooti.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    Itooti w;
    w.show();

    return a.exec();
}
