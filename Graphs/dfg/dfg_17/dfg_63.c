#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 489122105
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p, short p_5, unsigned int p_9[1][4],
                   unsigned short p_11, int p_15)
{
  unsigned long v_13;
  unsigned long v_7;
  int v;
  unsigned short result;
  v_13 = 75735050UL;
  v = (int)((v_13 / 79UL) % (- (v_13 - (unsigned long)((int)8.83109169949e+37 | p_15)) + 27UL));
  v_7 = (unsigned long)(! (-425783147 % ((~ v + ! v) + 434)));
  v = (int)(((unsigned long)((v % (p + 296)) * p) + ((unsigned long)(~ p_5) - ~ v_7)) + (unsigned long)(
            ~ (- p_9[0][2]) * (unsigned int)(- (~ p_11))));
  result = (unsigned short)v;
  return result;
}


