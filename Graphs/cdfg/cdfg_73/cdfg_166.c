#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 575344393
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p[3], unsigned long long p_4, unsigned short p_7,
           short p_9[4][4], unsigned int p_11)
{
  double v_17;
  unsigned long v_15;
  char v_13;
  double v;
  double result;
  v_17 = -6085235555.61;
  v_15 = 3527022515UL;
  v = (double)p_11;
  v_13 = (char)(- (- v) - (double)(((unsigned long)p_7 * v_15) % ((unsigned long)(- v_17) + 900UL)));
  if ((unsigned int)p_9[3][0] < (- p_11 ^ (unsigned int)(- (- v_13)))) {
    v = (double)((int)p_7 % -19342);
    result = (double)(((unsigned long long)((int)p[1] ^ 8150) & p_4 % (
                                                                (unsigned long long)v + 874ULL)) >> 13U);
  }
  else result = (double)(((long)((int)p_7 / 46) ^ -59780L) + 35953L);
  return result;
}


