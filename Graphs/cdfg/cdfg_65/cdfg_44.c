#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 144243207
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long long p, double p_5[1][2][2], char p_11,
                  short p_13)
{
  long long v_9;
  unsigned char v_7;
  signed char v;
  unsigned long result;
  v_9 = 890667611LL;
  v_7 = (unsigned char)p_5[0][1][1];
  v = (signed char)-13;
  result = (unsigned long)((double)((int)v_7 << (((long long)v ^ 25297385LL) & 7LL)) + 
                           (double)((int)p_11 / -114) / 1228.41156185);
  if ((long long)((unsigned long)((double)v * p_5[0][1][1]) % ((result ^ (unsigned long)v_7) + 616UL)) + v_9 <= (long long)(
      (long)((-626140324 * (int)p_11) / ((int)p_13 + 658)) - 0 % 755L)) {
    result = (unsigned long)-6884950528.f;
    result *= 114UL;
  }
  else {
    result = 4294967183UL;
    result = (unsigned long)(! (- (p - (unsigned long long)result)));
  }
  return result;
}


