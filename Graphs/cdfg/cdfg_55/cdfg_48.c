#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 54311068
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p, unsigned long long p_5, signed char p_7,
                   long long p_9, unsigned long long p_15[2][5])
{
  unsigned long long v_21;
  unsigned long long v_19;
  unsigned int v_17;
  long long v_13;
  unsigned int v_11;
  char v;
  unsigned short result;
  v_21 = p_15[1][3];
  v_19 = 18446744073499656539ULL;
  v_13 = (long long)p_7;
  if (0ULL / (unsigned long long)((int)p_7 + 799) > (unsigned long long)(
                                                    -45502.1693663 / (
                                                    (double)(- p) + 707.)) - 
                                                    (unsigned long long)(
                                                    p_9 / (long long)(
                                                    (int)p_7 + 894)) * v_21) {
    v = (char)(! (~ (- p)));
    v_11 = (unsigned int)((- p_15[1][2] | (unsigned long long)(~ p)) / (
                          601993330ULL / (- p_15[0][1] + 119ULL) + 763ULL));
    v = (char)((35606LL % (long long)((int)v + 360)) / (long long)(v_11 + 1023U) - (
               (v_13 ^ (long long)v) ^ 0LL));
  }
  else {
    v_17 = (unsigned int)(- (- p));
    v_11 = ~ v_17 << (((unsigned long long)((int)p_7 + 25582) ^ ((unsigned long long)p_9 - p_5)) & 31ULL);
    v = (char)p_15[0][0];
  }
  if (0ULL <= (unsigned long long)(p_9 + 98032148036LL * (long long)(
                                         v_11 | 41U))) result = (unsigned short)136;
  else {
    v = (char)92;
    result = (unsigned short)v;
  }
  return result;
}


