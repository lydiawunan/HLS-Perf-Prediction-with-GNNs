#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 825949695
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, unsigned short p_9, signed char p_11,
                  short p_13[1][4], int p_15[5])
{
  long v_7;
  float v_4;
  unsigned int v;
  unsigned long result;
  v_7 = (long)p_15[0];
  v_4 = (float)((unsigned long long)((int)p_11 >> ((353 + (int)(~ p_13[0][1])) & 7)) % 18446744073446795078ULL);
  v = (unsigned int)(v_7 << (18446744073108178521ULL / (unsigned long long)(
                             (int)p_9 + 782) & 31ULL));
  result = - (((unsigned long)(- v) - ((unsigned long)v_4 | 585032975UL)) % (unsigned long)(
              (4294945327U | (4294966808U - p)) + 145U));
  return result;
}


