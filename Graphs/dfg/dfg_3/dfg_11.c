//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 78793240
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p[2][2], int p_5, unsigned long long p_7,
                 short p_11, short p_13)
{
  unsigned long v_9;
  double v;
  unsigned int result;
  v_9 = (unsigned long)p_13;
  v = (double)p_11;
  result = (unsigned int)(13542ULL - (unsigned long long)(((v_9 - (unsigned long)p_5) - (unsigned long)(- p_5)) ^ (unsigned long)(
                                                          (double)((int)p_11 % (
                                                                   (int)p_13 + 349)) + v)));
  v = (double)(- p_7);
  result = (unsigned int)((unsigned long long)((int)p[0][1] % 410 - (int)(
                                               (double)result * v + (double)(! p_5))) * ~ p_7);
  result = result;
  return result;
}


