#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 669318679
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(double p, unsigned int p_5[5], double p_7, int p_9, double p_13)
{
  unsigned int v_27;
  signed char v_25;
  long long v_23;
  unsigned long v_21;
  char v_19;
  long v_17;
  unsigned long v_15;
  char v_11;
  unsigned short v;
  short result;
  v_27 = 110503240U;
  v_25 = (signed char)124;
  v_23 = (long long)p;
  v_21 = 53064UL;
  v_19 = (char)84;
  if (~ ((unsigned long long)v_27 - (25026ULL - (unsigned long long)p_13)) >= (unsigned long long)(
      ((double)(27156LL * (long long)p_9) - -2.43799697173e+38) - 25.)) {
    v = (unsigned short)p_13;
    v_11 = (char)-126;
    v = (unsigned short)(~ ((int)v + (int)v_11) | -85);
  }
  else {
    v_17 = (long)((long long)(-210.852676392f / ((float)(-76 & p_9) + 76.f)) + (
                  (long long)(~ v_21) ^ (v_23 + (long long)v_25)));
    v_15 = (unsigned long)(! (- v_17) - (long)v_19);
    v = (unsigned short)v_15;
  }
  if ((long long)(0 % ((long)(- (- p_7)) + 91L)) > (long long)v) {
    v = (unsigned short)p;
    result = (short)v;
  }
  else result = (short)p_5[0];
  return result;
}


