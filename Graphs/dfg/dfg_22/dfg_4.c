#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 340743586
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p, signed char p_5[5][4], short p_11, int p_15, int p_21)
{
  long long v_19;
  unsigned int v_17;
  short v_13;
  float v_9;
  double v_7;
  signed char v;
  signed char result;
  v_19 = (long long)p_21;
  v_17 = 15822U;
  v_7 = (double)p_11;
  v = (signed char)-42;
  v_9 = (float)((unsigned long)(~ (~ (- p_21))) * ((4164856859UL - (unsigned long)p_15) - (unsigned long)p_11));
  v_13 = (short)((long long)((unsigned int)p_5[3][3] % (((unsigned int)(
                                                         469 - p_15) + (
                                                         v_17 + (unsigned int)p_5[4][0])) + 786U)) & 
                 (((long long)v_9 * v_19) % ((v_19 + (long long)p_21) + 140LL)) * (long long)p_15);
  v_9 = (float)p_11;
  result = (signed char)((float)((int)(~ v) % ((int)v * 11301 + 501) - (
                                 (int)p - (int)p_5[1][3] % ((int)((signed char)v_7) + 471))) / (
                         - (v_9 + (float)((int)p_11 | (int)v_13)) + 37.f));
  return result;
}


