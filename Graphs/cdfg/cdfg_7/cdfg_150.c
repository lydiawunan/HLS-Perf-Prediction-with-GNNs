#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 783386366
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(void)
{
  float v_10;
  unsigned int v_8;
  unsigned int v_6;
  short v_4;
  unsigned long long v;
  char result;
  v_10 = -347.883087158f;
  v_8 = 4294953454U;
  v_6 = 3894013228U;
  v_4 = (short)8411;
  v = 18446744073138329416ULL;
  while (v_6 > ~ (4294962992U / (v_8 + 267U))) {
    v_6 = (int)((unsigned short)v_10) + 43827;
    v_4 = ! (- v_4);
    v = 18446744073709470853ULL;
    v_8 = (unsigned int)(~ (~ (short)-14388));
  }
  while_0_break: ;
  result = (char)(- (! (v % (unsigned long long)((int)v_4 + 838))));
  return result;
}


