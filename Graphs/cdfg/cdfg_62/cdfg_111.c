#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 3054269
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned short p[5][1], float p_5, char p_7[1],
              unsigned char p_13[5][5][3], int p_17)
{
  unsigned long v_25;
  long long v_23;
  unsigned int v_21;
  unsigned long v_19;
  unsigned long long v_15;
  unsigned int v_11;
  long v_9;
  unsigned long long v;
  long long result;
  v_25 = 230755880UL;
  v_23 = 498609966LL;
  v_15 = 18446744072845935664ULL;
  v_11 = (unsigned int)p[0][0];
  v = (unsigned long long)p_5;
  if (! ((unsigned long long)(! v_23) + (unsigned long long)v_25 / 30432ULL) == 57890ULL) {
    v = (unsigned long long)((float)((unsigned long long)p_13[2][4][1] - 
                                     v % (unsigned long long)((int)p[4][0] + 599)) - 
                             p_5 / ((float)(-399889433LL % (long long)(
                                            (int)p_13[3][4][1] + 1014)) + 78.f));
    v_9 = (long)v_11;
    v = (unsigned long long)((-2.63333602445e+38f - (float)v) + (p_5 / (
                                                                 (float)p_7[0] + 830.f)) / (
                                                                (float)v_9 + 355.f));
  }
  else {
    v_21 = (unsigned int)p_7[0];
    v_19 = (unsigned long)(! (v_21 + (unsigned int)(97 + (int)p_7[0])));
    v = (unsigned long long)(0 - 19758L) * ((v_15 << (p_17 & 63)) ^ (unsigned long long)(
                                            v_19 % (unsigned long)((int)p_7[0] + 290)));
  }
  result = (long long)(- (~ v | (unsigned long long)((int)p[4][0] + 25)));
  return result;
}


