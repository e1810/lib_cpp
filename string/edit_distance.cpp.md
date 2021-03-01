---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/DPL1/1_E.test.cpp
    title: test/aoj/DPL1/1_E.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"string/edit_distance.cpp\"\n\n\n\n#include<string>\n#include<algorithm>\n\
    \nint edit_distance(std::string s, std::string t){\n\tint n = s.size(), m = t.size();\n\
    \tint dp[n+1][m+1];\n\tfor(int i=0; i<=n; i++) for(int j=0; j<=m; j++) dp[i][j]\
    \ = 1e9;\n\tdp[0][0] = 0;\n\n\tfor(int i=0; i<=n; i++){\n\t\tfor(int j=0; j<=m;\
    \ j++){\n\t\t\tif(i>0 && j>0){\n\t\t\t\tif(s[i-1]==t[j-1]) dp[i][j] = std::min(dp[i][j],\
    \ dp[i-1][j-1]);\n\t\t\t\telse dp[i][j] = std::min(dp[i][j], dp[i-1][j-1]+1);\n\
    \t\t\t}\n\t\t\tif(i>0) dp[i][j] = std::min(dp[i][j], dp[i-1][j] + 1);\n\t\t\t\
    if(j>0) dp[i][j] = std::min(dp[i][j], dp[i][j-1] + 1);\n\t\t}\n\t}\n\t\n\treturn\
    \ dp[n][m];\n}\n\n\n"
  code: "#ifndef INCLUDED_EDIT_DISTANCE\n#define INCLUDED_EDIT_DISTANCE\n\n#include<string>\n\
    #include<algorithm>\n\nint edit_distance(std::string s, std::string t){\n\tint\
    \ n = s.size(), m = t.size();\n\tint dp[n+1][m+1];\n\tfor(int i=0; i<=n; i++)\
    \ for(int j=0; j<=m; j++) dp[i][j] = 1e9;\n\tdp[0][0] = 0;\n\n\tfor(int i=0; i<=n;\
    \ i++){\n\t\tfor(int j=0; j<=m; j++){\n\t\t\tif(i>0 && j>0){\n\t\t\t\tif(s[i-1]==t[j-1])\
    \ dp[i][j] = std::min(dp[i][j], dp[i-1][j-1]);\n\t\t\t\telse dp[i][j] = std::min(dp[i][j],\
    \ dp[i-1][j-1]+1);\n\t\t\t}\n\t\t\tif(i>0) dp[i][j] = std::min(dp[i][j], dp[i-1][j]\
    \ + 1);\n\t\t\tif(j>0) dp[i][j] = std::min(dp[i][j], dp[i][j-1] + 1);\n\t\t}\n\
    \t}\n\t\n\treturn dp[n][m];\n}\n\n#endif\n"
  dependsOn: []
  isVerificationFile: false
  path: string/edit_distance.cpp
  requiredBy: []
  timestamp: '2021-03-01 16:28:30+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/DPL1/1_E.test.cpp
documentation_of: string/edit_distance.cpp
layout: document
redirect_from:
- /library/string/edit_distance.cpp
- /library/string/edit_distance.cpp.html
title: string/edit_distance.cpp
---
