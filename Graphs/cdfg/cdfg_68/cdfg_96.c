#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 990433402
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p[1], unsigned long long p_5[1][5], unsigned long p_9)
{
  unsigned int v_17;
  char v_15;
  unsigned char v_13;
  unsigned int v_11;
  unsigned short v_7;
  unsigned long v;
  int result;
  v_17 = (unsigned int)p_5[0][0];
  v_15 = (char)p_9;
  v_13 = (unsigned char)p_9;
  v_11 = (unsigned int)p_5[0][2];
  v_7 = (unsigned short)p_5[0][2];
  v = p_9;
  result = (int)p_9;
  v_7 = (unsigned short)(- (((unsigned long)v_7 * v) % 4294965419UL));
  while ((unsigned long long)(v * (unsigned long)p[0] << 12) * (p_5[0][3] % (unsigned long long)(
                                                                (int)v_7 / 100 + 870)) != (unsigned long long)(
         - (~ p_9) * (unsigned long)(1536U / ((v_11 << ((int)v_13 & 31)) + 684U)))) {
    v_13 = v_17 * (unsigned int)((int)v_15 + -57534);
    v_11 = (unsigned int)p_9;
    result = (int)(~ p_5[0][4] + (unsigned long long)(~ p_9));
    v_7 = (unsigned short)(~ (18446744073709532607ULL % (49389ULL % (unsigned long long)(
                                                         (int)p[0] + 166) + 899ULL)));
  }
  while_0_break: ;
  return result;
}


