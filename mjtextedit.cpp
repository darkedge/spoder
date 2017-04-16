#include "mjtextedit.h"
#include "ui_mjtextedit.h"

MJTextEdit::MJTextEdit(QWidget *parent) :
    QTextEdit(parent),
    ui(new Ui::MJTextEdit)
{
    ui->setupUi(this);
}

MJTextEdit::~MJTextEdit()
{
    delete ui;
}
