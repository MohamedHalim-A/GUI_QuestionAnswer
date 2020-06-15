#include "fenetreprincipal.h"

fenetrePrincipal::fenetrePrincipal(QWidget *parent) : QMainWindow(parent)
{
    QWidget *central = new QWidget;
    QHBoxLayout *layout = new QHBoxLayout;
    modelGeneral *model1 = new modelGeneral;
    modelGeneral *model2 = new modelGeneral;
    modelGeneral *model3 = new modelGeneral;
    layout->addWidget(model1);
    layout->addWidget(model2);
    layout->addWidget(model3);

    central->setLayout(layout);
    setCentralWidget(central);

    //menu
    QMenu *Fichier = menuBar()->addMenu("&Fichier");
    QMenu *Edition = menuBar()->addMenu("&Edition");
    QMenu *Outils = menuBar()->addMenu("&Outils");
    QMenu *Reference = menuBar()->addMenu("&Reference");
    QMenu *Aide = menuBar()->addMenu("&Aide");


}
