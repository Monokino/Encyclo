#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QWidget>

namespace Ui {
class secondWindow;
}

class secondWindow : public QWidget
{
    Q_OBJECT

public:
    explicit secondWindow(QWidget *parent = 0);
    ~secondWindow();

signals:
    void firstWindow();  // Сигнал для первого окна на открытие

private slots:
    void on_pushButton_7_clicked();

private:
    Ui::secondWindow *ui;
};

#endif // SECONDWINDOW_H
