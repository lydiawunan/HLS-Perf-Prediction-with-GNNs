#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 106792768
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p, int p_13, long p_15, int p_17)
{
  unsigned long long v_10;
  long v_8;
  unsigned int v_6;
  unsigned short v_4;
  unsigned short v;
  double result;
  v_8 = -58231L;
  v_6 = (unsigned int)p_15;
  v_4 = (unsigned short)11660;
  v = (unsigned short)p;
  if ((unsigned long long)((long)(~ (p_13 % ((int)v_4 + 238))) + (p_15 * (long)v) % -420647659L) >= 
      18250897722115226416ULL >> ((806571873U - (unsigned int)(- p_17)) & 63U)) {
    v_4 = (unsigned short)(v_6 >> (- (- v_8) & 31L));
    v = v_4;
    result = (double)v;
  }
  else {
    v_10 = (unsigned long long)((int)(~ p) - -22369 % (p_13 / (p_13 + 974) + 662));
    result = (double)v_10;
  }
  result = (double)((long long)(- (- result)) / -289LL);
  return result;
}


