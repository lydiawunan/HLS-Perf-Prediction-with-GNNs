#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 216852625
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(void)
{
  signed char v_14;
  long long v_12;
  signed char v_10;
  short v_8;
  long long v_6;
  int v_4;
  char v;
  char result;
  v_14 = (signed char)70;
  v_12 = -34518LL;
  v_8 = (short)-24447;
  v_4 = -218866642;
  v = (char)-116;
  result = (char)89;
  v_6 = (long long)v_14;
  while ((long)(- (~ ((int)result * (int)v))) == (long)(- (! v_4)) - -222372252L) {
    v = v_6 * 197LL;
    v_10 = v_14;
    v_6 = v_12;
    result = (char)((((long)v_8 + 1053380124L) * (long)(- result)) % (long)(
                    (int)(- v_10) + 746));
  }
  while_0_break: ;
  return result;
}


