#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 33362515
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned char p[2], unsigned long long p_4,
                  unsigned short p_11, long p_13, float p_15[1][4][4])
{
  short v_17;
  unsigned long long v_9;
  long v_7;
  unsigned long long v;
  unsigned long result;
  v_7 = (long)p_15[0][2][1];
  v = (unsigned long long)p_15[0][1][0];
  result = (unsigned long)p_15[0][3][0];
  v_9 = (unsigned long long)(- (- (v_7 - (long)p[0])));
  while ((unsigned long long)((~ result + (unsigned long)p[0]) & 82UL) >= 
         p_4 % (v + 845ULL)) {
    v_17 = (unsigned long)v_7 / 3914695374UL;
    v_7 = (long)((float)(((int)v_17 % 9) % 39) / (p_15[0][2][0] + 995.f));
    result = (unsigned long)(- (- v_7)) - (unsigned long)(4171695975U / (
                                                          (unsigned int)(- p_15[0][1][3]) + 809U));
    v = - ((v_9 + (unsigned long long)p_11) + (unsigned long long)(- p_13));
  }
  while_0_break: ;
  return result;
}


