#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 895902954
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p, int p_5)
{
  int v_23;
  unsigned short v_21;
  double v_19;
  char v_17;
  double v_15;
  double v_13;
  unsigned short v_11;
  char v_9;
  unsigned char v_7;
  unsigned long long v;
  double result;
  v_23 = 2958;
  v_21 = (unsigned short)p_5;
  v_17 = (char)-21;
  v_13 = (double)p;
  v_11 = (unsigned short)23273;
  v_9 = (char)p;
  v_7 = (unsigned char)1;
  v = 828036963ULL;
  result = (double)p_5;
  if ((1911LL * (long long)((int)v_9 * (int)((char)p))) % (long long)(
      (int)v_7 + 863) != (long long)(- (! (! v_21)))) {
    v_15 = (double)((long)1.73422390557e+38f + (-4748L / ((long)p + 227L) >> (
                                                (long)(- p) & 31L)));
    v_13 = (double)(! (44473 * p_5) + (int)((float)((unsigned long long)v_9 + 438187831ULL) - 
                                            p / (p + 897.f)));
    v_9 = (char)((p_5 - (int)v_15) / (! v_23 + 327) - ((int)((unsigned short)v_15) % (
                                                       (int)v_11 + 284) ^ (
                                                       (int)((unsigned char)v_13) + 197)));
  }
  else {
    v_11 = (unsigned short)6.55400337895e-09;
    v_15 = - (- (266023580. / (v_13 + 108.)));
    v_13 = - (- result - (double)((unsigned long long)v_21 / (v + 675ULL)));
  }
  if (p_5 != 0) {
    v_7 = (unsigned char)((double)v_9 + (double)((int)((unsigned short)p) + (int)v_11) * (
                                        v_13 - (double)v_11));
    v = (unsigned long long)((int)((unsigned char)(- p)) ^ (int)v_7);
    result = (double)((unsigned long long)((float)(~ v) * p) * (18446744073709509803ULL + (unsigned long long)(~ p_5)));
  }
  else {
    v_19 = (double)(824916596ULL - (14986ULL >> (((long long)p_5 - -25929LL) & 63LL)));
    v_11 = (unsigned short)((int)(- v_15) % (((int)v_17 - (int)((char)v_19)) * (int)v_7 + 880));
    result = (double)v_11;
  }
  return result;
}


