#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 177262187
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, int p_7, signed char p_9, int p_11[1][5],
                float p_19)
{
  int v_23;
  unsigned char v_21;
  unsigned char v_17;
  int v_15;
  unsigned int v_13;
  long long v_5;
  long v;
  signed char result;
  v_23 = -114992667;
  v_21 = (unsigned char)98;
  v_15 = -404842213;
  v_13 = (unsigned int)p_7;
  v_5 = (long long)p_11[0][4];
  v = 662341332L;
  result = p_9;
  while (75U > (- v_13 >> 9L) % (unsigned int)((int)result + 682)) {
    v_13 = v_15 % 143;
    v_15 = (int)((((float)v_23 - 3182665984.f) + 55.f) * (float)(! (- v_21)));
    v_17 = (unsigned char)(- ((long long)(p_19 - (float)v_5) % ((v_5 ^ (long long)v_21) + 319LL)));
    result = (signed char)v_17;
  }
  while_0_break: ;
  if (v <= (long)p_11[0][3]) {
    v_5 = (long long)((int)(~ result) + p_7);
    v = (long)(~ p);
    result = (signed char)((long long)(~ ((long)result - v)) / (((long long)p / (
                                                                 v_5 + 53LL) - (long long)(
                                                                 p / (
                                                                 p + 40U))) + 1014LL));
  }
  else result = p_9;
  return result;
}


