#include "newqml.h"
#include "ui_newqml.h"
#include <QFile>
#include <QTextStream>

NewQML::NewQML(QWidget *parent)
    : QWidget(parent), ui(new Ui::NewQML)
{
    ui->setupUi(this);
    loadTextFile();
}

NewQML::~NewQML()
{
    delete ui;
}

void NewQML::loadTextFile() {
    QFile inputFile(":/input.txt");
    inputFile.open(QIODevice::ReadOnly);

    QTextStream in(&inputFile);
    QString line = in.readAll();
    inputFile.close();

    ui->textEdit->setPlainText(line);
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
}


void NewQML::on_findButton_clicked()
{
    QString searchString = ui->lineEdit->text();
    ui->textEdit->find(searchString, QTextDocument::FindWholeWords);
}

