#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 570182916
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p, unsigned long long p_11, int p_13, signed char p_15,
         float p_17)
{
  float v_23;
  char v_21;
  float v_19;
  int v_9;
  long v_7;
  unsigned long v_5;
  int v;
  char result;
  v_23 = (float)p_11;
  v_21 = (char)p;
  v_19 = (float)p_11;
  v_9 = 54255;
  v_7 = -11356L;
  v_5 = 4294940566UL;
  result = (char)105;
  if ((float)(! v_21) + (v_19 / (v_23 + 817.f)) / 57474.f > (float)(! (
                                                                    p_13 % -54515) * (
                                                                    -71 * (int)((char)(- v_23))))) {
    v_5 = (unsigned long)((18446744073687857290ULL | (unsigned long long)(
                           v_5 + 14289UL)) ^ p_11 / (unsigned long long)(
                                             (int)(! p) + 899));
    v_9 = v_9;
    v = (int)(- ((v_7 * (long)p) % (long)(~ v_9 + 580)));
  }
  else {
    v_5 = (unsigned long)(((float)(825890177L % (long)((int)p_15 + 1011)) + 
                           p_17 / ((float)p + 459.f)) * ((float)v_7 + v_19));
    result = (char)v_5;
    v = (int)(- (((unsigned long long)p_13 | p_11) - 18446744072783526870ULL));
  }
  result = (char)((unsigned long)(840465860 << ((int)p * (int)result & 31)) % (
                  (unsigned long)(34317 % (v + 236)) / (v_5 + 801UL) + 701UL));
  return result;
}


