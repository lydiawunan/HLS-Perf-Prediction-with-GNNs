#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 83659586
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p, unsigned short p_7, char p_9[4][3],
                       long long p_15[5][3][5])
{
  long long v_17;
  unsigned int v_13;
  unsigned char v_11;
  signed char v_5;
  int v;
  unsigned long long result;
  v_17 = 6873LL;
  v_13 = (unsigned int)p;
  v_11 = (unsigned char)31;
  v_5 = (signed char)110;
  v = (int)p_15[3][0][4];
  result = (unsigned long long)p_15[2][0][2];
  if (! ((long long)p - -732105964LL) - (long long)(! (p * (unsigned long)v)) >= (long long)(- (
      (int)v_5 / ((int)((signed char)2.1061894296e+37f) + 717)))) {
    v = (int)((unsigned int)(~ ((int)p_9[3][0] * (int)v_11)) & ~ (v_13 + 4294921138U));
    v = (int)(39986U % (unsigned int)(v + 498));
    v_5 = (signed char)(! p + ! p / (unsigned long)(((int)p_7 - 10069) + 609));
  }
  else {
    v_5 = (signed char)((0LL ^ p_15[0][2][0]) % (long long)((int)((unsigned short)(
                                                            (double)v_17 / 460.672207379)) % (
                                                            (int)p_7 + 264) + 498));
    v = (int)(- ((unsigned long long)-862.447753906f + (13555346ULL + result)));
    v = (int)(-4063127416.74 / ((double)v + 41.));
  }
  result = (unsigned long long)(- ((unsigned long)v + p)) / ((1059500272ULL >> (
                                                              v / ((int)v_5 + 371) & 63)) + 902ULL);
  return result;
}


