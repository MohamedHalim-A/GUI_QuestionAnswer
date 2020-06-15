#include <QApplication>
#include <QtWidgets>
#include "modelgeneral.h"
#include "fenetreprincipal.h"

int main (int argc, char *argv[])
{
    QApplication app(argc, argv);

    fenetrePrincipal fenetre;

    fenetre.show();

    return app.exec();
}
