//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 681977528
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p)
{
  unsigned int v_13;
  int v_10;
  double v_8;
  double v_6;
  char v_4;
  unsigned long v;
  char result;
  v_13 = (unsigned int)p;
  v_8 = (double)p;
  v_4 = p;
  v = 26093UL;
  result = (char)((! v - (unsigned long)(((int)p - (int)p) % ((int)(! p) + 959))) - (unsigned long)p);
  v_10 = (int)v_13;
  v_6 = (double)result;
  result = (char)((((unsigned long long)v - 18446744073709519351ULL) - (unsigned long long)(
                   (double)v_4 / (v_6 + 942.))) / (unsigned long long)(
                  - ((int)result / ((int)((char)v_8) + 398)) + 692) + (unsigned long long)(
                  (unsigned long)((v_10 * (int)p) / ((int)-1.99757982226e+38 + 630)) & v));
  return result;
}


