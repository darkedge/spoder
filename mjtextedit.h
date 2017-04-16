#ifndef MJTEXTEDIT_H
#define MJTEXTEDIT_H

#include <QTextEdit>

namespace Ui {
class MJTextEdit;
}

class MJTextEdit : public QTextEdit
{
    Q_OBJECT

public:
    explicit MJTextEdit(QWidget *parent = 0);
    ~MJTextEdit();

private:
    Ui::MJTextEdit *ui;
};

#endif // MJTEXTEDIT_H
