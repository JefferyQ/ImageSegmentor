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

//***************************************************************************
// �ļ���Thinner.h
// ���ܣ����ֲ�ͬ��ϸ���㷨
//***************************************************************************

void beforethin(unsigned char *ip, unsigned char *jp, 
				unsigned long lx, unsigned long ly);
void ThinnerHilditch(void *image, unsigned long lx, unsigned long ly);
void ThinnerPavlidis(void *image, unsigned long lx, unsigned long ly);
void ThinnerRosenfeld(void *image, unsigned long lx, unsigned long ly);
//ע��ú���lWidthӦ����Height��
BOOL WINAPI ThiningDIBSkeleton (unsigned char* lpDIBBits, LONG lWidth, LONG lHeight);
//the following two functions from image_j1 program
	int Thin_1(int *x ,  int N1,int M1,int N2,int M2);//M1,M2 ��ʾ���
	int Thin_2(int *x ,  int N1,int M1,int N2,int M2) ; // ϸ���㷨
