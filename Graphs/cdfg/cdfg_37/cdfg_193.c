#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 793174272
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p, unsigned short p_4, short p_6,
           float p_9[4][2][3], unsigned char p_11)
{
  unsigned int v_25;
  char v_23;
  short v_21;
  long long v_19;
  unsigned int v_17;
  int v_15;
  unsigned char v_13;
  unsigned long v;
  double result;
  v_25 = (unsigned int)p;
  v_23 = (char)p;
  v_21 = p_6;
  v_19 = 474446929LL;
  v_15 = (int)p;
  if ((float)((unsigned long)((float)p / (p_9[3][1][1] + 942.f)) << (
              (p | 49186UL) & 31UL)) - - (p_9[0][1][1] - -105504512.f) < (float)(
      0UL - ((unsigned long)(! v_25) - ~ p))) {
    v_15 = (int)v_19;
    v_17 = (unsigned int)((float)(! v_21) + p_9[0][0][2]);
    v_19 = (long long)((int)p_11 / ((int)((unsigned char)p_9[2][1][1]) + 9));
  }
  else {
    v_19 = (long long)(-4294965113UL);
    v_21 = (short)(~ ((unsigned long)(- v_23) ^ p));
    v_17 = (unsigned int)((double)(! ((int)v_21 | -18)) * 1.51712129301e+38);
  }
  if ((long long)((unsigned int)(- (57052651 ^ v_15)) + ~ v_17) > v_19 + (long long)(
                                                                  ! p - (unsigned long)(
                                                                  (int)((unsigned short)-2252435200.f) * 64833))) {
    v = (unsigned long)(p_9[0][0][1] + (float)(- ((int)p_11 * (int)p_11)));
    result = (double)v;
    result = (double)((((long long)p - -157880207LL) | (long long)(result / (
                                                                   (double)p + 617.))) / (long long)(
                      (-3 - (int)p_4) / ((int)p_6 + 601) + 853));
  }
  else {
    v_13 = (unsigned char)((int)p_11 + 44 / (((int)p_6 >> 10L) + 1024));
    v_13 = (unsigned char)(-951279176L * (long)v_13);
    result = (double)v_13;
  }
  return result;
}


