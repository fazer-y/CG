#include "object3d.h"

object3d::object3d()
    :nProjectionType(0)
{
    int i, j;

    // 初始化房屋数据
    wcHouse[0][0] = 20.0; wcHouse[0][1] = 0.0; wcHouse[0][2] = 0.0;
    wcHouse[1][0] = 20.0; wcHouse[1][1] = 0.0; wcHouse[1][2] = 8.0;
    wcHouse[2][0] = 20.0; wcHouse[2][1] = 6.0; wcHouse[2][2] = 8.0;
    wcHouse[3][0] = 20.0; wcHouse[3][1] = 9.0; wcHouse[3][2] = 4.0;
    wcHouse[4][0] = 20.0; wcHouse[4][1] = 6.0; wcHouse[4][2] = 0.0;
    wcHouse[5][0] = 28.0; wcHouse[5][1] = 4.0; wcHouse[5][2] = 8.0;
    wcHouse[6][0] = 28.0; wcHouse[6][1] = 0.0; wcHouse[6][2] = 8.0;
    for(i = 7; i < 14; i++)
    {
        wcHouse[i][0] = wcHouse[i-7][0] + 20;
        wcHouse[i][1] = wcHouse[i-7][1];
        wcHouse[i][2] = wcHouse[i-7][2];
        wcHouse[i][3] = 1.0;
    }
    wcHouse[12][0] = wcHouse[5][0] + 4;
    wcHouse[13][0] = wcHouse[6][0] + 4;
    // 调整房屋大小
    int nScale = 5;  // 缩放比例
    for(i = 0; i < 14; i++)
    {
        wcHouse[i][0] = nScale * wcHouse[i][0];
        wcHouse[i][1] = nScale * wcHouse[i][1];
        wcHouse[i][2] = nScale * wcHouse[i][2];
    }

    // 初始化世界坐标系
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            lwcWC[i][j] = 0.0;
        }
    }
    lwcWC[0][0] = 300;
    lwcWC[1][1] = 100;
    lwcWC[2][2] = 100;

    // 初始化视图参考坐标系
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            lwcVRC[i][j] = 0.0;
        }
    }
    lwcVRC[0][0] = 30;
    lwcVRC[1][1] = 30;
    lwcVRC[2][2] = 30;
    lPRP[0] = 3000.0;
    lPRP[1] = 1000.0;
    lPRP[2] = 6000.0;

    // 初始化投影参数
    VRP[0] = 0;
    VRP[1] = 0;
    VRP[2] = 0;
    Theta = 0;
    Phi = 0;
    Delta = 0;
    PRP[0] = 250.0;
    PRP[1] = 100.0;
    PRP[2] = 250.0;
    CW[0] = 0.0;
    CW[1] = 0.0;
}

void object3d::setProjectionType(int n)
{
    nProjectionType = n;
}

void object3d::setVRP(double vrp0, double vrp1, double vrp2)
{
    VRP[0] = vrp0;
    VRP[1] = vrp1;
    VRP[2] = vrp2;
}

void object3d::setAngle(double th, double ph, double dt)
{
    Theta = th;
    Phi = ph;
    Delta = dt;
}

void object3d::setPRP(double prp0, double prp1, double prp2)
{
    PRP[0] = prp0;
    PRP[1] = prp1;
    PRP[2] = prp2;
}

void object3d::setCW(double cw0, double cw1)
{
    CW[0] = cw0;
    CW[1] = cw1;
}

// 显示布局图，供CLayoutView调用
void object3d::ShowLayout(QPainter* pt)
{

}

// 显示投影图，供CProjectionView调用
void object3d::ShowProjection(QPainter* pt)
{

}

// 三维变换
void object3d::Transform(double MS[][3], double MO[][3], int nRow, double MT[4][4])
{

}
// 投影变换
void object3d::Project(double MS[][3], int MO[][2], int nRow, double MT[4][4])
{

}
// 屏幕变换
void object3d::ToScreen(int MSp[][2], int nRow)
{

}
// 矩阵乘法
void object3d::MatricMultiply(double M1[4][4], double M2[4][4], double M3[4][4])
{

}
// 构造三维变换矩阵
void object3d::GenerateMatricTransform(double dx, double dy, double dz,
                             double theta, double phi, double delta,
                             double MT[4][4])
{

}
// 构造投影矩阵
void object3d::GenerateMatricProject(double PRP[3], double MP[4][4], int nType)
{

}
// 绘制房子
void object3d::DrawHouse(QPainter* pt)
{

}
