#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 558144623
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p[4][3][4], long long p_9[1][3][4], int p_11[2], float p_13,
          signed char p_15)
{
  short v_21;
  unsigned short v_19;
  unsigned long v_17;
  short v_7;
  unsigned long long v_5;
  signed char v;
  float result;
  v_21 = (short)p_15;
  v_19 = (unsigned short)61481;
  v_17 = 4294929374UL;
  v_7 = (short)p[0][0][1];
  v_5 = 18446744073709491256ULL;
  v = (signed char)(-127-1);
  result = 138.453704834f;
  while (((unsigned long long)(~ (p_9[0][1][1] / (long long)(v_17 + 185UL))) & 
          (unsigned long long)(! p[2][2][2]) % (39975ULL / (unsigned long long)(
                                                p_11[0] + 292) + 152ULL)) > (unsigned long long)(
         ((long long)(- result) / (((long long)v_19 + p_9[0][2][3]) + 29LL)) / (long long)(
         (-14736 | (int)p[3][0][3] % 41300) + 454))) {
    v_19 = (unsigned short)(- (- ((float)p_9[0][0][2] - p_13)));
    v_17 = (unsigned long)((int)((double)v / -604939816.551) >> (((int)v_21 + (int)v_21) & 31)) / (
           (v_17 - (unsigned long)v_21) / (unsigned long)((int)p[1][2][0] % -877098428 + 972) + 77UL);
    result = (float)p_15;
  }
  while_0_break: ;
  if (915ULL - (- v_5 ^ (unsigned long long)((long long)v_7 / (p_9[0][0][3] + 943LL))) >= (unsigned long long)(
      p_11[0] % ((int)v + 86) ^ (int)v_7 / ((int)((signed char)p_13) / (
                                            (int)p_15 + 153) + 4))) result = (float)(
                                                                    - (
                                                                    196 % (
                                                                    (int)p[2][1][1] + 506)) % (
                                                                    (
                                                                    (int)p[0][0][3] - 127) + 657));
  else {
    v = (signed char)20;
    result = (float)((int)p[0][2][2] * (-13328 / ((int)(! v) + 476)));
  }
  return result;
}


