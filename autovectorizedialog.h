#ifndef AUTOVECTORIZEDIALOG_H
#define AUTOVECTORIZEDIALOG_H

#include <QDialog>

namespace Ui {
class AutoVectorizeDialog;
}

class AutoVectorizeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AutoVectorizeDialog(QWidget *parent = 0);
    ~AutoVectorizeDialog();

private:
    Ui::AutoVectorizeDialog *ui;
};

#endif // AUTOVECTORIZEDIALOG_H
