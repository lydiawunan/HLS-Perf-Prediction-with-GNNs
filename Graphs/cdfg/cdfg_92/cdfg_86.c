#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 958914472
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long long p, unsigned short p_7,
                  unsigned char p_13[2])
{
  signed char v_11;
  unsigned char v_9;
  long long v_4;
  double v;
  unsigned char result;
  v_11 = (signed char)p_7;
  v_9 = (unsigned char)p_7;
  result = p_13[1];
  v = (double)(39161UL * - ((unsigned long)p_13[1] + 462778092UL));
  if ((unsigned long long)(- (! ((int)v_9 + (int)v_11))) != 18446744073412859077ULL) {
    v_4 = (long long)(- (! p) - (unsigned long long)(- (4294928979. - v)));
    v = (double)(unsigned char)30;
    result = (unsigned char)(-77LL - (long long)((int)result | (int)((unsigned char)v)) / (
                                     v_4 + 695LL));
  }
  else {
    v_4 = (long long)(- p_7);
    result = (unsigned char)(v_4 + 88LL);
  }
  return result;
}


