#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 862533721
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(int p[1][1], unsigned short p_5, unsigned long p_7, double p_9,
         unsigned long p_13)
{
  unsigned int v_29;
  short v_27;
  int v_25;
  unsigned int v_23;
  unsigned char v_21;
  int v_19;
  signed char v_17;
  signed char v_15;
  unsigned long v_11;
  unsigned long v;
  long result;
  v_29 = 9294U;
  v_27 = (short)10627;
  v_25 = 616701253;
  v_23 = (unsigned int)p_13;
  v_21 = (unsigned char)145;
  v_19 = (int)p_5;
  v_17 = (signed char)115;
  v_11 = 4294908870UL;
  result = -8444L;
  if ((unsigned long)((v_23 * (unsigned int)p_9) / (unsigned int)(p[0][0] + 783) - 4294967228U) > ~ (
      (v_11 / (p_13 + 140UL)) / (p_7 * (unsigned long)v_29 + 390UL))) {
    v_11 = (p_7 - 5998UL) * (unsigned long)(v_19 * -117) >> (! ((unsigned int)v_21 | v_23) & 31U);
    result = (long)(~ ((unsigned long)v_17 * (p_7 * 4294967234UL)));
    v = (unsigned long)(18446744072850871437ULL * (unsigned long long)(
                        (unsigned long)v_17 * p_7 & 35771UL));
  }
  else {
    v_11 = ~ ((p_7 * (unsigned long)v_19) % 49753UL);
    v_29 = (unsigned int)(~ (~ p_7 * v_11));
    v = (unsigned long)((unsigned int)(~ (v_25 & (int)v_27)) | - v_29);
  }
  while (176252369UL * ((unsigned long)(4294922146U * (unsigned int)p[0][0]) * v) < (unsigned long)(
         (result % (long)((int)p_5 + 732) + (long)p_5) + (long)(((int)p_5 & 47172) % (
                                                                (int)(
                                                                (double)p_7 * p_9) + 145)))) {
    v_15 = v_11 * (unsigned long)-907.875427246f;
    v = (unsigned long)(~ ((long)p[0][0] / ((long)v_15 * -5419L + 809L)));
    v_11 = p_7;
    result = (long)((long long)(! (p_13 << 20)));
  }
  while_0_break: ;
  return result;
}


