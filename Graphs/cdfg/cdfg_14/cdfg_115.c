#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 583742367
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long long p, unsigned short p_5, unsigned long p_7, short p_11,
         short p_15)
{
  double v_19;
  unsigned long long v_17;
  char v_13;
  unsigned long v_9;
  unsigned int v;
  long result;
  v_19 = (double)p_15;
  v_17 = (unsigned long long)p_15;
  v_13 = (char)p_11;
  v_9 = p_7;
  v = (unsigned int)p_5;
  if ((unsigned long long)(~ v / (unsigned int)((int)(! p_15) + 658)) > 
      v_17 / ((unsigned long long)v_19 + 432ULL)) {
    v = (unsigned int)(4294967277UL / (p_7 / (v_9 + 37UL) + 641UL) ^ (unsigned long)(
                       ((int)p_11 ^ (int)v_13) - ((int)p_15 + (int)p_5)));
    v = (unsigned int)(~ (~ p_5)) + v;
    v = - (~ v);
  }
  else v = (unsigned int)p_5;
  result = (long)(((unsigned long long)v / 18446744073122335334ULL) / (unsigned long long)(
                  p % 252LL + 580LL) & 15490ULL);
  return result;
}


