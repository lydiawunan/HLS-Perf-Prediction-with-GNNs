#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 377039551
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned long long p, signed char p_4, short p_6, int p_9,
          double p_11)
{
  char v_19;
  short v_17;
  double v_15;
  short v_13;
  unsigned int v;
  short result;
  v_19 = (char)103;
  v_17 = (short)-22399;
  v_15 = 4234793803.7;
  v_13 = (short)p_9;
  if ((double)(~ p_9) / ((double)(~ v_13) / (((double)p - v_15) + 167.) + 222.) == (double)(- (
      (unsigned long long)((int)v_17 | (int)p_4) / ((unsigned long long)v_19 % (
                                                    p + 40ULL) + 771ULL)))) 
    v = (unsigned int)((long)p_9 + -679935L);
  else v = (unsigned int)((int)(- (535506607. * p_11)));
  if (- (6555759616.f / ((float)p_6 + 682.f)) > (float)((unsigned long long)(~ v) * 4ULL)) 
    result = (short)p;
  else result = (short)(- (- (- p_4)));
  return result;
}


