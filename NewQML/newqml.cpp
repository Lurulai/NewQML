#include "newqml.h"
#include "ui_newqml.h"

NewQML::NewQML(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::NewQML)
{
    ui->setupUi(this);
}

NewQML::~NewQML()
{
    delete ui;
}

