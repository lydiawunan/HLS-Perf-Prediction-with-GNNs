#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 474823518
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p)
{
  unsigned char v_14;
  long v_12;
  char v_10;
  signed char v_8;
  unsigned short v_6;
  unsigned long v_4;
  unsigned long v;
  unsigned long result;
  v_10 = (char)-29;
  v_8 = (signed char)-97;
  v_6 = (unsigned short)54518;
  v = 3716978576UL;
  result = 870398069UL;
  v_4 = (unsigned long)((unsigned long long)v_10 - (92ULL - ((unsigned long long)p + 205580122ULL)));
  while (v != - (- (v_4 + (unsigned long)v_6))) {
    v_14 = (int)v_8 * 62;
    v_12 = (long)(0 % (p + 472U) ^ (unsigned int)(- (-29 + (int)((signed char)791.215209961f))));
    v_4 = (unsigned long)((((long)v_10 % (v_12 + 865L)) % ((long)-7714910208.f + 572L)) % (
                          ((long)v_14 * v_12) % (long)((int)v_6 / 86 + 820) + 913L));
    v_6 = (unsigned short)422;
  }
  while_0_break: ;
  return result;
}


