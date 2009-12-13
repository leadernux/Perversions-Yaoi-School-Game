#ifndef PMAINWINDOW_H
#define PMAINWINDOW_H

#include <QtGui/QMainWindow>

class PMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    PMainWindow(QWidget *parent = 0);
    ~PMainWindow();
};

#endif // PMAINWINDOW_H
