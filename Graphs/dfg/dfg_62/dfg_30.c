#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 425613898
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p, signed char p_4[5], long long p_7, short p_11,
                   double p_13)
{
  long v_19;
  unsigned short v_17;
  short v_15;
  unsigned char v_9;
  signed char v;
  unsigned short result;
  v_19 = -105459359L;
  v_17 = (unsigned short)p;
  v_15 = (short)p_7;
  v_9 = (unsigned char)((unsigned long)(3447029499U + (unsigned int)(
                                        (int)p_4[4] | (int)((signed char)(
                                        -30497. - p_13)))) / ((unsigned long)(
                                                              (unsigned int)2.15566345159e+38 / 3562365556U) % (unsigned long)(
                                                              v_19 / 499L + 196L) + 975UL));
  v = (signed char)(((long)(((int)p * (int)((char)p_13)) * 12293) ^ (
                     (long)((int)p_4[1] - (int)v_15) + -217908541L)) * (long)(
                    (int)((unsigned short)-2.015449618e+38) / ((int)v_17 + 117) - (int)(
                    142902804. + p_13)));
  result = (unsigned short)p_11;
  result = (unsigned short)((long long)result - ((long long)((int)p % (
                                                             ((int)p_4[3] & (int)v) + 194)) ^ 
                                                 (48279LL % (p_7 + 181LL)) * (long long)(~ v_9)));
  return result;
}


