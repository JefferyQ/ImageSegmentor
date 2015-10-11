/**
* This file is part of ImageSegmentor.
*
* Copyright (C) 2012 Jianzhu Huai <huai dot 3 at osu dot edu> (The Ohio State University)
*
* ImageSegmentor is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* ImageSegmentor is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with ImageSegmentor. If not, see <http://www.gnu.org/licenses/>.
*/


// MyTexture.h: interface for the CMyTexture class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYTEXTURE_H__799334D4_CC09_4595_9BD6_2DA2E3705954__INCLUDED_)
#define AFX_MYTEXTURE_H__799334D4_CC09_4595_9BD6_2DA2E3705954__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif //_MSC_VER > 1000
#include "mymath.h"

#define NEIRADIUS 8

typedef struct tagDirectionHis{
	FLOAT sita;
	INT count;
}DirectionHis;

class CMyTexture  
{
public:
	CMyTexture();
	virtual ~CMyTexture();
	FLOAT CalcuEntropy(BYTE* inMatrix, INT width, INT height);//��������ͼ�����Ϣ�أ�
	BOOL GetDirection(BYTE* inMatrix, INT width, INT height, INT& direction, FLOAT& itensity);//���������ķ���, ���direction��ʾ�ĸ�����֮һ��itensity��ʾǿ�ȣ�
	BOOL GetDirectionReal(BYTE* inMatrix, INT width, INT height, FLOAT& direction, FLOAT& itensity, FLOAT& err);//���������ķ���, direction����itensityǿ��, err���
	FLOAT CalcuDisBetweenDHis(DirectionHis* his1, DirectionHis* his2, INT binCounts);//������������ֱ��ͼ���ŷ�Ͼ��룻
	BOOL CalcuDirectionHis(BYTE* inMatrix, INT width, INT height, DirectionHis** outHis, INT& binsInHis);//���������ķ���ֱ��ͼ��������ȷ�����򷵻�TRUE�����򷵻�FALSE����

private:
	MyMath myMath;
	
private:
    void CMyTexture::GetGradient(BYTE* image, INT width, INT height
		, FLOAT* deltar, FLOAT* deltasita);//�õ�������ݶȣ�

};

#endif // !defined(AFX_MYTEXTURE_H__799334D4_CC09_4595_9BD6_2DA2E3705954__INCLUDED_)
