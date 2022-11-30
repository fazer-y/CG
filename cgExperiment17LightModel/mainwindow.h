#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QColorDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void paintEvent(QPaintEvent*);

private slots:
    void on_checkBox_lightEnable_stateChanged(int arg1);

    void on_checkBox_doubleFace_stateChanged(int arg1);

    void on_checkBox_infinete_stateChanged(int arg1);

    void on_checkBox_global_stateChanged(int arg1);

    void on_pushButton_diffuse_clicked();

    void on_pushButton_specular_clicked();

    void on_pushButton_ambient_clicked();

    void on_comboBox_material_activated(int index);

private:
    Ui::MainWindow *ui;
    QColor diffuseColor;
    QColor specularColor;
    QColor ambientColor;
};
#endif // MAINWINDOW_H
