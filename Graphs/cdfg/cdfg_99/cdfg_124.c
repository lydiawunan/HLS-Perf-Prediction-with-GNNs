#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 909590099
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long p)
{
  unsigned long v_23;
  char v_20;
  signed char v_18;
  char v_16;
  char v_14;
  long v_12;
  float v_10;
  double v_8;
  long v_6;
  unsigned int v_4;
  unsigned long v;
  unsigned char result;
  v_23 = 18846UL;
  v_20 = (char)p;
  v_18 = (signed char)-31;
  v_16 = (char)-116;
  v_14 = (char)-79;
  v_12 = (long)p;
  v_10 = 2663608832.f;
  v_8 = 28.8907917833;
  v_6 = -240364737L;
  v_4 = (unsigned int)p;
  v = 4294938898UL;
  result = (unsigned char)234;
  while ((long)((int)v_16 + 51306) >> (! ((unsigned long)v_10 % (p + 500UL)) & 31UL) < - v_12) {
    v_12 = v_23 / 29630UL;
    v_14 = (char)((p + (unsigned long)(- v_16)) << (~ (3247847396UL / (
                                                       p + 326UL)) & 31UL));
    v_6 = (long)(- p);
    v_16 = (char)result;
  }
  while_0_break: ;
  while ((16431UL & (- v - (unsigned long)v_4 / (unsigned long)(v_6 + 20L))) != (unsigned long)(
         (long)(- v_8) - -500079688L)) {
    v_12 |= (long)((int)v_10 + -42780);
    result = (unsigned char)(~ (! p));
    v_16 = (char)((unsigned long)(((int)v_20 & -11) - (int)-1.36398849642e+38f) + p);
    v = (unsigned long)((unsigned long long)(v * (unsigned long)v_14 | (unsigned long)(
                                             (int)v_16 % ((int)v_18 + 711))) - - (
                        (unsigned long long)v / 18446744073709491872ULL));
  }
  while_0_break_0: ;
  return result;
}


