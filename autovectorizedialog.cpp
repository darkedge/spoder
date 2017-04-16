#include "autovectorizedialog.h"
#include "ui_autovectorizedialog.h"

AutoVectorizeDialog::AutoVectorizeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AutoVectorizeDialog)
{
    ui->setupUi(this);
}

AutoVectorizeDialog::~AutoVectorizeDialog()
{
    delete ui;
}
