#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 427863444
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, signed char p_5, int p_7,
                   unsigned int p_11, unsigned short p_15)
{
  double v_23;
  float v_21;
  short v_19;
  char v_17;
  double v_13;
  long long v_9;
  signed char v;
  unsigned short result;
  v_23 = (double)p_5;
  v_21 = 8580990464.f;
  v_19 = (short)p;
  v_17 = (char)96;
  v_13 = (double)p_5;
  v = (signed char)-7;
  while ((unsigned int)v - ! (p + (unsigned int)v_19) < (unsigned int)(~ (
         -80 % ((126 + (int)((char)v_21)) + 321)))) {
    v_13 = (unsigned long long)v_23 / 18446744073054516941ULL;
    v_17 = (char)101;
    v_19 = (short)(0 - (int)-2399765852.3);
    v = (signed char)((long long)(- v_13) / -542736272LL);
  }
  while_0_break: ;
  if (- (~ (9942 - (int)p_5)) != - ((-10 ^ (int)v_17) >> ((int)((unsigned short)-3.38293386122e+38) % (
                                                          (int)p_15 + 347) & 31))) {
    v = (signed char)p;
    result = (unsigned short)(! v);
  }
  else {
    v_9 = (long long)(p_11 % ((p - 4294950940U) / ((unsigned int)v_13 + 330U) + 650U));
    v = (signed char)(- ((long long)p_7 / (v_9 + 342LL) + (long long)(
                         -1063479349L % (long)((int)p_5 + 558))));
    result = (unsigned short)((int)v / ((int)p_5 + 468));
  }
  return result;
}


