#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 274757510
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p, unsigned int p_4, float p_7, long long p_9,
                unsigned short p_13)
{
  float v_25;
  unsigned char v_23;
  long v_21;
  long v_19;
  long v_17;
  unsigned long long v_15;
  long long v_11;
  unsigned long v;
  signed char result;
  v_25 = -4046423808.f;
  v_23 = (unsigned char)134;
  v_21 = (long)p_9;
  v_19 = 64573L;
  v_17 = (long)p;
  v_15 = (unsigned long long)p;
  v_11 = -445251578LL;
  v = (unsigned long)p_13;
  if ((double)(- (((float)p - v_25) + (float)p_9)) > 2.08451530482e+41 - (double)(
                                                     (float)(v_15 % (unsigned long long)(
                                                             (int)p_13 + 255)) * (
                                                     628388992.f * v_25))) {
    result = (signed char)(- (v_17 ^ (v_19 - v_21)));
    v = (unsigned long)((int)((unsigned char)932.990112305f) * 102) * ! v;
    v_11 = (long long)(- (- (- p)));
  }
  else {
    result = (signed char)(! (! (v_11 + (long long)v_25)));
    v_11 = (long long)((unsigned long long)(p_7 * (float)(- p)) + (unsigned long long)result * (
                                                                  11632ULL - (unsigned long long)v_23));
    v = (unsigned long)(~ 0);
  }
  while ((unsigned long long)p_4 / 310311791ULL + (unsigned long long)(
         ((unsigned long)result ^ v) * ((unsigned long)p_7 * 50142UL)) < (unsigned long long)(~ p_9)) {
    v_15 = (unsigned long long)v_11 - 18446744073464577500ULL;
    v_11 = (long long)(- v_15);
    v = (unsigned long)(~ (! (-30200)));
    result = (signed char)p_13;
  }
  while_0_break: ;
  return result;
}


