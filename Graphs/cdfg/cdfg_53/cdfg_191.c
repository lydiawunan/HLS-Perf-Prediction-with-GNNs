#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 566312254
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p[3][1][1], double p_5, float p_11,
                  unsigned long long p_13, long long p_15)
{
  double v_19;
  unsigned char v_17;
  unsigned short v_9;
  char v_7;
  unsigned char v;
  unsigned char result;
  v_19 = (double)p_13;
  v_7 = (char)27;
  result = (unsigned char)216;
  v = (unsigned char)(((double)(- p_15) / (p_5 + 778.)) / (- v_19 * (double)(- p_11) + 903.));
  while (! ((int)p[0][0][0] + (int)p[2][0][0]) > (int)v % ((99 - (int)v) / (
                                                           (int)((signed char)p_5) * 66 + 467) + 369)) {
    v_17 = (unsigned int)v_7 - 615829592U;
    v_9 = (unsigned short)(((long long)(! v) % (p_15 + 290LL)) % (long long)(
                           (int)v_17 * 28916 + 579));
    result = (unsigned char)p_13;
    v = (unsigned char)((int)((unsigned short)-4898844241.95) / ((int)(~ v_9) + 206) - (int)p_11);
  }
  while_0_break: ;
  return result;
}


