#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 270570104
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, short p_5, float p_11, long p_13,
                  unsigned char p_15[5][1][4])
{
  double v_9;
  unsigned long long v_7;
  unsigned long v;
  unsigned char result;
  v_7 = (unsigned long long)((long)p_15[0][0][1] * p_13);
  v_9 = 764.60304495;
  v = (unsigned long)((((unsigned long long)p_5 * (v_7 % (v_7 + 302ULL))) / (unsigned long long)(
                       (int)(v_9 - (double)p_11) % ((int)p / ((int)p_5 + 449) + 713) + 366)) % (unsigned long long)(
                      ! (- p_13) + 777L));
  result = (unsigned char)(v / (unsigned long)((int)p + 415));
  return result;
}


