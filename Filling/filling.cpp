#include "filling.h"
#include "ui_filling.h"

#include "QFileDialog"
#include "QDebug"
#include "QDir"
#include "QMessageBox"
#include "QDateTime"
#include "QDesktopServices"
#include "QFile"

Filling::Filling(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Filling)
{
    ui->setupUi(this);
}

Filling::~Filling()
{
    delete ui;
}


void Filling::on_FolderSelection_clicked()
{
    QString ImagesFolder = QFileDialog::getExistingDirectory(this, tr("Select Folder"),
                                                           "/home", QFileDialog::ShowDirsOnly
                                                           | QFileDialog::DontResolveSymlinks);
    ui -> Path -> setText(ImagesFolder);
}
