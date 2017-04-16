#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qfontdialog.h>
#include <QMouseEvent>
#include "autovectorizedialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //qApp->installEventFilter(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    bool ok;
    QFont old = ui->textEdit->font();
    QFont font = QFontDialog::getFont(&ok, old, this);
    if (ok) {
        ui->textEdit->setFont(font);
    }
}

void MainWindow::on_textEdit_textChanged()
{
    QRegExp regex("\\b\\d+.\\d+");



    ui->textEdit_2->document()->setPlainText(ui->textEdit->toPlainText());
}

bool MainWindow::eventFilter(QObject* obj, QEvent* event) {
    if (event->type() == QEvent::MouseMove) {
        QMouseEvent* mouseEvent = static_cast<QMouseEvent*>(event);
        mouseEvent->pos();
    }

    return true;
}

void MainWindow::on_pushButton_2_clicked()
{
    AutoVectorizeDialog dialog(this);
    dialog.exec();
}
