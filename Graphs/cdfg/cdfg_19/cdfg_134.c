#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 382962431
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, int p_5, double p_9,
                long long p_11[4][1][1], unsigned int p_15)
{
  long long v_21;
  float v_19;
  unsigned long long v_17;
  signed char v_13;
  unsigned int v_7;
  short v;
  signed char result;
  v_21 = 14376LL;
  v_17 = 18446744073709509017ULL;
  v_13 = (signed char)-56;
  v_7 = 343374059U;
  result = (signed char)-120;
  while (! (- v_17) > (unsigned long long)(! p_11[2][0][0])) {
    v_19 = v_21 * (long long)-3.80856470401e+37f;
    v_17 = (unsigned long long)(- ((long long)(- v_19) + (long long)p * p_11[3][0][0]));
    result = (signed char)127;
    v_17 = 19010ULL * - ((unsigned long long)v_7 / (v_17 + 729ULL));
  }
  while_0_break: ;
  if ((unsigned int)((((float)v_17 - -804.769226074f) + (float)(~ p)) - (float)(~ (
                     646543568UL + (unsigned long)p_5))) <= 121U - ~ (
                                                            (unsigned int)v_13 + v_7)) {
    v = (short)(- (24059LL - ((long long)p_9 + p_11[0][0][0])));
    v = (short)((unsigned int)(! ((int)result >> (p_5 & 7))) % (- (v_7 % (unsigned int)(
                                                                   (int)v + 896)) + 1008U));
    result = (signed char)((unsigned long)p / ((unsigned long)v * 566592UL + 625UL));
  }
  else {
    v_13 = (signed char)(~ 236924949ULL);
    result = (signed char)((unsigned long long)(- (~ v_13)) - 468793977ULL / (unsigned long long)(
                                                              p_15 + 308U));
  }
  return result;
}


