/*
 * Brian Lee
 * CMPSC 130B Programming Assignment 1
 * Brute-Force and Divide-and-Conquer
 * Distance between two points
 */
#ifndef PROG1_H_
#define PROG1_H_

#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

struct Point
{
  double xCoor;
  double yCoor;

  Point(): xCoor(0), yCoor(0) {}
  Point(double x, double y): xCoor(x), yCoor(y) {}
};

struct progOut
{
  double distance;
  Point p1;
  Point p2;
  int count;

  progOut(): p1(), p2(), count(0), distance(0) {}
  progOut(Point a, Point b, int c, double d): p1(a), p2(b), count(c), distance(d) {}
};

double getDistance(Point a, Point b); //DONE

progOut bruteClosest(int size, vector<Point> list, int count); //DONE

progOut dncClosest(vector<Point> list, int counter);//DONE

void print(progOut out); //DONE

#endif
