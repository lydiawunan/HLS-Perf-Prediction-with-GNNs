#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 180002049
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, short p_11, char p_13, unsigned char p_15,
                  signed char p_17)
{
  unsigned char v_21;
  signed char v_19;
  long v_9;
  long v_7;
  float v_4;
  char v;
  unsigned char result;
  v_21 = p_15;
  v_19 = (signed char)18;
  v_9 = (long)p_15;
  v_4 = (float)p_17;
  v = (char)p;
  if ((long long)(((unsigned long)p_13 + 63319UL % (unsigned long)((int)p_17 + 975)) + (unsigned long)p_15) == 
      ~ ((long long)v_19 + -289630139LL) * (long long)((int)p_11 + (int)v / (
                                                                   (int)v_21 + 666))) {
    v_9 = (long)(! p_11);
    v_7 = v_9;
    v = (char)v_7;
  }
  else {
    v_4 = (float)(unsigned char)84;
    v = (char)((int)((double)((int)p_17 | 178) / (p + 869.)) * (((int)p / 876404178) * -7900));
    v = (char)(~ ((long)((int)v * (int)p_13) * ((long)p_15 * v_9)));
  }
  result = (unsigned char)((long long)(! ((int)v * -104)) + (long long)(
                                                            (double)v_4 + p) % 286LL);
  return result;
}


