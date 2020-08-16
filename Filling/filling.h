#ifndef FILLING_H
#define FILLING_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Filling; }
QT_END_NAMESPACE

class Filling : public QMainWindow
{
    Q_OBJECT

public:
    Filling(QWidget *parent = nullptr);
    ~Filling();

private slots:
    void on_FolderSelection_clicked();

private:
    Ui::Filling *ui;
};
#endif // FILLING_H
