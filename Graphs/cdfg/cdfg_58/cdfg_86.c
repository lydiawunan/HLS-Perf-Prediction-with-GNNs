#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 506968992
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p[1][1][3], unsigned long long p_4,
                   signed char p_7, char p_17, signed char p_23[3][3])
{
  signed char v_27;
  long long v_25;
  unsigned long v_21;
  double v_19;
  unsigned short v_15;
  double v_13;
  unsigned int v_11;
  double v_9;
  unsigned short v;
  unsigned short result;
  v_25 = (long long)p[0][0][1];
  v_21 = (unsigned long)p[0][0][2];
  v_15 = (unsigned short)p_17;
  v_13 = (double)p_4;
  v_9 = (double)p_4;
  v_27 = (signed char)(((long long)(- p_23[2][0]) ^ (3376120713LL + v_25)) % (long long)(
                       (! v_21 ^ (unsigned long)(48134 + (int)p_7)) + 466UL));
  if ((int)(! (~ (- p_7))) != (int)v_27) {
    v_11 = ((unsigned int)(- v_9) + p[0][0][2]) - (unsigned int)(((int)((unsigned short)v_13) ^ (int)v_15) % (
                                                                 (int)p_17 + 574));
    v = (unsigned short)((unsigned int)((int)(- v_9) & 7) - v_11);
    result = (unsigned short)(((unsigned long long)(p[0][0][0] / 4294950900U) + p_4) * (unsigned long long)(
                              (int)v / ((int)v + 682) >> ((int)p_7 & 31)));
  }
  else {
    v_25 = (long long)(! p_4);
    v_19 = (double)(- ((long long)(v_21 / (unsigned long)((int)p_23[0][2] + 690)) ^ (
                       (long long)v_21 & v_25)));
    result = (unsigned short)(-147.90822421 * v_19);
  }
  return result;
}


