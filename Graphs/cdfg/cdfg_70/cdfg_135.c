#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 255481590
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p, unsigned long long p_7[3], int p_9, double p_19[1],
         float p_21)
{
  unsigned int v_25;
  short v_23;
  int v_17;
  int v_15;
  char v_13;
  float v_11;
  long v_4;
  unsigned int v;
  char result;
  v_25 = (unsigned int)p_9;
  v_23 = (short)28040;
  v_17 = -6713;
  v_13 = (char)-110;
  v_4 = (long)p_9;
  if (310544396LL == (long long)((unsigned int)((float)((unsigned int)v_23 + v_25) - (
                                                (float)p_9 - 1.24008300263e+37f)) * (
                                 - v_25 & (unsigned int)(- p_21)))) {
    v_15 = (int)(0L - (long)(~ (- v_17)));
    result = (char)((int)p / (((int)v_13 - 35) + 17) & - v_15);
    v_11 = - -2853.87182617f;
  }
  else {
    result = (char)((double)(p_21 / 3749819648.f) - - p_19[0] / ((double)p_9 + 346.));
    v_11 = (float)(~ (~ (104 + (int)((signed char)p_19[0]))));
  }
  if (p_7[1] >= (unsigned long long)(~ (p_9 * (int)v_11 ^ 105))) {
    v_4 = (long)p - 194466933L * (long)(~ result);
    v = (unsigned int)(! (~ (v_4 % (long)((int)p + 406))));
    result = (char)(! (! (~ v)));
  }
  else result = (char)(~ (signed char)-54);
  return result;
}


