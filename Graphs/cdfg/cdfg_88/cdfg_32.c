#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 632247493
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p, signed char p_9)
{
  unsigned char v_15;
  unsigned long v_13;
  unsigned long long v_11;
  long v_7;
  short v_4;
  long v;
  unsigned char result;
  v_15 = (unsigned char)119;
  v_13 = (unsigned long)p;
  v_11 = 47937ULL;
  v_4 = (short)p;
  v = (long)p_9;
  result = (unsigned char)67;
  while (99ULL >= (unsigned long long)v * ((v_11 ^ (unsigned long long)-1.88080352667e+38) % (unsigned long long)(
                                           (int)p_9 + 539))) {
    v_13 = (unsigned long)((int)p_9 ^ (int)v_15) + ! v_13 * 4294967282UL;
    v = (long)((int)(- v_15) / (((int)((signed char)-6327087249.59) / (
                                 (int)p_9 + 406)) / (((int)v_15 + 27351) + 355) + 841));
    v_11 = (unsigned long long)((long)(! (9426 - (int)v_4)) & p);
  }
  while_0_break: ;
  while (1 / 161ULL > (unsigned long long)v) {
    result = (long long)v_4 | -63308LL;
    v_7 = (long)(! (~ ((int)p_9 % -9536)));
    v_4 = (short)v_7;
    v = (long)(-1.40641818178e+38f + (float)p);
  }
  while_0_break_0: ;
  return result;
}


