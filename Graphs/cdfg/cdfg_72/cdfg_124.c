#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 954833030
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(int p, double p_9)
{
  float v_17;
  unsigned char v_15;
  unsigned char v_13;
  unsigned int v_11;
  long long v_7;
  unsigned long long v_4;
  unsigned short v;
  long result;
  v_17 = (float)p;
  v_15 = (unsigned char)48;
  v_7 = 55729LL;
  v = (unsigned short)56615;
  result = 54510L;
  v_11 = (unsigned int)(~ (~ (-(signed char)98)));
  if (- ((float)result + v_17) / ((float)v_7 + 914.f) >= (float)((int)v_15 % (
                                                                 (int)(- (- v)) + 607))) {
    v_4 = (unsigned long long)(v_7 - (long long)((42292UL ^ (unsigned long)p) * (unsigned long)(
                                                 (int)((short)p_9) | -21746)));
    result = (long)(~ (! p));
    result = (long)(! (((unsigned long long)v | v_4) + (unsigned long long)(
                       (long)p * result)));
  }
  else {
    v_13 = (unsigned char)(- ((unsigned long)(result & 52L) * (unsigned long)(
                              (unsigned int)v_15 - v_11)));
    v_4 = (802087838ULL & (unsigned long long)(! v_13)) % 575ULL;
    result = (long)((v_4 % (unsigned long long)(p + 249)) % (441879335ULL / (
                                                             v_4 + 929ULL) + 109ULL) | (unsigned long long)(- v_11));
  }
  return result;
}


