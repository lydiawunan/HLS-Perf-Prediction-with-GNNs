#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 862369127
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long p, signed char p_5, int p_9, int p_11[5][3][2],
          char p_19)
{
  char v_31;
  short v_29;
  char v_27;
  long v_25;
  unsigned long long v_23;
  float v_21;
  double v_17;
  unsigned long v_15;
  unsigned int v_13;
  unsigned long v_7;
  char v;
  short result;
  v_31 = (char)-16;
  v_29 = (short)p_11[1][1][0];
  v_27 = (char)35;
  v_25 = 368600722L;
  v_23 = (unsigned long long)p_19;
  v_21 = (float)p_5;
  v_15 = 29575UL;
  v = (char)p_5;
  while (((unsigned long)((int)((char)8995536062.97) - (int)v_27) / (
          ~ p + 371UL)) * (unsigned long)v_29 < (58604UL % (p + 73UL)) / 47UL + - (
                                                p << 15)) {
    v_15 = (int)v_31 - -10888;
    v_31 = (char)(- (((unsigned long long)p * 18446744073709520623ULL) / (unsigned long long)(
                     - v_15 + 808UL)));
    v_15 = (unsigned long)((unsigned long long)((int)(! p_5) * p_9) % 18446744073412665498ULL);
    v_27 = (char)(~ p_5);
  }
  while_0_break: ;
  if (((v_23 | (unsigned long long)p_19) * (unsigned long long)(v_25 % (
                                                                (long)1.9212857298e+38f + 592L))) / (unsigned long long)(
      p + 144UL) >= (unsigned long long)p_9) {
    result = (short)(1 % (unsigned long)(~ (p_9 | p_11[1][2][1]) + 835));
    v_7 = (unsigned long)(1 % 29805L);
    result = (short)((unsigned long)(3302890652U + (unsigned int)(~ v)) + (
                     p * (unsigned long)p_5 - (unsigned long)result / (
                                              v_7 + 852UL)));
  }
  else {
    v_13 = (unsigned int)v_21;
    v_17 = (double)p_19;
    result = (short)(-9940016128. + ((double)((unsigned long)v_13 & v_15) - - v_17));
  }
  return result;
}


