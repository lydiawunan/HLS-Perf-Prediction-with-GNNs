#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 163492783
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long long p[3][5][3], char p_7[4], float p_13, char p_17,
         unsigned long long p_19)
{
  short v_21;
  long v_15;
  float v_11;
  unsigned short v_9;
  char v_4;
  signed char v;
  char result;
  v_21 = (short)-23618;
  v_15 = (long)p_19;
  v_11 = 318.860900879f;
  v_9 = (unsigned short)60718;
  v = (signed char)((unsigned long long)6.83168802552e+37f % ((((unsigned long long)v_9 * p_19) / 719ULL) % (unsigned long long)(
                                                              ((3813206493UL + (unsigned long)v_21) >> 17ULL) + 261UL) + 365ULL));
  result = (char)(3203558400.f - (- ((float)p_7[2] - p_13) - (float)(
                                  (int)((unsigned short)((float)v_15 * p_13)) / 30488)));
  v_4 = (char)((unsigned long long)(34551UL + (unsigned long)(v_11 + (float)(
                                                              (int)result / (
                                                              (int)((char)p_13) + 282)))) - (
               (unsigned long long)((v_15 - 6595L) ^ (long)((int)((char)1.66524568163e+38) * (int)p_17)) + p_19));
  result = (char)((long long)((int)v - (int)v_4) + (~ p[1][4][1] >> (
                                                    (202L & (long)p_7[0]) & 63L)) * (long long)v_9);
  return result;
}


