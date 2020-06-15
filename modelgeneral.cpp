#include "modelgeneral.h"

modelGeneral::modelGeneral() : QWidget()
{
    QVBoxLayout *layoutPr = new QVBoxLayout;
    QHBoxLayout *layoutBouton = new QHBoxLayout;
    QLabel *nom = new QLabel("nom");
    QLabel *photo = new QLabel;
    QPixmap *pixel = new QPixmap;
    QPushButton *bouton1 = new QPushButton(" +1 ");
    QPushButton *bouton2 = new QPushButton(" +2 ");
    QPushButton *bouton3 = new QPushButton(" +3 ");
    QPushButton *boutonAffiche = new QPushButton("point");

    nom->setAlignment(Qt::AlignHCenter);
    pixel->load("acem.jpg");
    *pixel = pixel->scaled(250, 300);
    photo->setPixmap(*pixel);

    layoutBouton->addWidget(bouton1);
    layoutBouton->addWidget(bouton2);
    layoutBouton->addWidget(bouton3);

    layoutPr->addWidget(nom);
    layoutPr->addWidget(photo);
    layoutPr->addWidget(boutonAffiche);
    layoutPr->addLayout(layoutBouton);
    setFixedSize(280, 400);


    setLayout(layoutPr);
}
