#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 489804442
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p[3][5][2], unsigned short p_17)
{
  float v_15;
  unsigned long v_13;
  short v_11;
  unsigned short v_9;
  long v_7;
  unsigned long v_5;
  char v;
  float result;
  v_15 = -6.08283091257e+36f;
  v_13 = 57305UL;
  v_7 = -32500505L;
  v_5 = 4172690458UL;
  v_11 = (short)(! (~ v_13 / ((unsigned long)(v_15 * (float)p_17) + 94UL)) - v_13);
  v_9 = (unsigned short)((int)(~ v_11) / -216605153);
  v = (char)((unsigned long long)((63303UL % (v_5 + 158UL) | (unsigned long)(- v_7)) * (unsigned long)(- (
                                  p[2][3][0] % -52L))) % ((1050948278ULL - (unsigned long long)(
                                                           (long)v_9 * (
                                                           53610L / (
                                                           p[1][3][0] + 796L)))) + 484ULL));
  result = (float)(! (p[1][0][1] % (long)((int)v + 795)));
  return result;
}


