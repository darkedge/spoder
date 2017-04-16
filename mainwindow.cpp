#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qfontdialog.h>
#include <QMouseEvent>
#include "autovectorizedialog.h"
#include "mjhighlighter.h"

MJHighlighter *highlighter;
QTextEdit *editor;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //qApp->installEventFilter(this);

    //setupFileMenu();
    //setupHelpMenu();
    QFont font;
    font.setFamily("Courier");
    font.setFixedPitch(true);
    font.setPointSize(10);

    //editor = new QTextEdit;
    editor = ui->textEdit;
    //editor->setFont(font);

    highlighter = new MJHighlighter(editor->document());

    //QFile file("mainwindow.h");
    //if (file.open(QFile::ReadOnly | QFile::Text))
        //editor->setPlainText(file.readAll());

    //setCentralWidget(editor);
    //setWindowTitle(tr("Syntax Highlighter"));
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

bool MainWindow::eventFilter(QObject* obj, QEvent* event) {
    if (event->type() == QEvent::MouseMove) {
        QMouseEvent* mouseEvent = static_cast<QMouseEvent*>(event);
        mouseEvent->pos();
        qDebug("hoi");
    }

    return true;
}

void MainWindow::on_pushButton_2_clicked()
{
    AutoVectorizeDialog dialog(this);
    dialog.exec();
}

void MainWindow::on_textEdit_textChanged()
{
    // Read as plain text
    QString inputString = ui->textEdit->toPlainText();
    inputString.replace(QRegExp("(\\b\\d+.\\d+)"), "<b>\\1</b>");
    // html formatting
    //inputString.replace(QRegExp("\\n"), "<br>");

    // TODO: Prevent feedback loop
    //ui->textEdit->document()->setHtml(inputString);
    ui->textEdit_2->document()->setPlainText(inputString);
}
