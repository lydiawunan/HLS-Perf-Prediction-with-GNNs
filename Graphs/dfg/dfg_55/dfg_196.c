#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 258982604
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned int p[5][5][4], int p_9, unsigned short p_11,
                  unsigned long p_13, unsigned char p_15)
{
  unsigned long long v_6;
  int v_4;
  unsigned long long v;
  unsigned char result;
  v = (unsigned long long)(~ (0UL / (4294967290UL / (p_13 + 35UL) + 135UL)) * (
                           ((unsigned long)((int)p_15 * (int)p_15) + - p_13) % 54771UL));
  v_6 = (unsigned long long)(~ (~ p_9) % ((int)(- p_11) + 341));
  v_4 = (int)(~ (18446744072745379166ULL * v_6) / (unsigned long long)(
              ~ p[3][2][1] + 261U));
  result = (unsigned char)(v & (unsigned long long)(0U / (unsigned int)(
                                                    v_4 + 605)));
  return result;
}


