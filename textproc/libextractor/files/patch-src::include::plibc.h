--- src/include/plibc.h.orig	Fri May 20 03:27:06 2005
+++ src/include/plibc.h	Wed Jul 20 11:51:53 2005
@@ -451,20 +451,20 @@
  #define STRERROR(i) strerror(i)
  #define READLINK(p, b, s) readlink(p, b, s)
  #define LSTAT(p, b) lstat(p, b)
- #define PRINTF(f, ...) printf(f , __VA_ARGS__)
- #define FPRINTF(fil, fmt, ...) fprintf(fil, fmt, __VA_ARGS__)
+ #define PRINTF(f, ARGS...) printf(f , ##ARGS)
+ #define FPRINTF(fil, fmt, ARGS...) fprintf(fil, fmt, ##ARGS)
  #define VPRINTF(f, a) vprintf(f, a)
  #define VFPRINTF(s, f, a) vfprintf(s, f, a)
  #define VSPRINTF(d, f, a) vsprintf(d, f, a)
  #define VSNPRINTF(str, size, fmt, a) vsnprintf(str, size, fmt, a)
- #define _REAL_SNPRINTF(str, size, fmt, ...) snprintf(str, size, fmt, __VA_ARGS__)
- #define SPRINTF(d, f, ...) sprintf(d, f, __VA_ARGS__)
+ #define _REAL_SNPRINTF(str, size, fmt, ARGS...) snprintf(str, size, fmt, ##ARGS)
+ #define SPRINTF(d, f, ARGS...) sprintf(d, f, ##ARGS)
  #define VSSCANF(s, f, a) vsscanf(s, f, a)
- #define SSCANF(s, f, ...) sscanf(s, f, __VA_ARGS__)
+ #define SSCANF(s, f, ARGS...) sscanf(s, f, ##ARGS)
  #define VFSCANF(s, f, a) vfscanf(s, f, a)
  #define VSCANF(f, a) vscanf(f, a)
- #define SCANF(f, ...) scanf(f, __VA_ARGS__)
- #define FSCANF(s, f, ...) fscanf(s, f, __VA_ARGS__)
+ #define SCANF(f, ARGS...) scanf(f, ##ARGS)
+ #define FSCANF(s, f, ARGS...) fscanf(s, f, ##ARGS)
  #define ACCEPT(s, a, l) accept(s, a, l)
  #define BIND(s, n, l) bind(s, n, l)
  #define CONNECT(s, n, l) connect(s, n, l)
@@ -515,20 +515,20 @@
  #define STRERROR(i) _win_strerror(i)
  #define READLINK(p, b, s) _win_readlink(p, b, s)
  #define LSTAT(p, b) _win_lstat(p, b)
- #define PRINTF(f, ...) _win_printf(f , __VA_ARGS__)
- #define FPRINTF(fil, fmt, ...) _win_fprintf(fil, fmt, __VA_ARGS__)
+ #define PRINTF(f, ARGS...) _win_printf(f , ##ARGS)
+ #define FPRINTF(fil, fmt, ARGS...) _win_fprintf(fil, fmt, ##ARGS)
  #define VPRINTF(f, a) _win_vprintf(f, a)
  #define VFPRINTF(s, f, a) _win_vfprintf(s, f, a)
  #define VSPRINTF(d, f, a) _win_vsprintf(d, f, a)
  #define VSNPRINTF(str, size, fmt, a) _win_vsnprintf(str, size, fmt, a)
- #define _REAL_SNPRINTF(str, size, fmt, ...) _win_snprintf(str, size, fmt, __VA_ARGS__)
- #define SPRINTF(d, f, ...) _win_sprintf(d, f, __VA_ARGS__)
+ #define _REAL_SNPRINTF(str, size, fmt, ARGS...) _win_snprintf(str, size, fmt, ##ARGS)
+ #define SPRINTF(d, f, ARGS...) _win_sprintf(d, f, ##ARGS)
  #define VSSCANF(s, f, a) _win_vsscanf(s, f, a)
- #define SSCANF(s, f, ...) _win_sscanf(s, f, __VA_ARGS__)
+ #define SSCANF(s, f, ARGS...) _win_sscanf(s, f, ##ARGS)
  #define VFSCANF(s, f, a) _win_vfscanf(s, f, a)
  #define VSCANF(f, a) _win_vscanf(f, a)
- #define SCANF(f, ...) _win_scanf(f, __VA_ARGS__)
- #define FSCANF(s, f, ...) _win_fscanf(s, f, __VA_ARGS__)
+ #define SCANF(f, ARGS...) _win_scanf(f, ##ARGS)
+ #define FSCANF(s, f, ARGS...) _win_fscanf(s, f, ##ARGS)
  #define ACCEPT(s, a, l) _win_accept(s, a, l)
  #define BIND(s, n, l) _win_bind(s, n, l)
  #define CONNECT(s, n, l) _win_connect(s, n, l)
