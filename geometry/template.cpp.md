---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"geometry/template.cpp\"\n#include<bits/stdc++.h>\nconst\
    \ double EPS = 1e-10;\n\nstruct Point {\n    double x, y;\n    Point(double x=0,\
    \ double y=0): x(x), y(y) {}\n    Point(const Point &a): x(a.x), y(a.y) {}\n};\n\
    inline Point operator+(const Point &p, const Point &q) {return Point(p.x+q.x,\
    \ p.y+q.y);}\ninline Point operator-(const Point &p, const Point &q) {return Point(p.x-q.x,\
    \ p.y-q.y);}\ninline Point operator*(const Point &p, double a) {return Point(p.x*a,\
    \ p.y*a);}\ninline Point operator/(const Point &p, double a) {return Point(p.x/a,\
    \ p.y/a);}\n\ninline Point rot90(const Point &p){ return Point(-p.y, p.x); }\n\
    inline double dot(const Point &a, const Point &b){ return a.x*b.x + a.y*b.y; }\n\
    inline double cross(const Point &a, const Point &b){ return a.x*b.y - b.x*a.y;\
    \ }\ninline double abs(const Point &p){ return sqrt(dot(p, p)); }\n\nstruct Line\
    \ {\n    Point a, b;\n    Line(Point a, Point b): a(a), b(b) {}\n};\n\n\nPoint\
    \ crosspoint(const Line &l, const Line &m){\n    double A = cross(m.b - m.a, l.b\
    \ - l.a);\n    double B = cross(m.b - m.a, m.b - l.a);\n    if(abs(A)<EPS) return\
    \ Point(EPS,EPS);\n    return l.a + (l.b-l.a) * B/A;\n}\n\nPoint gaisin(Point\
    \ a, Point b, Point c){\n    Line ab((a+b)/2, (a+b)/2+rot90(a-b));\n    Line bc((b+c)/2,\
    \ (b+c)/2+rot90(b-c));\n    return crosspoint(ab, bc);\n}\n\nbool in_tri(Point\
    \ a, Point b, Point c, Point p){\n    double abp = cross(b-a, p-b);\n    double\
    \ bcp = cross(c-b, p-c);\n    double cap = cross(a-c, p-a);\n    return (abp<=0\
    \ && bcp<=0 && cap<=0) || (abp>=0 && bcp>=0 && cap>=0);\n}\n"
  code: "#include<bits/stdc++.h>\nconst double EPS = 1e-10;\n\nstruct Point {\n  \
    \  double x, y;\n    Point(double x=0, double y=0): x(x), y(y) {}\n    Point(const\
    \ Point &a): x(a.x), y(a.y) {}\n};\ninline Point operator+(const Point &p, const\
    \ Point &q) {return Point(p.x+q.x, p.y+q.y);}\ninline Point operator-(const Point\
    \ &p, const Point &q) {return Point(p.x-q.x, p.y-q.y);}\ninline Point operator*(const\
    \ Point &p, double a) {return Point(p.x*a, p.y*a);}\ninline Point operator/(const\
    \ Point &p, double a) {return Point(p.x/a, p.y/a);}\n\ninline Point rot90(const\
    \ Point &p){ return Point(-p.y, p.x); }\ninline double dot(const Point &a, const\
    \ Point &b){ return a.x*b.x + a.y*b.y; }\ninline double cross(const Point &a,\
    \ const Point &b){ return a.x*b.y - b.x*a.y; }\ninline double abs(const Point\
    \ &p){ return sqrt(dot(p, p)); }\n\nstruct Line {\n    Point a, b;\n    Line(Point\
    \ a, Point b): a(a), b(b) {}\n};\n\n\nPoint crosspoint(const Line &l, const Line\
    \ &m){\n    double A = cross(m.b - m.a, l.b - l.a);\n    double B = cross(m.b\
    \ - m.a, m.b - l.a);\n    if(abs(A)<EPS) return Point(EPS,EPS);\n    return l.a\
    \ + (l.b-l.a) * B/A;\n}\n\nPoint gaisin(Point a, Point b, Point c){\n    Line\
    \ ab((a+b)/2, (a+b)/2+rot90(a-b));\n    Line bc((b+c)/2, (b+c)/2+rot90(b-c));\n\
    \    return crosspoint(ab, bc);\n}\n\nbool in_tri(Point a, Point b, Point c, Point\
    \ p){\n    double abp = cross(b-a, p-b);\n    double bcp = cross(c-b, p-c);\n\
    \    double cap = cross(a-c, p-a);\n    return (abp<=0 && bcp<=0 && cap<=0) ||\
    \ (abp>=0 && bcp>=0 && cap>=0);\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: geometry/template.cpp
  requiredBy: []
  timestamp: '2021-10-31 15:15:33+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: geometry/template.cpp
layout: document
redirect_from:
- /library/geometry/template.cpp
- /library/geometry/template.cpp.html
title: geometry/template.cpp
---
