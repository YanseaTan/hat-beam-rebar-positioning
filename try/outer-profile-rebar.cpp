#include <iostream>
#include "main.h"

using namespace std;

HatBeamData::HatBeamData()
{

}

HatBeamData::~HatBeamData()
{

}

void HatBeamData::GetHatBeamHeight()
{
    cout << "height: " << endl;
    double tempHeight = 0;
    cin >> tempHeight;
    m_hatBeamHeight = tempHeight;
}

void HatBeamData::GetHatBeamWight()
{
    cout << "width: " << endl;
    double tempWight = 0;
    cin >> tempWight;
    m_hatBeamWidth = tempWight;
}

void HatBeamData::PrintCoordinate()
{
    m_aX = protectiveLayerThickness + 3 * rebarRadius;
    m_aY = protectiveLayerThickness + rebarRadius + topRebarLength;
    m_bX = m_aX;
    m_bY = m_aY - topRebarLength;
    m_cX = m_hatBeamWidth - m_aX;
    m_cY = m_bY;
    m_dX = m_cX;
    m_dY = m_aY;
    m_eX = m_aX - 2 * rebarRadius;
    m_eY = m_bY;
    m_gX = m_eX;
    m_gY = m_hatBeamHeight - m_bY;
    m_hX = m_hatBeamWidth - m_eX;
    m_hY = m_gY;
    m_jX = m_hX;
    m_jY = m_eY;

    cout << "A: (" << m_aX << ", " << m_aY << ")" << endl;
    cout << "B: (" << m_bX << ", " << m_bY << ")" << endl;
    cout << "C: (" << m_cX << ", " << m_cY << ")" << endl;
    cout << "D: (" << m_dX << ", " << m_dY << ")" << endl;
    cout << "E: (" << m_eX << ", " << m_eY << ")" << endl;
    cout << "G: (" << m_gX << ", " << m_gY << ")" << endl;
    cout << "H: (" << m_hX << ", " << m_hY << ")" << endl;
    cout << "J: (" << m_jX << ", " << m_jY << ")" << endl;
}

int main()
{
    HatBeamData test;

    test.GetHatBeamHeight();
    test.GetHatBeamWight();

    test.PrintCoordinate();

    // test.~HatBeamData();

    system("pause");
    return 0;
}