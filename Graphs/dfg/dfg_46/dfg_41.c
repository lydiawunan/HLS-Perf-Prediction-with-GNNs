#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 870384163
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long long p)
{
  unsigned long long v_10;
  char v_8;
  unsigned long long v_6;
  char v_4;
  int v;
  double result;
  v_10 = (unsigned long long)p;
  v_8 = (char)-126;
  v_6 = (unsigned long long)p;
  v_4 = (char)-73;
  v = 387633367;
  result = (double)675L;
  v = (int)((double)((long long)(! v >> (p & 31LL)) * ~ (! p)) - (- result + (double)(! p)));
  v_8 = (char)(- (((float)(p | 181LL) / 1036.57165527f) / ((float)((unsigned long long)v_8 * v_10 - 
                                                                   v_10 % (
                                                                   v_6 + 226ULL)) + 673.f)));
  result = (double)(- ((unsigned long long)(v + (int)v_4) % (! v_6 + 11ULL)) + 
                    (unsigned long long)(- v_8) % (~ v_10 / (unsigned long long)(
                                                   ~ p + 298LL) + 743ULL));
  return result;
}


