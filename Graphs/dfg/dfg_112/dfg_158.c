#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 239781992
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p[1][3][1], short p_9, float p_11[4][2][4])
{
  unsigned int v_13;
  unsigned long long v_7;
  signed char v_4;
  int v;
  unsigned short result;
  v_13 = 3794917941U;
  v_7 = 18446744072762339658ULL;
  v = 264249030;
  result = (unsigned short)(~ p[0][1][0]);
  v_4 = (signed char)((- (v_7 - (unsigned long long)p_9) * ((unsigned long long)(
                                                            (int)p_9 - v) ^ (
                                                            (unsigned long long)result - v_7))) / (
                      (unsigned long long)((double)((int)p_9 % ((int)p[0][0][0] + 876)) * (
                                           -2965285663.21 * (double)p_11[0][0][1])) * - (
                      (unsigned long long)v_13 * 18446744072912609456ULL) + 708ULL));
  v = (int)(~ v_7);
  result = (unsigned short)((unsigned long)((unsigned int)((int)result ^ v) | 1057643862U) % (unsigned long)(
                            199049395L / (long)((int)(- v_4) + 486) + 422L) & ! (
                            (unsigned long)(- p[0][0][0]) * 3504577421UL));
  return result;
}


