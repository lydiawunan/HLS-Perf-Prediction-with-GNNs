#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1043808235
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long p, unsigned short p_5, signed char p_7, unsigned int p_9,
        float p_11)
{
  double v_21;
  char v_19;
  short v_17;
  char v_15;
  float v_13;
  unsigned int v;
  int result;
  v_21 = (double)p_7;
  v_15 = (char)p_7;
  if (- (-21295L % (p + 328L)) <= (long)(~ ((int)((unsigned short)(- v_21)) + 38468))) {
    v_13 = (float)p_9;
    result = - ((int)(- v_15) / ((int)(- p_5) + 813));
    v = (! p_9 + (unsigned int)(p_11 - v_13)) / ((unsigned int)((int)p_11 & result) % (
                                                 960469227U % (unsigned int)(
                                                 (int)p_5 + 481) + 961U) + 103U);
  }
  else {
    v_19 = (char)((unsigned int)(- v_21) + p_9);
    v_17 = (short)(! v_19);
    v = (unsigned int)((unsigned long)((int)p_5 % ((int)v_17 + 141)) * (
                       1901314164UL ^ (unsigned long)(p * (long)-5.56791187259e+37f)));
  }
  result = (int)((-3L / ((p >> (v & 31U)) + 125L)) % ((long)((int)p_5 << (
                                                             (int)p_7 & 15)) % 734560304L + 667L));
  return result;
}


