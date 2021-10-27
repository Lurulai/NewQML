#ifndef NEWQML_H
#define NEWQML_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class NewQML; }
QT_END_NAMESPACE

class NewQML : public QWidget
{
    Q_OBJECT

public:
    NewQML(QWidget *parent = nullptr);
    ~NewQML();

private:
    Ui::NewQML *ui;
};
#endif // NEWQML_H
