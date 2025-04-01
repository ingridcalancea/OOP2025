#include "canvas.h"
#include <iostream>
#include <cmath>

Canvas::Canvas(int width, int height) : width(width), height(height), matrix(height, std::vector<char>(width, ' ')) {}


void Canvas::SetPoint(int x, int y, char ch) {
    if (x >= 0 && x < width && y >= 0 && y < height)
        matrix[y][x] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch) {
    int dx = abs(x2 - x1), dy = abs(y2 - y1);
   
    int sx, sy;

    if (x1 < x2) {
        sx = 1;
    }
    else {
        sx = -1;
    }

    if (y1 < y2) {
        sy = 1;
    }
    else {
        sy = -1;
    }

    int err = dx - dy;

    while (true) {
        SetPoint(x1, y1, ch);
        if (x1 == x2 && y1 == y2) break;
        int e2 = err * 2;
        if (e2 > -dy) { err -= dy; x1 += sx; }
        if (e2 < dx) { err += dx; y1 += sy; }
    }
}

void Canvas::DrawCircle(int x, int y, int ray, char ch) {
    for (int i = x - ray; i <= x + ray; i++) {
        for (int j = y - ray; j <= y + ray; j++) {
            int dx = i - x;
            int dy = j - y;
            if (dx * dx + dy * dy >= ray * ray - ray && dx * dx + dy * dy <= ray * ray + ray) {
                SetPoint(i, j, ch);
            }
        }
    }
}

void Canvas::FillCircle(int x, int y, int ray, char ch) {
    for (int i = -ray; i <= ray; i++)
        for (int j = -ray; j <= ray; j++)
            if (i * i + j * j <= ray * ray)
                SetPoint(x + i, y + j, ch);
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch) {
    for (int x = left; x <= right; x++) {
        SetPoint(x, top, ch);
        SetPoint(x, bottom, ch);
    }
    for (int y = top; y <= bottom; y++) {
        SetPoint(left, y, ch);
        SetPoint(right, y, ch);
    }
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch) {
    for (int x = left; x <= right; x++)
        for (int y = top; y <= bottom; y++)
            SetPoint(x, y, ch);
}

void Canvas::Print() {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            std::cout << matrix[i][j];
        }
        std::cout << '\n';
    }
}

void Canvas::Clear() {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            matrix[i][j] = ' ';
        }
    }
}

