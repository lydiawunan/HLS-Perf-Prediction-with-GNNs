#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 973541486
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, float p_9[4], int p_11, unsigned long long p_21)
{
  char v_19;
  unsigned long v_17;
  char v_15;
  unsigned long long v_13;
  double v_6;
  long v_4;
  unsigned int v;
  short result;
  v_19 = (char)p_11;
  v_17 = (unsigned long)p_9[1];
  v_15 = (char)-51;
  v_4 = (long)p_11;
  v_13 = (unsigned long long)(~ v_17) / (- ((unsigned long long)(v_4 / (long)(
                                                                 (int)v_19 + 150)) + 
                                            p_21 % (unsigned long long)(
                                            p + 686L)) + 733ULL);
  v_6 = (double)(! (~ (~ v_13) + (unsigned long long)v_15));
  v = (unsigned int)(- ((long)(- v_6) % (((p - (long)p_9[0]) - (long)p_11) + 67L)));
  result = (short)(~ (~ (9954499ULL | (unsigned long long)((unsigned long)v * (unsigned long)v_4))));
  return result;
}


