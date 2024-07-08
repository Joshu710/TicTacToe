#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_IsX = true;
    m_tiles = ui->tileButtonGroup;
    connect(m_tiles, SIGNAL(buttonClicked(QAbstractButton*)), this, SLOT(handleTileClicked(QAbstractButton*)));
    QList <QAbstractButton *> spaces = m_tiles->buttons();
    for (int i = 0;i < spaces.size();i++){
        int place = spaces.at(i)->objectName().back().unicode() - 48;
        m_tiles->setId(spaces.at(i),place);
    }
    resetGrid();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_radioButton_2_toggled(bool checked)
{
    m_IsX = checked;
}


void MainWindow::handleTileClicked(QAbstractButton* button)
{


    //printf("%s button was clicked\n",qPrintable(button->objectName()));
    int place = button->objectName().back().unicode() - 48;
    int row = place / 3;
    int col = place % 3;
    if(!m_started || m_grid[row][col] != ' '){
        return;
    }
    // 1 = X , 2 = O
    if(m_IsX)
    {
        button->setText("X");
        m_grid[row][col]='X';
    }
    else
    {
        button->setText("O");
        m_grid[row][col]='O';
    }
    fflush(stdout);
    m_open+=1;
    if(checkWin(row,col)){
        m_started = false;
        ui->radioButton->setEnabled(true);
        ui->radioButton_2->setEnabled(true);
        return;
    }
    cpuTurn();
    // displayGrid();



}

void MainWindow::displayGrid()
{
    printf("_______________\n");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf(" %c ",m_grid[i][j]);
        }
        printf("\n");
    }
    printf("_______________\n");
    fflush(stdout);
}


void MainWindow::on_startButton_clicked()
{
    //reset here
    resetGrid();

    // Play Game
    ui->radioButton->setEnabled(false);
    ui->radioButton_2->setEnabled(false);
    m_started = true;

    int turn = rand() % 2;
    if(turn){
        cpuTurn();
    }
}

void MainWindow::cpuTurn()
{
    int row;
    int col;
    int place;
    char piece = (m_IsX ? 'O': 'X');
    do{
        place = rand() % 9;
        row = place / 3;
        col = place % 3;
    }while(m_grid[row][col] != ' ');

    m_grid[row][col] = piece;
    m_tiles->button(place)->setText(QString(piece));
    m_open+=1;
    if(checkWin(row,col)){
        m_started = false;
        ui->radioButton->setEnabled(true);
        ui->radioButton_2->setEnabled(true);
    }
}


void MainWindow::resetGrid()
{

    QList <QAbstractButton *> spaces = m_tiles->buttons();
    for (int i = 0;i < spaces.size();i++){
        spaces.at(i)->setText("");
    }
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            m_grid[i][j] = ' ';
        }
    }
    m_open = 0;
}

bool MainWindow::checkWin(int row,int col)
{
    char piece = m_grid[row][col];

    for(int i = 0;i<3;i++){
        if (m_grid[row][i] != piece){
            break;
        }
        if(i == 2){
            return true;
        }
    }

    for(int i = 0;i<3;i++){
        if (m_grid[i][col] != piece){
            break;
        }
        if(i == 2){
            return true;
        }
    }

    if(row == col){
        for(int i = 0;i<3;i++){
            if (m_grid[i][i] != piece){
                break;
            }
            if(i == 2){
                return true;
            }
        }
    }

    if(row + col == 2){
        for(int i = 0;i<3;i++){
            if (m_grid[i][2-i] != piece){
                break;
            }
            if(i == 2){
                return true;
            }
        }
    }
    if(m_open == 9){
        return true;
    }

    return false;

}

