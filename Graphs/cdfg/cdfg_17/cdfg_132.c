#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 17741840
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(signed char p, unsigned int p_4, unsigned short p_6[3][5], float p_8,
        unsigned long p_17)
{
  signed char v_15;
  char v_13;
  unsigned int v_11;
  long long v;
  int result;
  v_15 = (signed char)28;
  v_11 = (unsigned int)p_6[2][2];
  v = (long long)p;
  result = -8217;
  v_13 = (char)(- (- (p_8 / 746253376.f)));
  while (- result == (int)((float)(~ (! p_6[0][4])) - - (p_8 * (float)v))) {
    v_13 = (unsigned long)v_15 - (unsigned long)v_13 / ((unsigned long)v_11 * 109990222UL + 719UL);
    v_11 = (unsigned int)p_17;
    v_15 = (signed char)(- (33891LL / (long long)((int)p_6[1][3] + 514)) + (long long)(~ p_6[0][0]));
    v = (long long)(! (! -1824));
  }
  while_0_break: ;
  return result;
}


