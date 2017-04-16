#ifndef MJHIGHLIGHTER_H
#define MJHIGHLIGHTER_H

#include <QSyntaxHighlighter>

class MJHighlighter : public QSyntaxHighlighter
{
    Q_OBJECT

public:
    MJHighlighter(QTextDocument *parent = 0);

protected:
    void highlightBlock(const QString &text);

private:
    struct HighlightingRule
    {
        QRegExp pattern;
        QTextCharFormat format;
    };
    QVector<HighlightingRule> highlightingRules;

    QTextCharFormat keywordFormat;

#if 0
    QRegExp commentStartExpression;
    QRegExp commentEndExpression;
    QTextCharFormat classFormat;
    QTextCharFormat singleLineCommentFormat;
    QTextCharFormat multiLineCommentFormat;
    QTextCharFormat quotationFormat;
    QTextCharFormat functionFormat;
#endif
};

#endif // MJHIGHLIGHTER_H
