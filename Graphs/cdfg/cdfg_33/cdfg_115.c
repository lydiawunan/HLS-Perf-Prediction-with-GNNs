#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 805640179
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, char p_4, char p_7, unsigned int p_9,
                   long long p_11)
{
  int v_17;
  char v_15;
  unsigned long long v_13;
  unsigned long v;
  unsigned short result;
  v_17 = (int)p_11;
  v_15 = p_4;
  v_13 = (unsigned long long)p;
  v = (unsigned long)p_4;
  result = (unsigned short)p_7;
  while (v_13 > v_13) {
    v_15 = v_17 * ((int)v_15 * 286524841);
    v = (unsigned long)p_7;
    result = (unsigned short)(! (! 3929151723UL));
    v_13 = 3464468257ULL;
  }
  while_0_break: ;
  while (((int)p + (int)(! p)) - (int)p_4 > (int)result) {
    result = v + 4294956919UL;
    v = (unsigned long)(- (- p_11) / (long long)(71967657U * (unsigned int)p + 482U));
    result = (unsigned short)(- ((unsigned long)result + v) % (unsigned long)(
                              ((unsigned int)p_7 * p_9) / (unsigned int)(
                              (-106 ^ (int)p_7) + 276) + 527U));
  }
  while_0_break_0: ;
  return result;
}


