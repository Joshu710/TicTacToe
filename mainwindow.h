#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cstdio>
#include <QAbstractButton>
#include <QButtonGroup>
#include <string>
#include <random>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_radioButton_2_toggled(bool checked);
    void handleTileClicked(QAbstractButton* button);


    void on_startButton_clicked();

private:
    Ui::MainWindow *ui;
    bool m_IsX;
    bool m_started = false;
    char m_grid[3][3] = {};
    QButtonGroup *m_tiles;
    int m_open = 0;



    void displayGrid();
    void cpuTurn();
    void resetGrid();
    bool checkWin(int row,int col);
};
#endif // MAINWINDOW_H
