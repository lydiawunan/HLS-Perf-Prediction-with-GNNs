#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 117832545
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, unsigned long long p_7[1], double p_9,
                char p_11, unsigned int p_15)
{
  unsigned char v_23;
  double v_21;
  long long v_19;
  short v_17;
  char v_13;
  unsigned long v_5;
  unsigned int v;
  signed char result;
  v_23 = (unsigned char)p_15;
  v_21 = 3548316253.44;
  v_19 = (long long)p_9;
  v_17 = (short)p_11;
  v_13 = (char)-44;
  result = (signed char)34;
  if ((long long)(- p_11) > (long long)((double)v_19 + p_9 / (v_21 + 872.)) - - (
                            (long long)v_23 / (v_19 + 722LL))) {
    v_5 = (((unsigned long)v_13 - 617091312UL) * (unsigned long)p_15) % (
          (unsigned long)(- p_9 + (double)(p_7[0] - (unsigned long long)result)) + 168UL);
    result = (signed char)-1;
    v = (unsigned int)(((unsigned long long)(- result) - (unsigned long long)v_5 / (
                                                         p_7[0] + 233ULL)) - (unsigned long long)(
                       (unsigned int)p_9 / 4206575213U + (unsigned int)(
                       (int)p_11 * -190662493)));
  }
  else {
    v_17 = (short)(- ((long long)v_17 * ((long long)p_11 * 4176LL)));
    v = (unsigned int)((unsigned long long)p_11 + (p_7[0] ^ 18446744073709525920ULL) % 884522080ULL);
    result = (signed char)(-17960 & (int)p_11 % ((int)(- v_17) + 540));
  }
  result = (signed char)((unsigned long)v % ((unsigned long)result % (
                                             (unsigned long)p * 4294959983UL + 392UL) + 26UL));
  return result;
}


