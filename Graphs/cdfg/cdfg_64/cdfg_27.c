#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 976481562
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p, unsigned short p_9, long long p_11[2], float p_15,
                  unsigned short p_17)
{
  int v_21;
  double v_19;
  char v_13;
  unsigned short v_6;
  float v_4;
  unsigned int v;
  unsigned long result;
  v_21 = p;
  v_19 = -3.31240729059e+38;
  v_13 = (char)p_11[1];
  v_4 = (float)p_17;
  if ((int)(- v_19 - (double)((float)p + p_15)) >> (- (v_21 - -4179) & 31) < (int)(! (! p_9))) {
    v = 395044169U;
    v_6 = (unsigned short)(! (- p) - ((int)p_9 * (int)((unsigned short)v_4) + 
                                      48 % ((int)p_9 + 252)));
    v_4 = (float)((unsigned int)(137 * (int)v_6) / ((unsigned int)-1903159296.f / (
                                                    v + 51U) + 722U) ^ (unsigned int)p);
  }
  else {
    v = (unsigned int)((int)(- p_17) - (int)((unsigned short)(- p_15)));
    v_6 = (unsigned short)(! ((unsigned int)(p * (int)p_17) & ~ v));
    v_4 = (float)((- p_11[1] / (long long)((long)v_13 * 673251552L + 31L)) % (long long)(
                  (((unsigned long)p_15 & 54321UL) - (unsigned long)(
                   (int)v_6 * (int)p_17)) + 353UL));
  }
  result = ((unsigned long)(v % ((unsigned int)v_4 + 887U)) % 53339UL) / 31990199UL;
  return result;
}


