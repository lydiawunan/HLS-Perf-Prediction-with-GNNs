#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 447557725
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p, unsigned long p_7, int p_11,
                       unsigned long p_13[2], int p_15)
{
  char v_19;
  unsigned long v_17;
  long v_9;
  long v_5;
  short v;
  unsigned long long result;
  v_19 = (char)p_7;
  v_17 = (unsigned long)p_15;
  v_9 = (long)p;
  v_5 = 435405297L;
  result = (unsigned long long)p_15;
  while ((unsigned long long)(((unsigned long)v_5 | p_7) & ((unsigned long)v_9 - p_7)) + - (
         (unsigned long long)p_11 - 45360ULL) > (unsigned long long)(- (
         (long long)(p_13[0] - (unsigned long)p_15) + (166818550LL | (long long)p_11)))) {
    v_17 += (unsigned long)-782.867653546;
    result = (unsigned long long)p_13[1];
    v_9 = (long)(3485476084U * (unsigned int)((int)v_19 & p_11));
    v_5 = (long)-1.56697292491e+38f;
  }
  while_0_break: ;
  if (~ (p * (unsigned long long)v_5 - (result + p)) == (unsigned long long)v_5) 
    result = 54631ULL;
  else {
    v = (short)-29775;
    result = ! ((p % (unsigned long long)((int)v + 47)) % 53ULL);
  }
  return result;
}


