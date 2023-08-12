
/* C program to display solution to Tower of Hanoi for 3 disks */

#include <stdio.h>
#include <conio.h>
#include <graphics.h>

// Print the outlines of the configuration
void outline()
{
	// Main Base
	line(100, 600, 1100, 600);

	// 1st Line
	line(300, 600, 300, 300);

	// 2nd Line
	line(600, 600, 600, 300);

	// 3rd Line
	line(900, 600, 900, 300);

	// Printing Label
	settextstyle(8, 0, 2);
	outtextxy(290, 620, "(1)");
	outtextxy(590, 620, "(2)");
	outtextxy(890, 620, "(3)");
}

// Beginning State
void start()
{
	cleardevice();
	settextstyle(8, 0, 4);
	outtextxy(500, 50, "Beginning State");

	// Red Coloring Of Disk
	setfillstyle(SOLID_FILL, RED);
	rectangle(225, 550, 375, 600);
	floodfill(230, 590, 15);

	// Blue Coloring Of Disk
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(250, 500, 350, 550);
	floodfill(255, 545, 15);

	// Green Coloring Of Disk
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(275, 450, 325, 500);
	floodfill(285, 495, 15);

	// calling outline() function
	outline();
}

// Moving the Green Disk To Third Tower
void p1()
{
	getch();
	cleardevice();
	settextstyle(8, 0, 4);
	outtextxy(500, 50, "1st Step");
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(875, 600, 925, 550);
	floodfill(880, 595, 15);
	setfillstyle(SOLID_FILL, RED);
	rectangle(225, 550, 375, 600);
	floodfill(230, 590, 15);
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(250, 500, 350, 550);
	floodfill(255, 545, 15);

	outline();
}

// Function for Moving the Blue Disk To Second Tower
void p2()
{
	getch();
	cleardevice();
	settextstyle(8, 0, 4);
	outtextxy(500, 50, "2nd Step");
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(550, 550, 650, 600);
	floodfill(555, 595, 15);
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(875, 600, 925, 550);
	floodfill(880, 595, 15);
	setfillstyle(SOLID_FILL, RED);
	rectangle(225, 550, 375, 600);
	floodfill(230, 590, 15);

	outline();
}

// Moving the Green Disk To Second Tower On Top Of Blue Disk
void p3()
{
	getch();
	cleardevice();
	settextstyle(8, 0, 4);
	outtextxy(500, 50, "3rd Step");
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(550, 550, 650, 600);
	floodfill(555, 595, 15);
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(575, 500, 625, 550);
	floodfill(580, 545, 15);
	setfillstyle(SOLID_FILL, RED);
	rectangle(225, 550, 375, 600);
	floodfill(230, 590, 15);

	outline();
}

// Moving Red Disk To Third Tower
void p4()
{
	getch();
	cleardevice();
	settextstyle(8, 0, 4);
	outtextxy(500, 50, "4th Step");
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(550, 550, 650, 600);
	floodfill(555, 595, 15);
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(575, 500, 625, 550);
	floodfill(580, 545, 15);
	setfillstyle(SOLID_FILL, RED);
	rectangle(825, 600, 975, 550);
	floodfill(830, 555, 15);

	outline();
}

// Moving Green Disk To the First Tower
void p5()
{
	getch();
	cleardevice();
	settextstyle(8, 0, 4);
	outtextxy(500, 50, "5th Step");
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(550, 550, 650, 600);
	floodfill(555, 595, 15);
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(275, 600, 325, 550);
	floodfill(280, 595, 15);
	setfillstyle(SOLID_FILL, RED);
	rectangle(825, 600, 975, 550);
	floodfill(830, 555, 15);

	outline();
}

// Moving the Blue Disk To Third Tower On Top Of Red Disk
void p6()
{
	getch();
	cleardevice();
	settextstyle(8, 0, 4);
	outtextxy(500, 50, "6th Step");
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(850, 500, 950, 550);
	floodfill(855, 545, 15);
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(275, 600, 325, 550);
	floodfill(280, 595, 15);
	setfillstyle(SOLID_FILL, RED);
	rectangle(825, 600, 975, 550);
	floodfill(830, 555, 15);

	outline();
}

// Moving the Green Disk to Third Tower On Top Of Blue Disk
void p7()
{
	getch();
	cleardevice();
	settextstyle(8, 0, 4);
	outtextxy(500, 50, "Completed!");
	setfillstyle(SOLID_FILL, BLUE);
	rectangle(850, 500, 950, 550);
	floodfill(855, 545, 15);
	setfillstyle(SOLID_FILL, GREEN);
	rectangle(875, 450, 925, 500);
	floodfill(880, 495, 15);
	setfillstyle(SOLID_FILL, RED);
	rectangle(825, 600, 975, 550);
	floodfill(830, 555, 15);

	outline();
}

int main()
{
	int gd = DETECT, gm;

	initgraph(&gd, &gm, "C:\\TC\\BGI");
	initwindow(1200,720);

	// Display each step one-by-one
	start();
	p1();
	p2();
	p3();
	p4();
	p5();
	p6();
	p7();

	getch();
	closegraph();
	return 0;
}

