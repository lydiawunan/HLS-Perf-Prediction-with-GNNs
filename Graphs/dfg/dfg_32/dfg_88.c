#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 419975732
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, unsigned long p_5[4][3], float p_9,
                  long long p_11, unsigned char p_13)
{
  double v_21;
  unsigned long v_19;
  long long v_17;
  long long v_15;
  signed char v_7;
  signed char v;
  unsigned long result;
  v_21 = (double)p_9;
  v_19 = (unsigned long)p_13;
  v_17 = (long long)p_9;
  v_15 = 46938LL;
  v = (signed char)p_9;
  result = (unsigned long)((double)(((long long)(~ v) % (((long long)p_13 - p_11) + 557LL)) / (
                                    ((p_11 >> (v_15 & 63LL)) + v_17) + 867LL)) + 
                           -4955119104. / (((double)(v_19 / ((unsigned long)p_9 + 125UL)) + 
                                            v_21 / 1.27438476586e+38) + 380.));
  v_7 = (signed char)(! ((result >> 30L) % 52936UL));
  v = (signed char)(3814254760LL * ((long long)((int)v_7 - (int)p * (int)((unsigned short)p_9)) * p_11));
  result = (unsigned long)(~ (18446744073214308021ULL ^ (unsigned long long)(
                              (int)v + (int)p)) % ((unsigned long long)(
                                                   (55404UL ^ result) - p_5[1][0]) + 34ULL));
  return result;
}


