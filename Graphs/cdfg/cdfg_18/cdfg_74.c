#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 926998570
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p[3][4][2], char p_5, signed char p_7,
                unsigned int p_9, double p_11)
{
  unsigned int v_19;
  unsigned short v_17;
  unsigned long long v_15;
  unsigned int v_13;
  short v;
  signed char result;
  v_19 = 126636513U;
  v_17 = (unsigned short)41190;
  v_15 = 1471ULL;
  if ((unsigned long)((int)(~ p[0][1][0]) % ((int)v_17 + 792)) >= 4294966979UL % (unsigned long)(
                                                                  v_19 % 20744U + 449U) + (unsigned long)(
                                                                  (int)2999123633.25 & (
                                                                  (int)p[0][1][0] + (int)p[0][2][1]))) {
    v = (short)(~ (- (! p_7)));
    result = (signed char)(~ (- ((unsigned long)p_5 + 813501245UL)));
  }
  else {
    v_13 = (unsigned int)((unsigned long long)(- p_7) + (unsigned long long)(! p_9) % (
                                                        (557ULL + v_15) + 649ULL));
    result = (signed char)((~ p_9 % (((unsigned int)p_11 & v_13) + 352U)) / (unsigned int)(
                           (int)(! p[1][0][0]) / -119 + 129));
    v = (short)result;
  }
  result = (signed char)((long long)((unsigned int)((int)p[1][0][0] - -7519) | 
                                     (unsigned int)result / 9018U) & 
                         (long long)p[0][3][0] * (48233LL / (long long)(
                                                  (int)v + 421)));
  return result;
}


